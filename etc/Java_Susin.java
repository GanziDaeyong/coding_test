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
			System.out.println(Thread.currentThread().getName()+ "���� ��÷�Ǿ����ϴ�.");
		}
		else {
			System.out.println("(" + Thread.currentThread().getName() + "���� ���� ��ȸ��!" + ")");
		}
	}

}

public class Java_Susin {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		Random r = new Random();
		
		System.out.println("�� ���� �����ǰ���?");
		Sugang s = new Sugang();
		ArrayList<Thread> k = new ArrayList();

		System.out.println("�� �� ���ΰ���?");
		int num = sc.nextInt();
		sc.nextLine();

		for (int i=0 ; i < num ; i ++) {
			System.out.println(i+1 + "��° ��� �̸�: ");
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

		System.out.println("\n1�� �����: ");
		for (int i = 0; i < a.length ; i ++) {
			System.out.println(i+1 + "��: "+k.get(a[i]).getName());
		}
		System.out.println("\n");
		System.out.println("2�� �����...�α��α��α� 10�� �Ŀ�!");
		try {
			for (int i = 0 ; i < 10 ; i ++) {
				
				System.out.println((10-i) + "...");
				TimeUnit.SECONDS.sleep(1);
			}
			
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		System.out.println("2�� �����:");
		for (int i = 0; i < a.length ; i ++) {
			k.get(a[i]).start();
		}



	}

}


