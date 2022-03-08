import java.util.Scanner;

class account{
	String sex, name, email; int age; private String id; private String pw;  

	void signUp() {
		Scanner sc = new Scanner(System.in);
		System.out.print("\n이름 : ");
		String name = sc.nextLine();
		System.out.print("\n이메일 : ");
		String email = sc.nextLine();
		System.out.print("\n성별 (남/여) : ");
		String sex = sc.nextLine();
		System.out.print("\n나이 : ");
		int age = sc.nextInt();
		System.out.print("\n아이디 : ");		
		sc.nextLine();
		String id = sc.nextLine();
		System.out.print("\n비밀번호 : ");
		String pw = sc.nextLine();	

		this.name = name;
		this.email = email;
		this.sex = sex;
		this.age = age;
		this.id = id;
		this.pw = pw;
		System.out.println("\n회원가입 완료. " +this.name+ "님, 반갑습니다." );
	}

	void accountShow() {
		System.out.println("\n################## 회원정보 조회 ####################");
		System.out.println("\n이름: " + this.name + "\n\n이메일: " + this.email + "\n\n성별: " + this.sex + "\n\n아이디: " + this.id + "\n\n비밀번호: " + this.pw);

	}
	void setId(String id) {
		this.id = id;
	}
	String getId() {
		return this.id;
	}
	void setPw(String pw) {
		this.pw = pw;
	}
	String getPw() {
		return this.pw;
	}

	int checkAccount(String id, String pw) {
		int result = 0;
		if (this.id.equals(id) && this.pw.equals(pw)){
			result = 1;
		}
		else if (this.pw.equals(pw)) {
			result = 2;

		}
		else {
			result = 0;
		}
		return result;
	}

	void login() {
		System.out.println("\n################## 로그인 ####################");
		while (true) {

			Scanner sc = new Scanner(System.in);
			System.out.print("\n아이디 : ");
			String id = sc.nextLine();
			System.out.print("\n비밀번호 : ");
			String pw = sc.nextLine();
			if (checkAccount(id, pw) == 1) {
				System.out.println("\n로그인 성공. " + this.name + "님 어서오세요.");
				break;
			}
			else {
				System.out.println("\n로그인 실패. 아이디 및 비밀번호를 재확인해주세요.");
			}	
		}
	}	
}

class accountV2 extends account {
	accountV2(){
		super();	
	}

	void changePw() {
		System.out.println("\n################## 비밀번호 변경 ####################");
		Scanner sc = new Scanner (System.in);
		while (true) {

			System.out.print("\n기존 비밀번호를 입력하세요 : ");
			String pw = sc.nextLine();

			if (checkAccount("admin", pw) != 2) {
				System.out.println("\n비밀번호를 재확인해주세요.");
			}
			else {
				break;
			}
		}

		System.out.print("\n변경할 비밀번호를 입력하세요 : ");
		String newPw = sc.nextLine();
		setPw(newPw);
		System.out.println("\n비밀번호가 [" + newPw + "] 로 변경되었습니다.");
		System.out.println("\n변경된 비밀번호로 다시 로그인해주세요");
		login();

	}

}


public class java_login_0806 {

	void signUp() {

	}

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.println("숭이네 오신 것을 환영합니다!");
		System.out.println("이 페이지는 회원 전용 페이지입니다.\n\n회원가입을 진행합니다.\n\n################## 회원가입 ####################");

		accountV2 acc1 = new accountV2();
		acc1.signUp();

		while (true) {
			System.out.println("\n################## 메뉴 ####################");
			System.out.println("\n1. 회원정보 조회\t2. 비밀번호 변경\t 3. 나가기");
			int num = sc.nextInt();
			if (num == 3) {
				System.out.println("페이지를 종료합니다.");
				break;
			}
			switch(num) {
			case 1:
				acc1.accountShow();
				break;
			case 2: 
				acc1.changePw();
				break;
			default:
				System.out.println("올바른 번호를 입력해주세요.");
				break;
			}

		}
	}
}
