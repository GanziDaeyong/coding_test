//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//using namespace std;
//int N;
//vector<int> num;
//int hs[8001] = {0,};
//int maxV=-4001;
//int minV=4001;
//int sum=0;
//int maxFreq=0;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//
//    num.reserve(N);
//
//    for (int i = 0; i < N; i++) {
//        int tmp;
//        cin>>tmp;
//        sum+=tmp; // 산술평균
//        num.push_back(tmp); // 중앙값
//        if (tmp>0) hs[tmp+4000]++; // 최빈값
//        else hs[tmp*-1]++;
//        if (tmp<minV) minV=tmp; // 범위
//        if (tmp>maxV) maxV=tmp;
//    }
//
//    // 산술평균 구하기 //
//    double todouble = sum*1.0;
//    int arithMean = round(todouble/N*1.0);
//
//    // 중앙값 구하기 //
//    sort(num.begin(), num.end());
//    int median = num[N/2];
//
//    // 최빈값 구하기 //
//    for (int v: num) {
//        int idx;
//        if (v>0) { idx=v+4000;}
//        else idx = v*-1;
//        if (hs[idx]>maxFreq) maxFreq=hs[idx];
//    }
//    vector<int> tmpToCheckSame;
//    tmpToCheckSame.reserve(N);
//    for (int v: num) {
//        int idx;
//        if (v>0) { idx=v+4000;}
//        else idx = v*-1;
//        if (hs[idx]==maxFreq) tmpToCheckSame.push_back(v);
//    }
//    int mostFreq=0;
//    if (tmpToCheckSame.size()==1) mostFreq=tmpToCheckSame[0];
//    else {
//        sort(tmpToCheckSame.begin(), tmpToCheckSame.end());
//        tmpToCheckSame.erase(unique(tmpToCheckSame.begin(), tmpToCheckSame.end()), tmpToCheckSame.end());
//        mostFreq=tmpToCheckSame[1];
//    }
//
//    // 범위 구하기 //
//    int ran = maxV-minV;
//
//    // 출력 //
//    cout<<arithMean<<"\n"<<median<<"\n"<<mostFreq<<"\n"<<ran;
//    return 0;
//}