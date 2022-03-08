//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//int N;
//priority_queue<int> maxpq;
//priority_queue<int, vector<int>, greater<int>> minpq; // minheap
//
//void swap() {
//    maxpq.push(minpq.top());
//    minpq.push(maxpq.top());
//    maxpq.pop();
//    minpq.pop();
//}
//
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin>>N;
//    for (int i=0; i<N; i++) {
//        int tmp;
//        cin>>tmp;
//        if (i==0) maxpq.push(tmp);
//        else if (i==1) {
//            minpq.push(tmp);
//            if (maxpq.top()>minpq.top()) swap();
//        }
//        else {
//            if (minpq.size()<maxpq.size()) { minpq.push(tmp); }
//            else { maxpq.push(tmp); }
//            if (maxpq.top()>minpq.top()) swap();
//        }
//        cout<<maxpq.top()<<" ";
//    }
//    return 0;
//}

