import java.util.Scanner;
import java.util.Arrays;
public class java_code_up {

    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

//        while (true) {
//        	int input = sc.nextInt();
//        	if (input == 0) {
//        		break;
//        	}
//        	System.out.println(input);
//        }
        
//        while (true) {
//        	char input = sc.next().charAt(0);
//        	System.out.println(input);
//        	if (input == 'q') {
//        		break;
//        	}
//        }

//1부터 n까지, 1부터 m까지 숫자가 적힌 서로 다른 주사위 2개를 던졌을 때 나올 수 있는 모든 경우를 출력해보자.
        
//        int i, j, n, m;
//        
//        n = sc.nextInt();
//        m = sc.nextInt();
//        
//        for (i = 1 ; i <= n ; i ++) {
//        	for (j = 1 ; j <= m ; j ++) {
//        		System.out.println(i + " " + j);
//        	}
//        }

        
////주어진 rgb 빛들을 다르게 섞어 만들 수 있는 모든 경우의 조합(r g b)과 총 가짓 수를 계산해보자.
//        
//        int r, g, b ;
//        int cnt = 0;
//        int r_input = sc.nextInt();
//        int g_input = sc.nextInt();
//        int b_input = sc.nextInt();
//        for (r = 0 ; r <= (r_input - 1) ; r ++) {
//        	for (g = 0 ; g <= (g_input - 1) ; g ++) {
//        		for (b = 0 ; b <= (b_input - 1) ; b ++) {
//        			System.out.print(r +" "+ g +" "+ b + "\n");
//        			cnt ++;
//        		}
//        	}
//        	
//        }
//        System.out.println(cnt);
//        
//        

// 이상한 출석부르기 1
//        int[] arr = new int [23];
////        System.out.println("부른 횟수");
//        int n = sc.nextInt();
// 
////        System.out.println("부른 번호");
//        int called;
//        for (int i = 1 ; i <= n ; i ++ ) {
//        called = sc.nextInt();
//        arr[(called - 1)] ++;
//        }
//        for (int v : arr) {
//            System.out.print(v + " ");
//        }
//        System.out.println(Arrays.toString(arr));
//        
//    }
//}

// 0 나올때까지 출력하기
//        int input;
//        while (true) {
//        	input = sc.nextInt();
//        	if (input == 0) {
//        		break;
//        	}
//        	else {
//        		System.out.println(input);
//        	}
//        }

// 이상한 출석부르기 2
        
//        System.out.println("부른 횟수");
//        int n = sc.nextInt();
//        int[] arr = new int [n];
//
//        System.out.println("부른 번호");
//        for (int i = 0 ; i < n ; i ++ ) {
//        	arr[i]= sc.nextInt();
//        }
//        //System.out.println(Arrays.toString(arr));
//        for (int i = arr.length-1 ; 0 <= i ; i-- ) {
//        	System.out.print(arr[i] + " ");
        
// 이상한 출석부르기 3
//        //System.out.println("부른 횟수");
//        int n = sc.nextInt();
//        int[] arr = new int [n];
//
//        //System.out.println("부른 번호");
//        for (int i = 0 ; i < n ; i ++ ) {
//        	arr[i]= sc.nextInt();
//        }
//        //System.out.println(Arrays.toString(arr));
//        int min = arr[0];
//        for (int i = 0 ; i < arr.length ; i ++) {
//        	if (min>arr[i]) {
//        		min = arr[i];
//        	}
//        } System.out.println(min);
        
// 단어 쪼개서 출력하기 
        
//        String input = sc.nextLine();
//        for(int i = 0 ; i < input.length(); i ++) {
//        	String rst = input.substring(i, i+1);
//        	System.out.println("\'" + rst + "\'");
//        }

// 정수 합 출력하기 
        
//        int input1, input2;
//        input1 = sc.nextInt();
//        input2 = sc.nextInt();
//        int sum = input1+input2;
//        System.out.println(sum);
        



    }
}
