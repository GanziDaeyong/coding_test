import java.util.Scanner;

class account{
	String sex, name, email; int age; private String id; private String pw;  

	void signUp() {
		Scanner sc = new Scanner(System.in);
		System.out.print("\n�̸� : ");
		String name = sc.nextLine();
		System.out.print("\n�̸��� : ");
		String email = sc.nextLine();
		System.out.print("\n���� (��/��) : ");
		String sex = sc.nextLine();
		System.out.print("\n���� : ");
		int age = sc.nextInt();
		System.out.print("\n���̵� : ");		
		sc.nextLine();
		String id = sc.nextLine();
		System.out.print("\n��й�ȣ : ");
		String pw = sc.nextLine();	

		this.name = name;
		this.email = email;
		this.sex = sex;
		this.age = age;
		this.id = id;
		this.pw = pw;
		System.out.println("\nȸ������ �Ϸ�. " +this.name+ "��, �ݰ����ϴ�." );
	}

	void accountShow() {
		System.out.println("\n################## ȸ������ ��ȸ ####################");
		System.out.println("\n�̸�: " + this.name + "\n\n�̸���: " + this.email + "\n\n����: " + this.sex + "\n\n���̵�: " + this.id + "\n\n��й�ȣ: " + this.pw);

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
		System.out.println("\n################## �α��� ####################");
		while (true) {

			Scanner sc = new Scanner(System.in);
			System.out.print("\n���̵� : ");
			String id = sc.nextLine();
			System.out.print("\n��й�ȣ : ");
			String pw = sc.nextLine();
			if (checkAccount(id, pw) == 1) {
				System.out.println("\n�α��� ����. " + this.name + "�� �������.");
				break;
			}
			else {
				System.out.println("\n�α��� ����. ���̵� �� ��й�ȣ�� ��Ȯ�����ּ���.");
			}	
		}
	}	
}

class accountV2 extends account {
	accountV2(){
		super();	
	}

	void changePw() {
		System.out.println("\n################## ��й�ȣ ���� ####################");
		Scanner sc = new Scanner (System.in);
		while (true) {

			System.out.print("\n���� ��й�ȣ�� �Է��ϼ��� : ");
			String pw = sc.nextLine();

			if (checkAccount("admin", pw) != 2) {
				System.out.println("\n��й�ȣ�� ��Ȯ�����ּ���.");
			}
			else {
				break;
			}
		}

		System.out.print("\n������ ��й�ȣ�� �Է��ϼ��� : ");
		String newPw = sc.nextLine();
		setPw(newPw);
		System.out.println("\n��й�ȣ�� [" + newPw + "] �� ����Ǿ����ϴ�.");
		System.out.println("\n����� ��й�ȣ�� �ٽ� �α������ּ���");
		login();

	}

}


public class java_login_0806 {

	void signUp() {

	}

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.println("���̳� ���� ���� ȯ���մϴ�!");
		System.out.println("�� �������� ȸ�� ���� �������Դϴ�.\n\nȸ�������� �����մϴ�.\n\n################## ȸ������ ####################");

		accountV2 acc1 = new accountV2();
		acc1.signUp();

		while (true) {
			System.out.println("\n################## �޴� ####################");
			System.out.println("\n1. ȸ������ ��ȸ\t2. ��й�ȣ ����\t 3. ������");
			int num = sc.nextInt();
			if (num == 3) {
				System.out.println("�������� �����մϴ�.");
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
				System.out.println("�ùٸ� ��ȣ�� �Է����ּ���.");
				break;
			}

		}
	}
}
