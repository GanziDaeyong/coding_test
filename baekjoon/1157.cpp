//#include <iostream>
//#include <algorithm>
//using namespace std;
//string s;
//int cnt[100]={0,};
//
//
//int main(){
//    cin>>s;
//    for (char v : s) {
//        if (v>=97) v-=32;
//        cnt[v]++;
//    }
//
//    int maxV = *max_element(cnt, cnt+100);
//    int tmpCnt=0;
//    int maxIdx = max_element(cnt, cnt+100) - cnt;
//    for (int i=64; i<100; i++) {
//        if (cnt[i]>=maxV) tmpCnt++;
//    }
//    if (tmpCnt>1) cout<<"?";
//    else {
//        char v = maxIdx;
//        cout<<v;
//    }
//}