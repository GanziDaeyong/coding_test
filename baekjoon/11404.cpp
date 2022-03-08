//#include <iostream>
//#include <algorithm>
//
//#define INF 100000000
//using namespace std;
//int n, m;
//int w[101][101] = {0,};
//int d[101][101][101] = {0,};
//
//void floydWarshall(){
//    for (int i = 1; i<=n; i++) {
//        for (int j = 1; j<=n; j++) {
//            d[0][i][j] = w[i][j];
//        }
//    }
//    for (int k = 1; k<=n; k++) {
//        for (int i = 1; i<=n; i++) {
//            for (int j = 1; j<=n; j++) {
//                if (i==j) {
//                    d[k][i][j] = 0;
//                    continue;
//                }
//                d[k][i][j] = min(d[k-1][i][j], d[k-1][i][k]+d[k-1][k][j]);
//            }
//        }
//    }
//}
//
//
//int main() {
//    fill(&(w[0][0]), &(w[0][0])+101*101, INF);
//    cin>>n>>m;
//    for (int i = 0; i<m; i++) {
//        int start, goal, cost;
//        cin>>start>>goal>>cost;
//        if (w[start][goal]>cost) w[start][goal] = cost;
//    }
//
//    floydWarshall();
//
//    for (int i = 1; i<=n; i++) {
//        for (int j = 1; j<=n; j++) {
//            if (d[n][i][j]==INF) cout<<0<<" ";
//            else cout<<d[n][i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//
//}