/*
 * 1. 어디?   프림은 최소신장트리 문제에 사용된다.
 * 2. 예시?   간선의 가중치의 합을 최소화하면서 모든 정점을 연결하라
 * 3. 설명?   visited 된 정점이 갖는 모든 간선 중, unvisited 정점으로 가는 것 중 최소 간선을 택한다.
 *           해당 정점을 visited에 추가하고, 다시 반복한다. 이때 visited 여부를 체크하는 것이 중요.
 * 4. 문제?   백준 1197, 프로그래머스_그리디_섬연결하기
 */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int, int> p_ii;
int V, E;
int visited[10001] = {0,};
vector<p_ii> m[10001]; // 간선 정보를 담을 자료구조는 백터배열이 젤 편한듯 하다.

/* 우선순위큐 정렬. 일반 순서와 역순임에 주의 */
struct dycomp{
    bool operator()(p_ii a, p_ii b){
        return a.second > b.second;
    }
};

int main(){

    /* 백터배열 m을 초기화해준다. */
    for (int i=1; i<=V; i++){
        vector<p_ii> tmp;
        m[i] = tmp;
    }

    /* 백터배열 m을 채워준다. */
    for (int i=0; i<E; i++){
        int a, b, w;
        m[a].push_back(make_pair(b, w));    // 연결된 정점, 간선 가중치 순으로.
        m[b].push_back(make_pair(a, w));
    }

    /* 우선순위큐를 선언해주고, 첫 원소를 처리해준다. */
    priority_queue<p_ii, vector<p_ii>, dycomp> pq;
    for (p_ii p : m[1]) pq.push(p); // 첫 원소는 1로. 문제 바이 문제. 첫 원소의 친구들 넣어준다.
    visited[1] = 1;

    /* 핵심 로직 */
    int total =0;
    while(!pq.empty()){             // 방문한 정점 수로 최적화 가능하긴 하다.
        p_ii curr = pq.top();
        if (visited[curr.first]) {  // 만약 지금 최솟값으로 뽑힌 애가 visited 그룹에 해당하면
            pq.pop();               // 무시하고 continue;
            continue;
        }
        total += curr.second;       // unvisited라면 바로 간선 가중치 처리해준다.
        visited[curr.first] = 1;    // visited로 넣어주고
        pq.pop();                   // 뽑아준다. ** 순서 주의해라. 아래랑 바뀌면 안됨 **
        for (p_ii neighbor : m[curr.first]) pq.push(neighbor); // 방금 뽑은 애 친구들 넣어준다.
    }

    cout<<total;
    return 0;
}

