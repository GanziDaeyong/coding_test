//#include <iostream>
//#include <algorithm>
//
//#define UNVISITED 0
//#define VISITED 1
//using namespace std;
//int N, M;
//int arr[8] = {0,};
//int flag[8] = {0,};
//int lis[8] = {0,};
//
//void dfs(int cnt) {
//
//    if (cnt == M) {
//        for (int i = 0; i < M; i++) {
//            cout << lis[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//    int last=0;
//    for (int i = 0; i < N; i++) {
//        if (flag[i] == UNVISITED && arr[i] !=last) {
//            last = arr[i];
//            lis[cnt] = arr[i];
//            flag[i] = VISITED;
//            dfs(cnt+ 1);
//            flag[i] = UNVISITED;
//        }
//    }
//}
//
//int main() {
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) {
//        int tmp;
//        cin >> tmp;
//        arr[i] = tmp;
//    }
//    sort(arr, arr + N);
//    dfs(0);
//    return 0;
//}