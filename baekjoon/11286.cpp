//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//int N;
//
//struct toCompare {
//    bool operator()(int a, int b) {
//        if (abs(a)>abs(b)) return true;
//        else if (abs(a)==abs(b) && a>b) return true;
//        else if (abs(a)==abs(b) && a<=b) return false;
//        else return false;
//        }
//};
//
//int main(){
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin>>N;
//    priority_queue<int, vector<int>, toCompare> pq;
//    for (int i=0; i<N; i++) {
//        int tmp;
//        cin>>tmp;
//        if (tmp!=0) pq.push(tmp);
//        else {
//            if (!pq.empty()){
//                cout<<pq.top()<<"\n";
//                pq.pop();
//            }
//            else cout<<0<<"\n";
//        }
//
//    }
//return 0;
//}