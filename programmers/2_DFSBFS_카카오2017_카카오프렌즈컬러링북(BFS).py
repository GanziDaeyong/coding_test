#include <vector>
#include <queue>
using namespace std;

int area_cnt = 0;
int each_area = 0;
int biggest = 0;
typedef pair<int, int> p_ii;

queue<p_ii> q;
int visited[101][101];
vector<vector<int>> picture;
int m, n;

vector<p_ii> getneighbor(p_ii p){
    int i = p.first; int j = p.second;
    vector<p_ii> res;
    if (i!=0 && picture[i-1][j] ==picture[i][j]) res.push_back(make_pair(i-1, j));
    if (j!=0 && picture[i][j-1] ==picture[i][j]) res.push_back(make_pair(i, j-1));
    if (i!=m-1 && picture[i+1][j] ==picture[i][j]) res.push_back(make_pair(i+1, j));
    if (j!=n-1 && picture[i][j+1] ==picture[i][j]) res.push_back(make_pair(i, j+1));
    return res;
}

void bfs(p_ii p){
    q.push(p);
    visited[p.first][p.second] = 1;
    each_area+=1;
    while(!q.empty()){
        p_ii curr = q.front();
        vector<p_ii> neighborvector = getneighbor(curr);
        for (p_ii neighbor : neighborvector){
            if (!visited[neighbor.first][neighbor.second]){
                visited[neighbor.first][neighbor.second] = 1;
                q.push(neighbor);
                each_area +=1;  
            }
        }
        q.pop();
    }
    if (each_area >= biggest) biggest = each_area;
    each_area = 0;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int M, int N, vector<vector<int>> pic) {
    
    area_cnt = 0;
    each_area = 0;
    biggest = 0;
    
    picture = pic; m = M; n = N;
    
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            visited[i][j] = 0;
        }
    }
    
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (!visited[i][j] && picture[i][j]!=0){
                bfs(make_pair(i, j));
                area_cnt+=1;
            }
        }
    }
    vector<int> answer(2);
    
    answer[0] = area_cnt;
    answer[1] = biggest;
    return answer;
}