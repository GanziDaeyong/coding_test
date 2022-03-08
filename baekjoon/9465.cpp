//#include <iostream>
//#include <algorithm>
//using namespace std;
//int T, n;
//int dp[2][100000] = {0,};
//int arr[2][100000] = {0,};
//
//int solveDp(){
//    dp[0][0] = arr[0][0];
//    dp[0][1] = arr[0][1]+arr[1][0];
//    dp[1][0] = arr[1][0];
//    dp[1][1] = arr[1][1]+arr[0][0];
//
//    if (n<=2) return max(dp[0][n-1], dp[1][n-1]);
//
//    int maxV = dp[0][0];
//
//    for (int i=2; i<n; i++) {
//        dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + arr[0][i];
//        dp[1][i] = max(dp[0][i-1], dp[0][i-2]) + arr[1][i];
//        if (max(dp[0][i],dp[1][i])>maxV) maxV=max(dp[0][i],dp[1][i]);
//    }
//
//    return maxV;
//}
//
//
//int main(){
//    cin>>T;
//    for (int i=0; i<T; i++) {
//        cin>>n;
//        for (int j=0; j<n; j++) cin>>arr[0][j];
//        for (int j=0; j<n; j++) cin>>arr[1][j];
//        cout<<solveDp()<<"\n";
//    }
//    return 0;
//}