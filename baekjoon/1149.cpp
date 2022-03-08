//#include <iostream>
//#include <algorithm>
//using namespace std;
//int N;
//int cost[3]={0,}; // 0r 1g 2b
//int dp[1000][3]={0,};
//
//int main(){
//    cin>>N;
//    for(int i=0; i<N;i++){
//        cin>>cost[0]>>cost[1]>>cost[2];
//        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[0];
//        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[1];
//        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[2];
//    }
//    cout<<*min_element(dp[N-1], dp[N-1]+3);
//}