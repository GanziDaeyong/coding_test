//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int emptySize;
//int S[9][9];
//vector<pair<int, int>> idx;
//
//int *mksq(int val) {
//    int *sq = new int[3];
//    sq[0] = val;
//    if (val % 3 == 0) {
//        sq[1] = val + 1;
//        sq[2] = val + 2;
//    } else if (val % 3 == 1) {
//        sq[1] = val + 1;
//        sq[2] = val - 1;
//    } else {
//        sq[1] = val - 1;
//        sq[2] = val - 2;
//    }
//    return sq;
//}
//
//bool isValid(pair<int, int> loc, int value) {
//    int row = loc.first;
//    int col = loc.second;
//    for (int i = 0; i < 9; i++) if (S[row][i] == value || S[i][col] == value) return false;
//    int *sqRow = mksq(row);
//    int *sqCol = mksq(col);
//    for (int i = 0; i < 3; i++)
//        for (int j = 0; j < 3; j++) {
//            if (sqRow[i] == row && sqCol[j] == col) continue;
//            if (value == S[sqRow[i]][sqCol[j]]) return false;
//        }
//    return true;
//}
//
//
//void dfs(int cnt) {
//
//    if (cnt >= emptySize) {
//        for (int i = 0; i < 9; i++) {
//            for (int j = 0; j < 9; j++) {
//                cout << S[i][j] << " ";
//            }
//            cout << "\n";
//        }
//        exit(0);
//    }
//
//    for (int i = 1; i <= 9; i++) {
//        int row = idx.at(cnt).first;
//        int col = idx.at(cnt).second;
//        if (isValid(idx.at(cnt), i)) {
//            S[row][col] = i;
//            dfs(cnt + 1);
//            S[row][col] = 0;
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            int tmp;
//            cin >> tmp;
//            if (tmp == 0) idx.push_back(make_pair(i, j));
//            S[i][j] = tmp;
//        }
//    }
//    emptySize = idx.size();
//    dfs(0);
//    return 0;
//}