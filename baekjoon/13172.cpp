//#include <iostream>
//#define MODNUM 1000000007
//using namespace std;
//
//int M;
//long long int sum=0;
//
//int ExtendedEuclidean(int a, int p) {
//    int r0=a, r1=p;
//    int s0=1, s1=0;
//    int t0=0, t1=1;
//    int tmp=0,q=0;
//
//    while(true){
//        q=r0/r1;
//
//        tmp=r1;
//        r1=r0%r1;
//        r0=tmp;
//        if (r1==0) break;
//
//        tmp=s1;
//        s1=s0-s1*q;
//        s0=tmp;
//
//        tmp=t1;
//        t1=t0-t1*q;
//        t0=tmp;
//    }
//    if (s1<=0) s1=(s1+p)%p;
//    return s1%MODNUM;
//}
//
//int main(){
//    cin>>M;
//    for (int i=0; i<M; i++){
//        long long int n, s;
//        cin>>n>>s;
//        if (s%n==0) sum += s/n;
//        else {
//            long long int MODREV= ExtendedEuclidean(n,MODNUM);
//            sum+=((s%MODNUM) * (MODREV%MODNUM))%MODNUM;
//        }
//    }
//    cout<<sum%MODNUM;
//}