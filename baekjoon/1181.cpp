//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int N;
//vector<string> mots;
//
//
//bool cmp(string a, string b) {
//    if (a.length() < b.length()) return true;
//    else if (a.length() > b.length()) return false;
//    else {
//        if (a < b) return true;
//        else return false;
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//    mots.reserve(N);
//    for (int i = 0; i < N; i++) {
//        string tmp;
//        cin >> tmp;
//        mots.push_back(tmp);
//    }
//    sort(mots.begin(), mots.end(), cmp);
//    mots.erase(unique(mots.begin(), mots.end()), mots.end());
//
//    for (string v : mots) cout << v << "\n";
//    return 0;
//}