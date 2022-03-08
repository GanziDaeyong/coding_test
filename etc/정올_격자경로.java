import java.util.Scanner;

public class 정올_격자경로 {

	public static void main(String[] args) {

		Scanner sc = new Scanner (System.in);

		int n,m,k,ki,kj;
		long z_to_k, k_to_l, dist;

		
		System.out.println(factr(12)*factr(13));
		System.out.println(factr(25));
		
		n = sc.nextInt();
		m = sc.nextInt();
		k = sc.nextInt();

		if (n == 1 || m == 1) {
			dist = 1;

			System.out.println(dist);
		}

		else {

			if (k==0) {
				dist = factr(n+m-2) / (factr(n-1)*factr(m-1));

				System.out.println(dist);
			}


			else {
				
				if (k%m == 0) {
					ki = (k/m);	
					kj = m;
				}
				else {
					ki = (k/m)+1;
					kj = (k%m) ;
				}

				System.out.println(ki+","+kj);

				if (ki == 1 || kj == 1) {
					if (ki == n || kj == m) {
						dist = 1;
						System.out.println(dist);
					}
					else {
						z_to_k = 1;
						k_to_l = factr(n-ki+m-kj) / (factr(n-ki)*factr(m-kj));
						dist = z_to_k*k_to_l;
						System.out.println(dist);
					}
				}

				else if (ki == n || kj == m) {
					z_to_k = factr(ki+kj-2) / (factr(ki-1)*factr(kj-1));
					k_to_l = 1;
					dist = z_to_k*k_to_l;
					System.out.println(dist);
				}

				else {
					z_to_k = factr(ki+kj-2) / (factr(ki-1)*factr(kj-1));
					k_to_l = factr(n-ki+m-kj) / (factr(n-ki)*factr(m-kj));
					dist = z_to_k*k_to_l;
					System.out.println(dist);
				}

		
				////////////long 범위 넘어서는 (25!) 경우 어떻게 할지 더 생각해보자////////////////
			}

		}

	}

	public static long factr(long n) {
		if (n <= 1) {
			return n;
		}
		else {
			return factr(n-1)*n;
		}
	}



}
