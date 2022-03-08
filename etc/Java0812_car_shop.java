import java.util.Scanner;

//////////////////////////////숭이네 중고차//////////////////////////

class carList {
	String carName;
	int option;
	int year;
	int km;
	int price;

	carList (String carName, int option, int year, int km, int price) {
		this.carName = carName;
		this.option = option;
		this.year = year;
		this.km = km;
		this.price = price;
		System.out.println("차량이 등록되었습니다.");
	}

	public String toString() {
		return this.carName+"(옵션유무 "+this.option+"/"+this.year+"/"+this.km+")" +": "+ this.price+"만원"; 


	}

}

abstract class payment {
	String purchaseName;

	abstract void pay(int price);
	abstract void show();
}

class cash extends payment {
	int amount;

	cash(String purchaseName, int amount) {
		this.purchaseName = purchaseName;
		this.amount = amount;
	}

	void pay(int price) {
		if (this.amount < price) {
			System.out.println("현금이 부족합니다.");
		}
		else {
			this.amount -= price;
			System.out.println("결제 성공했습니다.\n숭이네 중고차를 이용해주셔서 감사합니다.");
		}

	}

	void show() {
		System.out.println(this.purchaseName + "님의 현금: " + this.amount + "만원");
	}
}

class credit extends payment {
	int lim;
	int used;

	credit(String purchaseName, int lim, int used) {
		this.purchaseName = purchaseName;
		this.lim = lim;
		this.used = used;
	}

	void pay (int price) {
		if (this.used+price > lim) {
			System.out.println("한도 초과입니다.");
		}
		else {
			this.used += price;
			System.out.println("결제 성공했습니다.\\n숭이네 중고차를 이용해주셔서 감사합니다.");
		}
	}

	void show() {
		System.out.println(this.purchaseName + "님의 신용카드" + "\n한도: " + this.lim + "\n사용 금액: " + this.used + "\n한도까지 남은 금액: " + (this.lim - this.used));
	}

}


public class Java0812_car_shop {

	public static void main(String[] args) {
		int index = 0;
		Scanner sc = new Scanner (System.in);
		carList[] cars = new carList[10];
		System.out.println("\n###################기본 정보를 입력합니다.###################");
		System.out.print("이름을 입력하세요: ");
		String name = sc.nextLine();
		System.out.print("보유중인 현금 액수를 입력하세요(단위: 만원): ");
		int amount = sc.nextInt();
		System.out.print("카드 한도를 입력하세요.(단위: 만원): ");
		int lim = sc.nextInt();
		System.out.print("현재까지 카드 사용 금액을 입력하세요.(단위: 만원): ");
		int used = sc.nextInt();
		cash flex1 = new cash(name,amount);
		credit flex2 = new credit(name,lim,used);
		System.out.println("정보 입력 완료");

		
		System.out.println("\n숭이네 중고차를 방문해주셔서 감사합니다.\n");

		while (true) {
			System.out.println("\n\n###################기본 메뉴로 이동합니다.###################");
			System.out.println("1. 중고차 매물 올리기\n2. 중고차 구입하기\n3. 잔액 확인\n4. 프로그램 종료");

			int act = sc.nextInt();
			sc.nextLine();

			if (act == 1) {
				System.out.println("\n\n###################중고차 매물 올리기###################");

				if (index >= 10) {
					System.out.println("숭이네 중고차 매물이 가득 찼습니다. 나중에 방문해주세요.");
					continue;
				}

				System.out.println("팔 중고차 정보를 입력합니다.");
				System.out.print("모델명: ");
				String carName = sc.nextLine();
				System.out.print("옵션 유무 (유:1, 무:0):");
				int option = sc.nextInt();
				System.out.print("연형: ");
				int year = sc.nextInt();
				System.out.print("주행 거리(km): ");
				int km = sc.nextInt();
				System.out.print("가격(만원): ");
				int price = sc.nextInt();
				cars[index++] = new carList(carName, option, year, km, price);


			}
			else if (act == 2) {

				System.out.println("\n\n###################중고차 구입하기###################");

				if (cars[0] == null) {
					System.out.println("매물을 우선 등록해주세요.");
					continue;
				}

				System.out.println("현재 등록된 매물을 표시합니다.");
				for (int i = 0; i < index ; i++) {
					System.out.println((i+1) + ". " +cars[i]);
				}

				System.out.print("구입할 매물 번호를 입력하세요");
				int purNum = sc.nextInt();
				int cost = cars[purNum-1].price;
				System.out.println("해당 매물의 가격은 " + cost + "만원 입니다.");


				System.out.print("결제 수단을 선택하세요. 1.현금 2.신용카드");
				int method = sc.nextInt();

				if (method == 1) {
					flex1.pay(cost);
				}
				else {
					flex2.pay(cost);
				}
			}

			else if (act == 3) {

				System.out.println("\n\n###################잔액 확인###################");
				flex1.show();
				System.out.println();
				flex2.show();
			}
			else if (act == 4) {
				System.out.println("종료합니다. 숭이네 중고차 다음에 또 이용해주세요.");
				break;
			}
			else {
				System.out.println("올바른 번호를 입력해주세요");
				continue;
			}
		}


	}

}
