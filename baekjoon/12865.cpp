//#include <iostream>
//#include <algorithm>
//using namespace std;
//int N, K;
//int dp[101][100001] = {0,};
//int main() {
//    cin>>N>>K;
//    for (int i=1; i<=N; i++){
//        int w, v;
//        cin>>w>>v;
//        for (int j=1;j<=K;j++) {
//            if (w<=j) dp[i][j] = max(v + dp[i-1][j-w], dp[i-1][j]);
//            else dp[i][j] = dp[i-1][j];
//        }
//    }
//    cout<<dp[N][K];
//    return 0;
//}