import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;
import java.util.concurrent.TimeUnit;

class Sugang implements Runnable {

	Scanner sc = new Scanner(System.in);
	int pick = sc.nextInt();
	snu s = new snu(pick);
	@Override
	public void run() {
		s.res();

	}

}

class snu {
	static int pick;

	snu(int pick) {
		this.pick = pick;
	}

	public synchronized void res() {
		if (pick>0) {
			pick --;
			System.out.println(Thread.currentThread().getName()+ "님이 당첨되었습니다.");
		}
		else {
			System.out.println("(" + Thread.currentThread().getName() + "님은 다음 기회에!" + ")");
		}
	}

}

public class Java_Susin {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		Random r = new Random();
		
		System.out.println("몇 명을 뽑을건가요?");
		Sugang s = new Sugang();
		ArrayList<Thread> k = new ArrayList();

		System.out.println("총 몇 명인가요?");
		int num = sc.nextInt();
		sc.nextLine();

		for (int i=0 ; i < num ; i ++) {
			System.out.println(i+1 + "번째 사람 이름: ");
			String name = sc.nextLine();
			k.add(new Thread(s,name));
		}

		int [] a = new int [num];

		for (int i = 0 ; i < num ; i ++) {
			a[i] = r.nextInt(num);
			for (int j = 0 ; j < i ; j ++) {
				if (a[i] == a[j]) {
					i--;
				}
			}
		}

		System.out.println("\n1차 결과는: ");
		for (int i = 0; i < a.length ; i ++) {
			System.out.println(i+1 + "위: "+k.get(a[i]).getName());
		}
		System.out.println("\n");
		System.out.println("2차 결과는...두구두구두구 10초 후에!");
		try {
			for (int i = 0 ; i < 10 ; i ++) {
				
				System.out.println((10-i) + "...");
				TimeUnit.SECONDS.sleep(1);
			}
			
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		System.out.println("2차 결과는:");
		for (int i = 0; i < a.length ; i ++) {
			k.get(a[i]).start();
		}



	}

}


