//#include <iostream>
//using namespace std;
//
//int N, M;
//int arr[1025][1025] = {0,};
//int dp[1025][1025] = {0,};
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin>>N>>M;
//    for (int i=1; i<=N; i++) {
//        for (int j=1; j<=N; j++) {
//            cin>>arr[i][j];
//            if (i==1 && i==j) dp[i][j]=arr[i][j];
//            else if (i==1 && i!=j) dp[i][j]=dp[i][j-1]+arr[i][j];
//            else if (j==1 && i!=j) dp[i][j]=dp[i-1][j]+arr[i][j];
//            else dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + arr[i][j];
//        }
//    }
//
//    for (int i=0; i<M; i++) {
//        int x1,y1,x2,y2;
//        cin>>x1>>y1>>x2>>y2;
//        cout<<dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1]<<"\n";
//    }
//    return 0;
//}