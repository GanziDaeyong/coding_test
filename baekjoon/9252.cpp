#include <iostream>
#include <vector>
#include <string>
using namespace std;
int lcs[1001][1001]={0,};

int main(){

    string a,b; cin>>a;cin>>b;

    for (int i=1; i<=a.size(); i++){
        for (int j=1; j<=b.size(); j++){
            if (a[i-1]==b[j-1]) lcs[i][j] = lcs[i-1][j-1] +1;
            else lcs[i][j] = lcs[i-1][j] > lcs[i][j-1]? lcs[i-1][j] : lcs[i][j-1];
        }
    }
    cout<<lcs[a.size()][b.size()]<<"\n";

    int i=a.size(); int j = b.size();
    vector<char> v;
    while(1){
        if (lcs[i][j]==lcs[i-1][j]) i-=1; 
        else if (lcs[i][j] == lcs[i][j-1]) j-=1;
        else {
            v.push_back(a[i-1]);
            i-=1; j-=1;
        }
        if (i==0 || j==0) break;
    }
    for (int i=v.size()-1; i>=0; i--){
        cout<<v[i];
    }


    return 0;
}