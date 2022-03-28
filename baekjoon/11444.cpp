//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//#define PRINT(x) cout<<x<<"\n"
//#define LB cout<<"\n"
//using namespace std;
//
//#define M vector<vector<long long int>>
//#define MOD %1000000007
//long long int N;
//M basic = {{1,1},{1,0}};
//
//M operator * (M& a, M& b) {
//    M res(2, vector<long long int>(2));
//    res[0][0] = ((a[0][0] * b[0][0])MOD + (a[0][1] * b[1][0])MOD)MOD;
//    res[0][1] = ((a[0][0] * b[0][1])MOD + (a[0][1] * b[1][1])MOD)MOD;
//    res[1][0] = ((a[1][0] * b[0][0])MOD + (a[1][1] * b[1][0])MOD)MOD;
//    res[1][1] = ((a[1][0] * b[0][1])MOD + (a[1][1] * b[1][1])MOD)MOD;
//    return res;
//}
//
//void pt(M a){
//    cout<<a[0][0]<<" "<<a[0][1]<<"\n"<<a[1][0]<<" "<<a[1][1]<<"\n";
//}
//
//
//M fib(long long int n){
//
//    if (n == 1) return basic;
//    else if (n % 2 == 0) {
//        M half = fib(n/2);
//        return half*half;
//    }
//    else{
//        M half = fib(n/2);
//        M res = half*half;
//        return res*basic;
//    }
//}
//
//int main() {
//
//cin>>N;
//if (N==0) cout<<0;
//else cout<<fib(N)[0][1];
//
//return 0;
//}