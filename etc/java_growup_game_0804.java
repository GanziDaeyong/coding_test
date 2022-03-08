import java.util.Scanner;

class growUp { 
	String name;
	int height;
	int eat_gauge;
	growUp(String name, int height) {
		this.name = name;
		this.height = height;
		this.eat_gauge = 0;
		
	}
	void height_up(int food_num){
		System.out.println(food_num+"번 음식을 먹었습니다.");
		switch(food_num) {
		case 1, 2, 9:
			this.eat_gauge += 50;
			System.out.println("키가 무지 크는 기분인걸!!!");
			break;
		case 5, 6, 8:
			this.eat_gauge += 10;
			System.out.println("키가 조금 크는 기분인데!");
			break;
		case 3, 4, 7:
			this.eat_gauge -= 50;
			System.out.println("키가 줄어드는 기분이야...");
			break;
		default:
			System.out.println("음식 번호를 다시 입력해주세요.");
			break;
		}
		
		if (this.eat_gauge >= 100) {
			this.height ++;
			this.eat_gauge -= 100;
			System.out.println("키가 진짜 커졌다!" + "\n현재 키는: " + this.height + "cm");
		}
		else if (this.eat_gauge < 0) {
			this.height --;
			System.out.println("키가 진짜로 줄었어.." + "\n현재 키는: " + this.height + "cm");
		}
				
	}
	
}
public class java_growup_game_0804 {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		
		System.out.println("이름을 입력하세요");
		String name = sc.nextLine();
		
		System.out.println("현재 키를 입력하세요 (cm)");
		int height = sc.nextInt(); 
		
		growUp j = new growUp(name, height);
		
		System.out.println("메뉴를 선택하세요 \n1.우유 2.시금치 3.치킨 \n4.마라탕 5.연어 6.오렌지주스 \n7.콜라 8.된장찌개 9.베지밀 \n0.그만먹기");

		while (true) {
			int food_num = sc.nextInt();
			if (food_num != 0) {
				j.height_up(food_num);
			}
			else {
				break;
			}
		}
	}

}
