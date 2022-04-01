#include <iostream>
#include <string>
using namespace std;

string lcs[1001][1001];

int main(){
   string a, b;
   cin>>a>>b;
   for (int i=0; i<=(int)a.size(); i++) {
       for (int j=0; j<=(int)b.size(); j++){
           if (i==0 || j==0) {
               lcs[i][j] = "";
               continue;
           }
           if (a[i-1]==b[j-1]) lcs[i][j]=lcs[i-1][j-1]+a[i-1];
           else {
               lcs[i][j] = lcs[i-1][j].size() > lcs[i][j-1].size() ? lcs[i-1][j] : lcs[i][j-1];
           }
       }
   }
   cout<<(lcs[a.size()][b.size()]).size()<<"\n";
   cout<<lcs[a.size()][b.size()];
   
   return 0;
}