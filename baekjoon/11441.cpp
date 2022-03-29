//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int N; cin>>N;
//    int v[100000] = {0,};
//
//    int before = 0;
//    for (int i=0; i<N; i++){
//        int t; cin>>t;
//        v[i] = t + before;
//        before+=t;
//    }
//    int M; cin>>M;
//    for (int i=0; i<M; i++){
//        int a, b; cin>>a; cin>>b;
//        a-=1; b-=1;
//        if (a>=1) cout<<v[b]-v[a-1]<<"\n";
//        else cout<<v[b]<<"\n";
//    }
//
//    return 0;
//}