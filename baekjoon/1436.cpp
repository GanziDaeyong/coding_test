//#include <iostream>
//#include <math.h>
//using namespace std;
//int N;
//
///*
// * 16666
// *
// * 1. 6666의 idx를 찾기
// * 2. 1666(cut)과 6(leftover)으로 나누기
// * 3. leftover의 길이 구하고 그 길이만큼 10의 거듭제곱하기(toPad)
// * 4. for 문으로 toPad만큼 더하기 -> 1666+0  1666+1  1666+2 ... 1666+9
// */
//
//
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//    int value = 666;
//    int i=1;
//
//    while(i<N) {
//        string str = to_string(value+1000);
//        if (str.find("6666")!=string::npos) {
//            int idx = str.find("6666");
//            string cut = str.substr(0,idx+3);
//            int leftover =str.length()-cut.length();
//            int toPad = pow(10, leftover);
//            if (i+toPad<N) {
//                i+=toPad;
//                value+=1000;
//            }
//            else {
//                for (int j=0; j<toPad; j++) {
//                    i+=1;
//                    if (i==N){
//                        string num=to_string(j);
//                        for (int q=0; q<leftover-to_string(j).length(); q++) num = "0"+num;
//                        cout<<cut+num;
//                        exit(0);
//                    }
//                }
//            }
//        }
//        else {
//            i++;
//            value+=1000;
//        }
//    }
//    cout<<value;
//    return 0;
//}
//
