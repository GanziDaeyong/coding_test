//#include <algorithm>
//#include <iostream>
//#include <queue>
//#include <vector>
//
//
//using namespace std;
//
//int N, K;
//bool visited[100001] = {
//    0,
//};
//priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minpq;
//
//int Bfs(int st) {
//    minpq.push(make_pair(0, st));
//    visited[st] = true;
//
//    while (!minpq.empty()) {
//        pair<int,int> curr = minpq.top();
//        minpq.pop();
//        int currDist = curr.first;
//        int nextDist = currDist + 1;
//        if (curr.second==K) return currDist;
//
//        if (curr.second * 2 <= 100000 && curr.second *2 <= K*2 && !visited[curr.second*2]) {
//            minpq.push(make_pair(currDist, curr.second * 2));
//            visited[curr.second*2]=true;
//        }
//        if (curr.second + 1 <= K && !visited[curr.second+1]) {
//            minpq.push(make_pair(nextDist, curr.second + 1));
//            visited[curr.second+1] = true;
//        }
//        if (curr.second - 1 >= 0 && !visited[curr.second-1]) {
//            minpq.push(make_pair(nextDist, curr.second - 1));
//            visited[curr.second-1] = true;
//        }
//    }
//    return 0;
//}
//
//int main() {
//    ios_base ::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> N >> K;
//
//    if (K <= N) {
//        cout << N - K;
//        return 0;
//    }
//
//    cout << Bfs(N);
//
//    return 0;
//}