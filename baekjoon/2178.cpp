//#include <algorithm>
//#include <iostream>
//#include <queue>
//#include <vector>
//
//#define PRINT(x) cout << x << "\n"
//#define PR pair<int, int>
//#define LB cout << "\n"
//using namespace std;
//
//int carte[101][101] = {
//    0,
//};
//int dist[101][101] = {
//    0,
//};
//bool visited[101][101] = {
//    0,
//};
//int N, M;
//int nI[4] = {0, 0, -1, 1};  // up down left right
//int nJ[4] = {-1, 1, 0, 0};
//
//void Bfs() {
//    queue<pair<int, int>> q;
//    q.push(make_pair(1, 1));
//    dist[1][1] = 1;
//    visited[1][1] = true;
//
//    while (!q.empty()) {
//        PR curr = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int fI = curr.first + nI[i];
//            int fJ = curr.second + nJ[i];
//            if (fI > N || fI < 0 || fJ > M || fJ < 0) continue;
//            if (!visited[fI][fJ] && carte[fI][fJ] == 1) {
//                visited[fI][fJ] = true;
//                q.push(make_pair(fI, fJ));
//                dist[fI][fJ] = dist[curr.first][curr.second] + 1;
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            char tmp;
//            cin >> tmp;
//            carte[i][j] = (tmp == '1') ? 1 : 0;
//        }
//    }
//    Bfs();
//    cout << dist[N][M];
//    return 0;
//}