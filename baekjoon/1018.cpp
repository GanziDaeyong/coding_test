//#include <iostream>
//
//using namespace std;
//
//string type1 = "WBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBW";
//string type2 = "BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";
//int minV = 64;
//int M, N;
//char board[51][51];
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) cin >> board[i][j];
//    for (int i = 0; i <= N - 8; i++) {
//
//        for (int j = 0; j <= M - 8; j++) {
//            int difCntType1 = 0;
//            int difCntType2 = 0;
//            string total = "";
//            for (int ii = i; ii < i + 8; ii++) {
//                for (int jj = j; jj < j + 8; jj++) {
//                    total += board[ii][jj];
//                }
//            }
//            for (int k = 0; k < 64; k++) {
//                if (total[k] != type1[k]) difCntType1++;
//                if (total[k] != type2[k]) difCntType2++;
//            }
//            int smaller = (difCntType1 < difCntType2)? difCntType1 : difCntType2;
//            if (smaller < minV) minV = smaller;
//        }
//    }
//
//    cout << minV;
//    return 0;
//}
//
