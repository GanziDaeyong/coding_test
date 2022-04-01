#include <iostream>
using namespace std;

int P[201]={0,};


int find(int a){
    if (a==P[a]) return a;
    else return P[a] = find(P[a]);
}

void uni(int a, int b){
    a = find(a);
    b = find(b);
    if (a<b) P[b]=a;
    else if (a>b) P[a]=b;
}

int samep(int a, int b){
    return find(a)==find(b);
}

int main(){
    int m, n; cin>>n; cin>>m;
    for (int i=1; i<n; i++) P[i]=i;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            int t; cin>>t;
            if (t==1) uni(i, j);
        }
    }

    int st; cin>>st;
    int possible = 1;
    for (int i=0; i<m-1; i++){
        int next; cin>>next;
        if (!samep(st, next)) possible =0;         
    }
    if (possible) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}