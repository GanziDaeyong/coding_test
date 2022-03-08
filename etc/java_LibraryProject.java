import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Random;
import java.util.Scanner;
import java.io.FileReader;
import java.io.File;
import java.io.BufferedReader;

class myException extends Exception {
	String msg;
	myException (String msg) {
		super(msg);
	}
}

class User {
	String name;
	int maxNum;
	LinkedList<Book> myLib = new LinkedList();
	User(String name, int maxNum) {
		this.name = name;
		this.maxNum = maxNum;
	}
	void bor_book (Book input) {
		myLib.add(input);

	}

	void check () {
		System.out.println("========회원 정보========");
		System.out.println("이름: " + this.name);
		System.out.println("대출 가능 책 수: " + this.maxNum);

		System.out.println("현재 빌린 도서 목록: ");
		for (int i = 0 ; i < myLib.size() ; i++) {
			System.out.println("[" + myLib.get(i).bookNum + "|" + myLib.get(i).title + "]");
		}

	}
}

class Book {
	String title;
	int bookNum;
	int inOrOut;
	Book(String title, int howMany) {
		this.title = title;
		Random r = new Random();
		this.bookNum = r.nextInt(1000);
		this.inOrOut += howMany; // 0이면 out. 
	}
	Book(String title) {
		this(title, 3);
	}

	public String toString() {
		return this.bookNum + "." + this.title + " (" + this.inOrOut + ")";
	}
}


public class java_LibraryProject {

	public static void main(String[] args) {

		int user = 0;
		ArrayList<Book> lib = new ArrayList();
		User [] userList = new User [3];
		userList[0] = new User("대용", 3);
		userList[1] = new User("지승", 2);
		userList[2] = new User("은정", 2);

		try {

			File file = new File("C:\\대용\\컴퓨터공부\\cs_portfolio\\노원정보도서관_크롤러\\forLib.txt");

			FileReader filereader = new FileReader(file);

			BufferedReader buf = new BufferedReader(filereader);
			String line = "";

			while((line = buf.readLine())!= null) {
				lib.add(new Book(line));
			}
		}
		catch (Exception e) {
			System.out.println(e.getMessage());
		}


		myException brError = new myException("\n대출 가능한 책 수: 0");
		myException meError = new myException("\n올바른 메뉴 번호를 입력해주세요");
		myException stError = new myException("\n책이 모두 대출중입니다.");
		myException nbError = new myException("\n대출한 도서가 없습니다.");
		myException userIndexError = new myException("\n올바른 사용자 번호를 입력해주세요.");
		myException bookNumError = new myException("\n올바른 책 번호를 입력해주세요.");

		Scanner sc = new Scanner(System.in);




		int sw = 0;

		while (true) {

			try {

				if (sw == 0) {

					System.out.println("====================회원선택====================");
					for (int i = 0 ; i < userList.length ; i++) {
						System.out.println(i+1 + "." + userList[i].name);
					}

					user = sc.nextInt();
					if (user >= userList.length + 1) 
						throw userIndexError;

					else {
						System.out.println(userList[user-1].name +"님의 계정으로 접속합니다.");
						sw = 1;
						continue;
					}
				}

				else if (sw == 1) {

					System.out.println("\n====================메인메뉴====================");
					System.out.println("1.대여 2.반납 3.도서 기부 4.회원 정보 조회 5.회원 변경 6.종료 ");

					int act = sc.nextInt();

					if (act < 1 || act > 6) {
						throw meError;
					}

					if (act == 1) {
						// 대여
						System.out.println(userList[user-1].name + "님의 대출가능한 책 수: " + userList[user-1].maxNum );

						if (userList[user-1].maxNum == 0) { 
							throw brError;
						}

						System.out.println();

						System.out.println("\n=====================도서목록====================\n");
						for (int j = 0 ; j < lib.size() ; j++) {
							System.out.println(lib.get(j).bookNum + "|" + lib.get(j).title + " (" + lib.get(j).inOrOut+ ")");
						}
						System.out.println("\n대출할 책 번호를 입력하세요");

						int inputNum = sc.nextInt();

						int sw2 = 0;
						for (int j = 0 ; j < lib.size(); j++) {
							if (inputNum == lib.get(j).bookNum) {

								if (lib.get(j).inOrOut == 0) {
									throw stError;
								}
								System.out.println("\n[" + lib.get(j).title + "] 대출 성공");
								userList[user-1].bor_book(lib.get(j)); 
								lib.get(j).inOrOut --;
								userList[user-1].maxNum --;
								sw2 = 1;
							}

						}
						if (sw2 == 0) {

							throw bookNumError;
						}

					}
					else if (act == 2) {
						System.out.println("====================도서반납====================");
						if (userList[user-1].myLib.size() == 0) {
							throw nbError;
						}

						for (Book v : userList[user-1].myLib) {
							System.out.println(v.bookNum + "." + v.title);
						}
						System.out.println("반납할 도서 번호를 입력하세요");
						int input = sc.nextInt();
						int sw3 = 0;
						for (int i = 0 ; i < userList[user-1].myLib.size(); i ++) { //String 비교하려면 equals라고!
							if (input == userList[user-1].myLib.get(i).bookNum) {
								sw3 = 1;
								System.out.println("도서가 반납되었습니다.");
								userList[user-1].myLib.remove(i);
								userList[user-1].maxNum ++;
								for (int f = 0 ; f < lib.size(); f++) {
									if (input == lib.get(f).bookNum) {
										lib.get(f).inOrOut ++;
									}
								}
							}
						}
						
						if (sw3 == 0) {
							throw bookNumError;
						}
						
					}

					else if (act == 3) {
						// 책넣기
						int howMany = 0;

						System.out.println("====================도서기부====================");
						System.out.println("책 이름 입력: ");
						sc.nextLine();
						String title = sc.nextLine();

						System.out.println(title + "이(가) 두 권 이상입니까? (아니오: 0 / 예: 1) ");
						int how = sc.nextInt();
						if (how > 1 || how < 0) {
							throw meError;
						}
						if (how == 0) {
							lib.add(new Book(title, 1));
						}
						else {
							System.out.println("책 수량을 입력해주세요 : ");
							howMany = sc.nextInt();
							lib.add(new Book(title, howMany));
						}

						System.out.println("현재 책 목록: ");
						for (Book v : lib) {
							System.out.println(v);
						}
						
					}
					
					else if (act == 4) {
						userList[user-1].check();
					}

					else if (act == 5) {
						sw = 0;
						continue;
					}


					else {
						break;
					}
				}
			}

			catch(myException e) {

				System.out.println(e.getMessage());
			}

		}


	}
}

