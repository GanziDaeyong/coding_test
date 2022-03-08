//#include <iostream>
//
//using namespace std;
//#define VISITED 1
//#define UNVISITED 0
//
//int N, M;
//int card[100] = {0,};
//int flag[100] = {0,};
//int selected[3] = {0,};
//int minDif = 300000;
//int answer = 0;
//
//void dfs(int cnt) {
//    if (cnt >= 3) {
//        int sum = 0;
//        for (int v : selected) sum += v;
//        int dif = M-sum;
//        if (0 <= dif && dif < minDif){
//            minDif=dif;
//            answer=sum;
//        }
//        return;
//    }
//
//    for (int i = 0; i < N; i++) {
//        if (flag[i] == UNVISITED && selected[cnt - 1] <= card[i]) { // [-1]이 어차피 0이므로 cnt=0 고려 필요 X
//            flag[i] = VISITED;
//            selected[cnt] = card[i];
//            dfs(cnt + 1);
//            flag[i] = UNVISITED;
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) cin >> card[i];
//    dfs(0);
//    cout<<answer;
//    return 0;
//}
//
