//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//#define VISITED true
//#define UNVISITED false
//int L, C;
//bool visited[123] = {false,};
//char arr[15] = {0,};
//char res[15] = {0,};
//
//
//void dfs(int cnt) {
//    if (cnt == L) {
//        int vowelCnt = 0;
//        for (int i = 0; i < L; i++) {
//            if (res[i] == 'a' || res[i] == 'e' || res[i] == 'i' || res[i] == 'o' || res[i] == 'u') vowelCnt++;
//        }
//        if (vowelCnt >= 1 && L - vowelCnt >= 2) {
//            for (int i = 0; i < L; i++) {
//                cout << res[i];
//            }
//            cout<<"\n";
//        }
//    }
//    for (int i = 0; i < C; i++) {
//        if (visited[arr[i]] == UNVISITED && arr[i] > res[cnt - 1]) {
//            visited[arr[i]] = VISITED;
//            res[cnt] = arr[i];
//            dfs(cnt + 1);
//            visited[arr[i]] = UNVISITED;
//        }
//    }
//}
//
//int main() {
//    cin >> L >> C;
//    for (int i = 0; i < C; i++) cin >> arr[i];
////    sort(arr, arr + C);
//
//    dfs(0);
//    return 0;
//}