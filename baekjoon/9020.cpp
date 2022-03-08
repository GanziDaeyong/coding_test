//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//int zeroForPrime[10001] = {1, 1,};
//vector<int> vec;
//int N;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        int v;
//        cin >> v;
//        vec.push_back(v);
//    }
//    int maxV = *max_element(vec.begin(), vec.end());
//
//    for (int i = 2; i <= sqrt(maxV); i++) {
//        for (int j = i * 2; j <= maxV; j += i) zeroForPrime[j] = 1;
//    }
//
//    for (int i = 0; i < N; i++) {
//        int v = vec[i];
//        int idx = v / 2;
//        while (idx < v) {
//            if (zeroForPrime[idx] == 0 && zeroForPrime[v - idx] == 0) {
//                cout << v - idx << " " << idx << "\n" ;
//                break;
//            }
//            idx++;
//        }
//
//    }
//    return 0;
//
//}