//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//vector<pair<int, int>> lines;
//int dp[501];
//int N, maxV;
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    if (a.first < b.first) return true;
//    return false;
//}
//
//int main() {
//
//    fill_n(dp,501,1);
//    cin >> N;
//    lines.reserve(100);
//    for (int i = 0; i < N; i++) {
//        int a, b;
//        cin >> a >> b;
//        lines.push_back(pair<int, int>(a, b));
//    }
//    sort(lines.begin(), lines.end(), cmp);
//    maxV = 1;
//
//    for (int i = 1; i < N; i++) {
//        int iFir = lines[i].first;
//        int iSec = lines[i].second;
//        for (int j = 0; j < i; j++) {
//            int jFir = lines[j].first;
//            int jSec = lines[j].second;
//            if (iFir > jFir && dp[iFir] < dp[jFir] + 1) {
//                if (iSec > jSec) {
//                    dp[iFir] = dp[jFir] + 1;
//                    if (dp[iFir] > maxV) maxV = dp[iFir];
//                }
//            }
//        }
//    }
//    cout << N - maxV;
//    return 0;
//}