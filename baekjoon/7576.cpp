//#include <algorithm>
//#include <iostream>
//#include <queue>
//#include <vector>
//#define PRINT(x) cout << x << "\n"
//#define LB cout << "\n"
//#define PR pair<int, int>
//using namespace std;
//
//int M, N;
//int box[1001][1001] = {
//    0,
//};
//int dist[1001][1001] = {
//    0,
//};
//
//int nI[4] = {0, 0, -1, 1};  // up down left right
//int nJ[4] = {-1, 1, 0, 0};
//
//queue<pair<int, int>> q;
//
//void Bfs() {
//    while (!q.empty()) {
//        PR curr = q.front();
//        q.pop();
//        for (int i = 0; i < 4; i++) {
//            int fI = curr.first + nI[i];
//            int fJ = curr.second + nJ[i];
//            if (fI > N || fI < 1 || fJ > M || fJ < 1) continue;
//
//            int newDist = dist[curr.first][curr.second] + 1;
//            if (box[fI][fJ] == 0 && (dist[fI][fJ] == 0 || dist[fI][fJ] > newDist)) {
//                dist[fI][fJ] = newDist;
//                q.push(make_pair(fI, fJ));
//            }
//        }
//    }
//}
//
//int main() {
//    ios_base ::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> M >> N;  // N,M = i,j
//
//    bool ripe = true;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            int tmp;
//            cin >> tmp;
//            box[i][j] = tmp;
//            if (tmp == 0) ripe = false;
//            if (tmp == 1) q.push(make_pair(i, j));
//        }
//    }
//    if (ripe) {
//        cout << 0;
//        return 0;
//    }
//
//    Bfs();
//
//    int maxV = 0;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            if (dist[i][j] == 0 && box[i][j] == 0) {
//                cout << -1;
//                return 0;
//            }
//            maxV = dist[i][j] > maxV ? dist[i][j] : maxV;
//        }
//    }
//    cout << maxV;
//    return 0;
//}