//#include <iostream>
//#include <cmath>
//
//using namespace std;
//int N;
//
//int cal(int v) {
//    int rt = sqrt(v);
//    int rtsq = rt * rt;
//    if (v - rtsq == 0) return (2 * rt) - 1;
//    else if ((v - rtsq) > rt) return (2 * rt) + 1;
//    else return (2 * rt);
//}
//
//int main() {
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        int x, y;
//        cin >> x >> y;
//        cout << cal(y - x) << "\n";
//    }
//    return 0;
//}