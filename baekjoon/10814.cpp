//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int N;
//vector<pair<int, string>> member;
//
//bool cmp(pair<int, string> a, pair<int, string> b) {
//    if (a.first < b.first) return true;
//    return false;
//}
//
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//    member.reserve(N);
//    for (int i = 0; i < N; i++) {
//        int age;
//        string name;
//        cin >> age >> name;
//        member.push_back(pair<int, string>(age, name));
//    }
//
//    stable_sort(member.begin(), member.end(), cmp);
//    for (pair<int, string> v: member) cout << v.first << " " << v.second << "\n";
//    return 0;
//}