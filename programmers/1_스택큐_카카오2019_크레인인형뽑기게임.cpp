#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;


int solution(vector<vector<int>> board, vector<int> moves) {
    
    queue<int> q[99];
    stack<int> st;
    
    for (int i=0; i<board.size();  i++){
        for (int j=0; j<board.size(); j++){
            if (board[i][j] !=0){
                q[j+1].push(board[i][j]);
            }
        }
    }
    
    int cnt = 0;
    for (int v : moves){
        if (q[v].empty()) continue;
        int topop = q[v].front();
        if (!st.empty() && st.top() == topop){
            cnt +=2;
            st.pop();
            q[v].pop();
            continue;
        }
        st.push(topop);
        q[v].pop();
    }
    
    return cnt;
}