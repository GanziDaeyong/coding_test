//#include <iostream>
//#include <vector>
//using namespace std;
//string eq;
//bool minusAppeared=false;
//
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin>>eq;
//
//    string operand="";
//
//    int res = 0;
//    for (char c : eq) {
//        if (c=='+'||c=='-'){
//            if (minusAppeared) res-=stoi(operand);
//            else res+=stoi(operand);
//            if (minusAppeared==false && c=='-') minusAppeared=true;
//            operand="";
//            continue;
//        }
//        operand+=c;
//    }
//    if (minusAppeared) res-=stoi(operand);
//    else res+=stoi(operand);
//
//    cout<< res;
//    return 0;
//}