import java.util.Random;

public class ·Î¶Ç {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Random r = new Random();
		int [] a = new int[6];

		for (int i = 0 ; i < 6 ; i ++) {
			a[i] = r.nextInt(44) + 1;
			for (int j = 0 ; j < i ; j ++) {
				if (a[i] == a[j]) {
					i--;
				}
			}
		}
		for (int v: a) {
			System.out.print(v + "/");
		}
	}

}
