#include <iostream>
using namespace std;

int main(){
    int arr[100001] = {0,};
    int N; cin>>N;
    int cnt = 0;
    int before = 0;
    for (int i=1; i<=N; i++){
        int t; cin>>t;
        if (t<before) cnt+=1;
        arr[i] = cnt;
        before = t;
    }

    int Q; cin>>Q;
    for (int i=0; i<Q; i++){
        int a, b; cin>>a; cin>>b;
        cout<<arr[b]-arr[a]<<"\n";
    }
    return 0;
}