//#include <iostream>
//
//int n;
//int col[15];
//int res;
//
//int promising(int i) {
//    for (int j = 0; j < i; j++) { // j는 기존 퀸
//        if (col[i] == col[j] || abs(col[i] - col[j]) == i - j) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//void Queens(int i) {
//    int j=0;
//    if (n == i) { res++; }
//    else {
//        while (j<n) {
//            col[i] = j;
//            if (promising(i)==1) {
//                Queens(i+1);
//            }
//            j+=1;
//        }
//    }
//}
//
//int main() {
//    std::cin>>n;
//    Queens(0);
//    std::cout<<res<<std::endl;
//    return 0;
//}