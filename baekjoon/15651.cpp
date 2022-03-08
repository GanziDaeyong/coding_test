//#include <iostream>
//
//using namespace std;
//
//int n, m;
//int res[8] = {0,};
//
//void nmdfs(int size) {
//    if (size == m) {
//        for (int i = 0; i < m; i++) {
//            cout << res[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//    for (int i = 1; i < n + 1; i++) {
//        res[size]=i;
//        nmdfs(size + 1);
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> n >> m;
//    nmdfs(0);
//    return 0;
//}