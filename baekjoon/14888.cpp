//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#define ADD_IDX 0
//#define SUB_IDX 1
//#define MUL_IDX 2
//#define DIV_IDX 3
//
//int minV = 1000000000;
//int maxV = -1000000000;
//int n;
//int num[11];
//int sym[10];
//int symCnt[4];
//
//void symDfs(int size){
//    if (size==n-1) {
//        int tmpRes=num[0];
//        for (int i=0; i<size; i++){
//            if(sym[i]==ADD_IDX) tmpRes += num[i+1];
//            else if(sym[i]==SUB_IDX) tmpRes -= num[i+1];
//            else if(sym[i]==MUL_IDX) tmpRes *= num[i+1];
//            else if(sym[i]==DIV_IDX) tmpRes /= num[i+1];
//        }
//        if (tmpRes>maxV) maxV=tmpRes;
//        if (tmpRes<minV) minV=tmpRes;
//        return;
//    }
//
//    for (int i=0; i<4; i++) {
//        if (symCnt[i]==0) continue;
//        sym[size]=i;
//        symCnt[i]-=1;
//        symDfs(size+1);
//        symCnt[i]+=1;
//    }
//}
//
//int main(){
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> n;
//    for (int i=0; i<n; i++) { cin>>num[i];}
//    cin >> symCnt[ADD_IDX] >> symCnt[SUB_IDX] >> symCnt[MUL_IDX] >> symCnt[DIV_IDX];
//    symDfs(0);
//    cout << maxV << '\n';
//    cout << minV;
//
//    return 0;
//}