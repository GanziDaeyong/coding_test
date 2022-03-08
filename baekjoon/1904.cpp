//#include <iostream>
//using namespace std;
//
//int N;
//int fib[1000000] = {1,2,3,5,8,13,};
//
//int main () {
//    cin>>N;
//    if (N<=6) {
//        cout<<fib[N-1];
//        return 0;
//    }
//    for (int i=6; i<N; i++) {
//        if (fib[i]!=0) continue;
//        fib[i] = (fib[i-1]+fib[i-2])%15746;
//    }
//    cout<<fib[N-1]%15746;
//    return 0;
//}