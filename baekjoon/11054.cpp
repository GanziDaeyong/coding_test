//#include <iostream>
//using namespace std;
//int arr[1001] = {0,};
//int dpInc[1001] = {0,};
//int dpDec[1001] = {0,};
//int N;
//
//int main() {
//    cin>>N;
//    for (int i=0;i<N;i++) { dpInc[i]=1; dpDec[i]=1;}
//    for(int i=0; i<N; i++) cin>>arr[i];
//    for(int i=1; i<N; i++) {
//        int subMax1=0;
//        int subMax2=0;
//        int subMaxIdx1=-1;
//        int subMaxIdx2=-1;
//        for (int j=0; j<i; j++) {
//            if (arr[j]<arr[i] && dpInc[j]>=subMax1) { // subMax와 같으면 더 우측이 답이니까.
//                subMax1=dpInc[j];
//                subMaxIdx1=j;
//            }
//            if (arr[N-1-j]<arr[N-1-i] && dpDec[N-1-j]>=subMax2) {
//                subMax2=dpDec[N-1-j];
//                subMaxIdx2=N-1-j;
//            }
//        }
//
//        if (subMaxIdx1!=-1) dpInc[i] = dpInc[subMaxIdx1]+1;
//        if (subMaxIdx2!=-1) dpDec[N-1-i] = dpDec[subMaxIdx2]+1;
//    }
//    int res=0;
//    for (int i=0; i<N; i++) if (dpInc[i]+dpDec[i]>res) res=dpInc[i]+dpDec[i];
//    cout<<res-1;
//    return 0;
//}