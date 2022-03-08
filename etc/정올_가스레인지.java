/*
3개의 시간조절용 버튼 A B C가 달린 전자레인 지가 있다. 
각 버튼마다 일정한 시간이 지정되어 있어 해당 버튼을 한번 누를 때마다 그 시간이 동 작시간에 더해진다. 
버튼 A,B,C에 지정된 시간 은 각각 5분, 1분, 10초이다.

냉동음식마다 전자레인지로 요리해야할 시간 T가 초단위로 표시되어 있다. 
우리는 A,B,C 3개의 버튼을 적절히 눌러서 그 시간의 합이 정확히 T 초가 되도록 해야 한다. 
단 버튼 A,B,C를 누른 횟수의 합은 항상 최소가 되어야 한다.
이것을 최소버튼 조작이라고 한다. 

만일 요리시간이 100초라고 하면(T=100) B를 1번, C는 4번 누르면 된다. 
이와 다르게 C를 10 번 눌러도 100초가 되지만 이 경우 10번은 최소 횟수가 아니기 때문이 답이 될 수 없다. 
이 경우 B 1번, C 4번, 총 5번이 최소버튼 조작이다. 
그리고 T=234와 같이 3개의 버튼으로 시간을 정 확히 맞출 수 없는 경우도 있다. 
여러분은 주어진 요리시간 T초를 맞추기 위한 최 소버튼 조작 방법을 구하는 프로그램을 작성해야 한다.
 */


// 내 아이디어 : int와 int의 계산은 int만 출력한다는 점을 이용해 A부터 나누기 몫을 구한다.

import java.util.Scanner;

public class 정올_가스레인지 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int T = sc.nextInt();
		
		int A = 300;
		int B = 60;
		int C = 10;
		
		int i, j, k;
		
		i = T/A;
		j = (T-(A*i))/B;
		k = (T-(A*i)-(B*j))/C;
		
		if ((T-(A*i)-(B*j))%C == 0) {
			System.out.println(i +" "+j+" "+k);
		}
		
		else {
			System.out.println(-1);
		}
		

	}

}
