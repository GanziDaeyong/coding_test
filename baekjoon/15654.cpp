//#include <iostream>
//#include <algorithm>
//#define UNVISITED 0
//#define VISITED 1
//using namespace std;
//int N, M;
//int arr[8]={0,};
//int flag[10001]={0,};
//int lis[8]={0,};
//
//
//void dfs(int cnt){
//
//    if (cnt == M) {
//        for (int i=0; i<M; i++) cout<<lis[i]<<" ";
//        cout<<"\n";
//        return;
//    }
//    for (int i=0; i<N; i++) {
//        if (flag[arr[i]]==UNVISITED && (cnt==0||lis[cnt-1]<arr[i])) {
//            lis[cnt]= arr[i];
//            flag[arr[i]]=VISITED;
//            dfs(cnt+1);
//            flag[arr[i]]=UNVISITED;
//        }
//    }
//
//}
//
//int main(){
//    cin>>N>>M;
//    for (int i=0; i<N; i++) {
//        int tmp;
//        cin>>tmp;
//        arr[i]=tmp;
//    }
//    sort(arr, arr+N);
//    dfs(0);
//    return 0;
//}