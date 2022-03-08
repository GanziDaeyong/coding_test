//#include <iostream>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//
//set<int> possibleNodes[101];
//int flag[101][101] = {0, };
//int map[101][101] = {0,};
//int n, m, r;
//int origin;
//
//void dfs(int place, int leftDist){
//    if (leftDist<=0) return;
//    for (int i=1; i<=n; i++) {
//        if (flag[place][i]==0 && place!=i && map[place][i]!=0 && map[place][i]<=leftDist) {
//            flag[place][i]=1;
//            possibleNodes[origin].insert(i);
//            leftDist -= map[place][i];
//            dfs(i, leftDist);
//            flag[place][i]=0;
//            leftDist += map[place][i];
//        }
//    }
//}
//
//
//int main(){
//    cin>>n>>m>>r;
//    for (int i=1; i<=n; i++) {
//        int tmp;
//        cin>>tmp;
//        possibleNodes[i].insert(i);
//        map[i][i]=tmp;
//    }
//    for (int i=0; i<r; i++) {
//        int a, b, dist;
//        cin>>a>>b>>dist;
//        map[a][b] = dist;
//        map[b][a] = dist;
//    }
//    int max = 0;
//    for (int i=1; i<=n; i++) {
//        origin = i;
//        dfs(i,m);
//        int eachSum=0;
//        set<int>::iterator it;
//        for (it = possibleNodes[i].begin(); it!= possibleNodes[i].end(); ++it) eachSum+=map[*it][*it];
//        if (max<eachSum) max=eachSum;
//    }
//    cout<<max;
//    return 0;
//}