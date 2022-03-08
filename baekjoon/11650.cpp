//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int N;
//
//bool cmp(pair<int, int> a, pair<int, int>b) {
//    if (a.first<b.first) return true;
//    else if (a.first==b.first) {
//        if (a.second<b.second) return true;
//        else return false;
//    }
//    else return false;
//}
//
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//    vector<pair<int, int>> xy;
//    for (int i = 0; i < N; i++) {
//        int a, b;
//        cin >> a >> b;
//        xy.push_back(pair<int, int>(a, b));
//    }
//    sort(xy.begin(), xy.end(), cmp);
//    for (pair<int, int> v : xy) cout << v.first << " " << v.second << "\n";
//    return 0;
//}