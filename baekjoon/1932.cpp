//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int N, res;
//int dp[501][501];
//
//int main() {
//    cin>>N;
//    for (int i = 0; i < N; i++) for (int j = 0; j < i + 1; j++) cin >> dp[i][j];
//
//    for (int i = 1; i < N; i++) {
//        for (int j = 0; j < i + 1; j++) {
//            int toAdd;
//            if (j == i) toAdd = dp[i - 1][j - 1];
//            else if (j == 0) toAdd = dp[i - 1][0];
//            else toAdd = max(dp[i - 1][j - 1], dp[i - 1][j]);
//            dp[i][j] += toAdd;
//        }
//    }
//
//    res = *max_element(dp[N - 1], dp[N - 1] + N);
//    cout << res;
//    return 0;
//}