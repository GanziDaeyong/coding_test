/*
정보 초등학교에서는 단체로 2박 3일 수학여행을 가기로 했다. 
여러 학년이 같은 장소로 수학여행 을 가려고 하는데 1학년부터 6학년까지 학생들이 묵을 방을 배정해야 한다. 
남학생은 남학생끼리, 여학생은 여학생끼리 방을 배정해야 한다. 
또한 한 방에는 같은 학년의 학생들을 배정해야 한다. 
물론 한 방에 한 명만 배정하는 것도 가능하다.

한 방에 배정할 수 있는 최대 인원 수 K가 주어 졌을 때, 조건에 맞게 모든 학생을 배정하기 위해 필요한 방의 최소 개수를 구하는 프로그램을 작성 하시오.

예를 들어, 수학여행을 가는 학생이 다음과 같고 K=2일 때 12개의 방이 필요하다. 
왜냐하면 3학년 남학생을 배정하기 위해 방 두 개가 필요하 고 4학년 여학생에는 방을 배정하지 않아도 되기 때문이다.

학년	여학생	남학생
1학년	영희	동호, 동진
2학년	혜진, 상희	경수
3학년	경희	동수, 상철, 칠복
4학년		달호
5학년	정숙	호동, 건우
6학년	수지	동건

 */

import java.util.Arrays;
import java.util.Scanner;

public class 정올_방배정 {

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
				stuInfo[i][j] = sc.nextInt(); // i 성별 / j학년
				if (stuInfo[i][0] == 0 && stuInfo[i][1] == 1) { // 여자 / 1학년
					roomNum[0] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 1) { // 남자 / 1학년
					roomNum[1] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 2) { // 여자 / 2학년
					roomNum[2] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 2) { // 남자 / 2학년
					roomNum[3] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 3) { // 여자 / 3학년
					roomNum[4] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 3) { // 남자 / 3학년
					roomNum[5] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 4) { // 여자 / 4학년
					roomNum[6] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 4) { // 남자 / 4학년
					roomNum[7] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 5) { // 여자 / 5학년
					roomNum[8] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 5) { // 남자 / 5학년
					roomNum[9] ++;
				}
				else if (stuInfo[i][0] == 0 && stuInfo[i][1] == 6) { // 여자 / 6학년
					roomNum[10] ++;
				}
				else if (stuInfo[i][0] == 1 && stuInfo[i][1] == 6) { // 남자 / 6학년
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
