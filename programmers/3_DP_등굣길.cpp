#include <string>
#include <vector>
#define MOD %1000000007
using namespace std;

int pud[101][101] = {0,};
int dp[101][101] = {0,}; // 1-base

int solution(int m, int n, vector<vector<int>> puddles) {
    
    for (vector<int> v: puddles){
        pud[v[0]][v[1]] =1;
    }
    
    for (int i=1; i<=m; i++) {
        if (pud[i][1]==1) break;
        else dp[i][1] = 1;
    }
    for (int i=1; i<=n; i++) {
        if (pud[1][i]==1) break; 
        else dp[1][i] = 1;
    }
    for (int y=2; y<=n; y++){
        for (int x=2; x<=m; x++){
            if (pud[x][y]==0) dp[x][y] = ((dp[x-1][y])MOD+(dp[x][y-1])MOD)MOD;
        }
    }
    
    int answer = dp[m][n];
    return answer;
}