//#include <algorithm>
//#include <iostream>
//#include <queue>
//#include <vector>
//#define PRINT(x) cout << x << "\n"
//#define LB cout << "\n"
//using namespace std;
//
//int M, N, H;
//int box[101][101][101] = {
//    0,
//};
//int dist[101][101][101] = {
//    0,
//};
//
//int nI[6] = {0, 0, 0, 0, -1, 1};
//int nJ[6] = {0, 0, -1, 1, 0, 0};
//int nK[6] = {-1, 1, 0, 0, 0, 0};
//
//typedef struct Tmt {
//    int i, j, k;
//} Tmt;
//
//queue<Tmt> q;
//
//void Bfs() {
//    while (!q.empty()) {
//        Tmt curr = q.front();
//        q.pop();
//        for (int i = 0; i < 6; i++) {
//            int fI = curr.i + nI[i];
//            int fJ = curr.j + nJ[i];
//            int fK = curr.k + nK[i];
//            if (fI > N || fI < 1 || fJ > M || fJ < 1 || fK > H || fK < 1) continue;
//
//            int newDist = dist[curr.i][curr.j][curr.k] + 1;
//            if (box[fI][fJ][fK] == 0 && (dist[fI][fJ][fK] == 0 || dist[fI][fJ][fK] > newDist)) {
//                dist[fI][fJ][fK] = newDist;
//                Tmt t{fI, fJ, fK};
//                q.push(t);
//            }
//        }
//    }
//}
//
//int main() {
//    ios_base ::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> M >> N >> H;  // N,M,H = i,j,k
//
//    bool ripe = true;
//    for (int k = 1; k <= H; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= M; j++) {
//                int tmp;
//                cin >> tmp;
//                box[i][j][k] = tmp;
//                if (tmp == 0) ripe = false;
//                if (tmp == 1) {
//                    Tmt t{i, j, k};
//                    q.push(t);
//                }
//            }
//        }
//    }
//
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
//            for (int k = 1; k <= H; k++) {
//                if (dist[i][j][k] == 0 && box[i][j][k] == 0) {
//                    cout << -1;
//                    return 0;
//                }
//                maxV = dist[i][j][k] > maxV ? dist[i][j][k] : maxV;
//            }
//        }
//    }
//    cout << maxV;
//    return 0;
//}