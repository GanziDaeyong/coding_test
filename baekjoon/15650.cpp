//#include <iostream>
//using namespace std;
//
//
//#define V true
//#define UNV false
//int n, m;
//bool visited[9] = {false, };
//int res[8] = {0, };
//
//
//
//void nmdfs(int size){
//    if (size==m) {
//        for (int i=0; i<m;i++){
//            cout<<res[i]<<" ";
//        }
//        cout<<"\n";
//        return;
//    }
//    for (int i=1; i<n+1; i++) {
//        if (visited[i]==UNV){
//            if (size==0 || (size>=1 && res[size-1]<i)) {
//                res[size]=i;
//                visited[i]=V;
//                nmdfs(size+1);
//                visited[i]=UNV;
//            }
//        }
//    }
//}
//
//
//
//int main(){
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> n >> m;
//    nmdfs(0);
//    return 0;
//}