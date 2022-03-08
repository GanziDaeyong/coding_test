//#include <iostream>
//#include <algorithm>
//
//#define VISITED 1
//#define UNVISITED 0
//
//using namespace std;
//
//int N;
//int flag[21] = {0,};
//int teamA[11] = {0,};
//int teamB[11] = {0,};
//int S[21][21];
//int minV = 10000;
//
//int calc(int A) {
//    int sum = 0;
//    if (A == 1) {
//        for (int i = 1; i <= N / 2; i++) {
//            for (int j = i + 1; j <= N / 2; j++) { sum += (S[teamA[i]][teamA[j]] + S[teamA[j]][teamA[i]]); }
//        }
//    } else {
//        int idx = 1;
//        for (int i = 1; i <= N; i++) {
//            if (find(begin(teamA), end(teamA), i) == end(teamA)) { teamB[idx++] = i; }
//        }
//        for (int i = 1; i <= N / 2; i++) {
//            for (int j = i + 1; j <= N / 2; j++) { sum += (S[teamB[i]][teamB[j]] + S[teamB[j]][teamB[i]]); }
//        }
//    }
//    return sum;
//}
//
//
//void dfs(int cnt) {
//    if (cnt > N / 2) {
//        int aRes = calc(1);
//        int bRes = calc(0);
//        if (abs(aRes - bRes) < minV) minV = abs(aRes - bRes);
//        return;
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (flag[i] == UNVISITED && teamA[cnt - 1] < i) {
//            flag[i] = VISITED;
//            teamA[cnt] = i;
//            dfs(cnt + 1);
//            flag[i] = UNVISITED;
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//    for (int i = 1; i <= N; i++) { for (int j = 1; j <= N; j++) cin >> S[i][j]; }
//    dfs(1);
//    cout<<minV;
//    return 0;
//}