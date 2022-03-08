////
//// Created by iwin1 on 2021-08-17.
////
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int f[100000] = {0};
//
//int fib(int n){
//    if (n==-1) return 0;
//
//    if (f[n]!=0) return f[n];
//    else {
//        f[n] = fib(n-1) + fib(n-2);
//        return f[n];
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    f[0] = 0;
//    f[1] = f[2] = 1;
//
//    int n;
//    cin >> n;
//    for (int i = 0; i<n; i++) {
//        int tmp;
//        cin>> tmp;
//        if (tmp>=2) cout<<fib(tmp-1)<<" "<<fib(tmp)<<"\n";
//        else if (tmp==0) cout<<"1 0\n";
//        else cout<<"0 1\n";
//    }
//
//    return 0;
//
//}