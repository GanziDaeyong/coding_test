//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int zeroForPrime[246913] = {1,1,}; // 1은 소수 x니까.
//vector<int> vec;
//
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    while (true) {
//        int n;
//        cin >> n;
//        if (n == 0) break;
//        vec.push_back(n);
//    }
//    int maxV = *max_element(vec.begin(), vec.end());
//    for (int i = 2; i <= sqrt(maxV * 2); i++) {
//        for (int j = i * 2; j <= maxV * 2; j += i) {
//            zeroForPrime[j] = 1;
//        }
//    }
//    for (int v: vec) {
//        int cnt = 0;
//        for (int i = v + 1; i <= v * 2; i++) { if (zeroForPrime[i] == 0) cnt++; }
//        cout << cnt << "\n";
//    }
//    return 0;
//}