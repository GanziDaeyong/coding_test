//#include <iostream>
//#include <cmath>
//
//using namespace std;
//int n;
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        double x1, y1, x2, y2, r1, r2;
//        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//        double k = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//        if (k == 0 && r1 == r2) cout << -1 << "\n";
//        else if (k + r1 < r2 || k + r2 < r1) cout << 0 << "\n";
//        else if (k + r1 == r2 || k + r2 == r1) cout << 1 << "\n";
//        else if (r1 + r2 == k) cout << 1 << "\n";
//        else if (r1 + r2 > k) cout << 2 << "\n";
//        else cout << 0 << "\n";
//    }
//    return 0;
//}