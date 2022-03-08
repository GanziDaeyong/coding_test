/*
���� �ʵ��б������� ��ü�� 2�� 3�� ���п����� ����� �ߴ�. 
���� �г��� ���� ��ҷ� ���п��� �� ������ �ϴµ� 1�г���� 6�г���� �л����� ���� ���� �����ؾ� �Ѵ�. 
���л��� ���л�����, ���л��� ���л����� ���� �����ؾ� �Ѵ�. 
���� �� �濡�� ���� �г��� �л����� �����ؾ� �Ѵ�. 
���� �� �濡 �� �� �����ϴ� �͵� �����ϴ�.

�� �濡 ������ �� �ִ� �ִ� �ο� �� K�� �־� ���� ��, ���ǿ� �°� ��� �л��� �����ϱ� ���� �ʿ��� ���� �ּ� ������ ���ϴ� ���α׷��� �ۼ� �Ͻÿ�.

���� ���, ���п����� ���� �л��� ������ ���� K=2�� �� 12���� ���� �ʿ��ϴ�. 
�ֳ��ϸ� 3�г� ���л��� �����ϱ� ���� �� �� ���� �ʿ��� �� 4�г� ���л����� ���� �������� �ʾƵ� �Ǳ� �����̴�.

�г�	���л�	���л�
1�г�	����	��ȣ, ����
2�г�	����, ����	���
3�г�	����	����, ��ö, ĥ��
4�г�		��ȣ
5�г�	����	ȣ��, �ǿ�
6�г�	����	����

 */

import java.util.Arrays;
import java.util.Scanner;

public class ����_����� {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int [] roomNum = new int[12];
		Arrays.fill(roomNum,0);

		int totalNum = sc.nextInt();
		int maxPplNum = sc.nextInt();
		
		int totalRoomNum = 0;

		int [][] stuInfo = new int [totalNum][2];

		for (int i = 0 ; i < totalNum ; i ++) {
			for (int j = 0 ; j < 2 ; j ++) {
				stuInfo[i][j] = sc.nextInt(); // i ���� / j�г�
				if (stuInfo[i][0] == 0 && stuInfo[i][1] == 1) { // ���� / 1�г�
					roomNum[0] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 1) { // ���� / 1�г�
					roomNum[1] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 2) { // ���� / 2�г�
					roomNum[2] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 2) { // ���� / 2�г�
					roomNum[3] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 3) { // ���� / 3�г�
					roomNum[4] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 3) { // ���� / 3�г�
					roomNum[5] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 4) { // ���� / 4�г�
					roomNum[6] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 4) { // ���� / 4�г�
					roomNum[7] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 5) { // ���� / 5�г�
					roomNum[8] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 5) { // ���� / 5�г�
					roomNum[9] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 6) { // ���� / 6�г�
					roomNum[10] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 6) { // ���� / 6�г�
					roomNum[11] ++;
				}
			}
		}
		
		System.out.println(Arrays.toString(roomNum));

		for (int com : roomNum) {
			if (com != 0 && com/maxPplNum == 0) {
				totalRoomNum ++;
				
			}
			else if (com/maxPplNum != 0) {
				if (com%maxPplNum != 0) {
					totalRoomNum += (com/maxPplNum + 1);
				}
				else {
					totalRoomNum += (com/maxPplNum);
				}
			}
		}
		
		System.out.println(totalRoomNum);
		
		
	}

}
