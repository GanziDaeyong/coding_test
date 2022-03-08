import java.util.Scanner;

//////////////////////////////���̳� �߰���//////////////////////////

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
		System.out.println("������ ��ϵǾ����ϴ�.");
	}

	public String toString() {
		return this.carName+"(�ɼ����� "+this.option+"/"+this.year+"/"+this.km+")" +": "+ this.price+"����"; 


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
			System.out.println("������ �����մϴ�.");
		}
		else {
			this.amount -= price;
			System.out.println("���� �����߽��ϴ�.\n���̳� �߰����� �̿����ּż� �����մϴ�.");
		}

	}

	void show() {
		System.out.println(this.purchaseName + "���� ����: " + this.amount + "����");
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
			System.out.println("�ѵ� �ʰ��Դϴ�.");
		}
		else {
			this.used += price;
			System.out.println("���� �����߽��ϴ�.\\n���̳� �߰����� �̿����ּż� �����մϴ�.");
		}
	}

	void show() {
		System.out.println(this.purchaseName + "���� �ſ�ī��" + "\n�ѵ�: " + this.lim + "\n��� �ݾ�: " + this.used + "\n�ѵ����� ���� �ݾ�: " + (this.lim - this.used));
	}

}


public class Java0812_car_shop {

	public static void main(String[] args) {
		int index = 0;
		Scanner sc = new Scanner (System.in);
		carList[] cars = new carList[10];
		System.out.println("\n###################�⺻ ������ �Է��մϴ�.###################");
		System.out.print("�̸��� �Է��ϼ���: ");
		String name = sc.nextLine();
		System.out.print("�������� ���� �׼��� �Է��ϼ���(����: ����): ");
		int amount = sc.nextInt();
		System.out.print("ī�� �ѵ��� �Է��ϼ���.(����: ����): ");
		int lim = sc.nextInt();
		System.out.print("������� ī�� ��� �ݾ��� �Է��ϼ���.(����: ����): ");
		int used = sc.nextInt();
		cash flex1 = new cash(name,amount);
		credit flex2 = new credit(name,lim,used);
		System.out.println("���� �Է� �Ϸ�");

		
		System.out.println("\n���̳� �߰����� �湮���ּż� �����մϴ�.\n");

		while (true) {
			System.out.println("\n\n###################�⺻ �޴��� �̵��մϴ�.###################");
			System.out.println("1. �߰��� �Ź� �ø���\n2. �߰��� �����ϱ�\n3. �ܾ� Ȯ��\n4. ���α׷� ����");

			int act = sc.nextInt();
			sc.nextLine();

			if (act == 1) {
				System.out.println("\n\n###################�߰��� �Ź� �ø���###################");

				if (index >= 10) {
					System.out.println("���̳� �߰��� �Ź��� ���� á���ϴ�. ���߿� �湮���ּ���.");
					continue;
				}

				System.out.println("�� �߰��� ������ �Է��մϴ�.");
				System.out.print("�𵨸�: ");
				String carName = sc.nextLine();
				System.out.print("�ɼ� ���� (��:1, ��:0):");
				int option = sc.nextInt();
				System.out.print("����: ");
				int year = sc.nextInt();
				System.out.print("���� �Ÿ�(km): ");
				int km = sc.nextInt();
				System.out.print("����(����): ");
				int price = sc.nextInt();
				cars[index++] = new carList(carName, option, year, km, price);


			}
			else if (act == 2) {

				System.out.println("\n\n###################�߰��� �����ϱ�###################");

				if (cars[0] == null) {
					System.out.println("�Ź��� �켱 ������ּ���.");
					continue;
				}

				System.out.println("���� ��ϵ� �Ź��� ǥ���մϴ�.");
				for (int i = 0; i < index ; i++) {
					System.out.println((i+1) + ". " +cars[i]);
				}

				System.out.print("������ �Ź� ��ȣ�� �Է��ϼ���");
				int purNum = sc.nextInt();
				int cost = cars[purNum-1].price;
				System.out.println("�ش� �Ź��� ������ " + cost + "���� �Դϴ�.");


				System.out.print("���� ������ �����ϼ���. 1.���� 2.�ſ�ī��");
				int method = sc.nextInt();

				if (method == 1) {
					flex1.pay(cost);
				}
				else {
					flex2.pay(cost);
				}
			}

			else if (act == 3) {

				System.out.println("\n\n###################�ܾ� Ȯ��###################");
				flex1.show();
				System.out.println();
				flex2.show();
			}
			else if (act == 4) {
				System.out.println("�����մϴ�. ���̳� �߰��� ������ �� �̿����ּ���.");
				break;
			}
			else {
				System.out.println("�ùٸ� ��ȣ�� �Է����ּ���");
				continue;
			}
		}


	}

}
