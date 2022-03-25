int dp[101][101] = {0,}; // 1-based

for (int i=1; i<=m; i++) dp[i][1] = 1;
for (int i=1; i<=n; i++) dp[1][i] = 1;
for (int y=2; y<=n; y++){
    for (int x=2; x<=m; x++){
        dp[x][y] = dp[x-1][y]+dp[x][y-1];
        }
    }
    
return dp[m][n];

