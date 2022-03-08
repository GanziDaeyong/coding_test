//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int N;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin>>N;
//    int digit = (log10(N))+1;
//    int start = N - 9*digit;
//    for (int i=start; i<N; i++) {
//        string iStr = to_string(i);
//        int eachSum=0;
//        for (char c: iStr) eachSum+=c-'0';
//        if (i+eachSum==N) {
//            cout<<i;
//            exit(0);
//        }
//    }
//    cout<<0;
//    return 0;
//}