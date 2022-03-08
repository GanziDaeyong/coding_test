//#include <iostream>
//
//using namespace std;
//int T;
//long long pad[100] = {1, 1, 1, 2, 2, 3, 4, 5, 7, 9,};
//
//void pado(int v) {
//    if (v <= 10) {
//        cout<<pad[v - 1]<<"\n";
//        return;
//    }
//    for (int i = 10; i < v; i++) {
//        if (pad[i] != 0) continue;
//        pad[i] = pad[i - 1] + pad[i - 5];
//    }
//    cout << pad[v - 1]<<"\n";
//}
//
//
//int main() {
//    cin >> T;
//    for (int i = 0; i < T; i++) {
//        long long tmp;
//        cin>>tmp;
//        pado(tmp);
//    }
//    return 0;
//}