//#include <iostream>
//using namespace std;
//int arr[1000];
//int dp[1000];
//int N, maxV;
//int main() {
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        cin >> arr[i];
//        dp[i] = 1;
//    }
//    maxV = 1;
//    for (int i = 1; i < N; i++) {
//        for (int j = 0; j < i; j++) {
//            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
//                dp[i] = dp[j] + 1;
//                if (dp[i] > maxV) maxV = dp[i];
//            }
//        }
//    }
//    cout << maxV;
//    return 0;
//}