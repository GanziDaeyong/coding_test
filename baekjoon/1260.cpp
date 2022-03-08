#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

#define PRINT(x) cout << x << "\n"
using namespace std;

vector<int> neighbor[1001];
int N, M, ST;
bool visited[1001] = {0,};

void dfs(int curr, int cnt) {
    cout<<curr<<" ";
    if (cnt == N) return;
    for (int ami : neighbor[curr]) {
        if (!visited[ami]) {
            visited[ami] = true;
            dfs(ami, cnt + 1);
        }
    }
}

void bfs() {
    cout<<ST<<" ";
    visited[ST]=true;
    queue<int> q;
    for (int ami : neighbor[ST]) {
        q.push(ami);
        visited[ami] = true;
    }
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (int ami : neighbor[curr]) {
            if (!visited[ami]) {
                q.push(ami);
                visited[ami] = true;
            }
        }
    }
}

void clear(){
    for (int i=1; i<=N; i++) {
        visited[i]=0;
    }
}

int main() {
    cin >> N >> M >> ST;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        neighbor[a].push_back(b);
        neighbor[b].push_back(a);
    }

    for (int i=1; i<=N; i++) {
        sort(neighbor[i].begin(), neighbor[i].end());
    }

    visited[ST] = true;
    dfs(ST, 1);
    clear();
    cout<<"\n";
    bfs();
    return 0;
}