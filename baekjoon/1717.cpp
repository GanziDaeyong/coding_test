// #include <iostream>
// using namespace std;

// int p[1000001] = {0,};

// int find(int x){
//     if (x == p[x]) return x;
//     else return p[x] = find(p[x]);
// }

// void uni(int x, int y){
//     x = find(x);
//     y = find(y);
//     if (x<y) p[y] = x;
//     else if (x>y) p[x] = y; 
// }
// int same_p(int x, int y){
//     return find(x)==find(y);
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);
//     int n, m; cin>>n;cin>>m;
//     for (int i=0; i<=n; i++) p[i]=i;
//     for (int i=0; i<m; i++){
//         int inst, a, b; cin>>inst;cin>>a;cin>>b;
//         if (inst==0) uni(a, b);
//         else {
//             if(same_p(a, b)) cout<<"YES\n";
//             else cout<<"NO\n";
//         } 
//     }    

//     return 0;
// }