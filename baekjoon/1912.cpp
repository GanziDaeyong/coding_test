//#include <iostream>
//using namespace std;
//int n, maxV, partialSum;
//int main() {
//    cin>>n;
//    maxV=-1000000000;
//    partialSum=0;
//    for (int i=0; i<n; i++) {
//        int v; cin>>v;
//        if (partialSum<0) partialSum=0; // 음수 케이스를 잡아주기 위해 필요
//        if (v>=0 || partialSum+v>=0) partialSum+=v;
//        else partialSum=v;
//        if (partialSum>maxV) maxV=partialSum;
//    }
//    cout<<maxV;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int n, maxV;
//int dp[100000];
//
//int main() {
//    cin>>n;
//    for (int i=0; i<n; i++) {
//        int v;
//        cin>>v;
//        if (i==0) {
//            dp[0]=v;
//            maxV=dp[0];
//        }
//        dp[i] = max(dp[i-1]+v, v);
//        if (maxV<dp[i]) maxV=dp[i];
//    }
//    cout<<maxV;
//    return 0;
//}


