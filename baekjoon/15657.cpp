//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int N, M;
//int arr[8]={0,};
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
//        if (lis[cnt-1]<=arr[i]||cnt==0) {
//            lis[cnt]= arr[i];
//            dfs(cnt+1);
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