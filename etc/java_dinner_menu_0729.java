import java.util.Scanner;

public class java_dinner_menu_0729{

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
// 김밥천국. 
		//참치찌개 5000 제육덮밥 4500 돈까스 6000 라볶이 5500 돌솥비빔밥 6500 떡라면 3500 고등어김치찜 7000
		
		System.out.println("메뉴를 선택해주세요. \n 1.참치찌개  2.제육덮밥  3.돈까스 \n 4.라볶이  5.돌솥비빔밥  6.떡라면 \n 7.고등어김치찜 ");
		int m = sc.nextInt();
		String m1 = "참치찌개"; 
		String m2 = "제육덮밥"; 
		String m3 = "돈까스";
		String m4 = "라볶이";
		String m5 = "돌솥비빔밥";
		String m6 = "떡라면";
		String m7 = "고등어김치찜";
		int p1 = 5000;
		int p2 = 4500;
		int p3 = 6000;
		int p4 = 5500;
		int p5 = 6500;
		int p6 = 3500;
		int p7 = 7000;
		
		String menu = "";
		int price = 0;
		
		switch(m) {
		case 1:
			menu = m1;
			price = p1;
			System.out.println("참치찌개 : 5000원");
			break;
			
		case 2:
			menu = m2;
			price = p2;
			System.out.println("제육덮밥 : 4500원");
			break;
		case 3:
			menu = m3;
			price = p3;
			System.out.println("돈까스 : 6000원");
			break;
		case 4:
			menu = m4;
			price = p4;
			System.out.println("라볶이 : 5500원");
			break;
		case 5:
			menu = m5;
			price = p5;
			System.out.println("돌솥비빔밥 : 6500원");
			break;
		case 6:
			menu = m6;
			price = p6;
			System.out.println("떡라면 : 3500원");
			break;
		case 7:
			menu = m7;
			price = p7;
			System.out.println("고등어김치찜 : 7000원");
			break;
		default :
			System.out.println("메뉴는 1~7번까지 있습니다. 다시 선택해주세요.");
			break;
			
		}
		
		System.out.println("현금 결제만 가능합니다. \n 현금을 넣어주세요.");
		int money = sc.nextInt();
		System.out.println("투입된 금액은 " + money + "원 입니다.");
		if (money>=price) {
			int change = money - price;
			System.out.println("결제 성공." + menu + "가 주문되었습니다.");
			System.out.println("아래에서 거스름 돈" + change + "를 받아가세요." );
		}
		else {
			System.out.println("금액이 부족합니다. 현금을 더 넣어주세요");
			int again = sc.nextInt();
		
			money += again;
			if (money >= price) {
				int change = money - price;
				System.out.println("결제 성공." + menu + "가 주문되었습니다.");
				System.out.println("아래에서 거스름 돈" + change + "를 받아가세요." );
			}
			else {
				System.out.println("금액이 부족합니다.\n " + money + "원이 반환됩니다. \n 처음부터 다시 주문해주세요.");
				
			}
		
		}
		
	
		
		
	}

}
