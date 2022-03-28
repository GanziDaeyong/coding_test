//#include <algorithm>
//#include <iostream>
//#include <queue>
//#include <vector>
//
//#define PRINT(x) cout << x << "\n"
//#define LB cout << "\n"
//#define PR pair<int, pair<int, int>>
//using namespace std;
//
//int nI[4] = {0, 0, -1, 1};
//int nJ[4] = {-1, 1, 0, 0};
//int m[1001][1001] = {0,};
//int v[1001][1001][2] = {0,};
//int N, M;
//
//int Bfs() {
//    queue<PR> q;
//
//    q.push(make_pair(0, make_pair(1, 1)));
//    v[1][1][0] = 1;
//
//    while (!q.empty()) {
//        PR curr = q.front();
//        q.pop();
//        int currI = curr.second.first;
//        int currJ = curr.second.second;
//        int currDist = v[currI][currJ][curr.first];
//        int newDist = currDist + 1;
//
//        if (currI == N && currJ == M) return currDist;
//
//        for (int i = 0; i < 4; i++) {
//            int newI = currI + nI[i];
//            int newJ = currJ + nJ[i];
//            if ((1 <= newI && newI <= N) && (1 <= newJ && newJ <= M)) {
//                if (m[newI][newJ] == 1){
//                    if (v[newI][newJ][1]==0 && curr.first == 0) {
//                    q.push(make_pair(1, make_pair(newI, newJ)));
//                    v[newI][newJ][1]=newDist;
//                    }
//                }
//                else {
//                    if (v[newI][newJ][0]==0 && curr.first == 0){
//                        q.push(make_pair(0, make_pair(newI, newJ)));
//                        v[newI][newJ][0] = newDist;
//                        }
//
//                    else if (v[newI][newJ][1]==0 && curr.first==1){
//                        q.push(make_pair(1, make_pair(newI, newJ)));
//                        v[newI][newJ][1] = newDist;
//                    }
//                }
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            char tmp;
//            cin >> tmp;
//            if (tmp == '0')
//                m[i][j] = 0;
//            else
//                m[i][j] = 1;
//        }
//    }
//
//
//    cout<<Bfs();
//    return 0;
//}