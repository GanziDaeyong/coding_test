/*
 * 1. 어디?   bfs 중, 목표에 도달하기까지의 값을 알아야하는 경우가 있다.
 * 2. 예시?   생략
 * 3. 설명?   평소와 똑같이 bfs하되, 큐에 새로운 친구 원소 넣어줄 때 현재 원소의 second 값을 계승해준다.
 * 4. 문제?   프로그래머스_bfsdfs_단어변환
 */

int visited[100] = {0,};

void bfs(){
    queue<p_si> q;  // 큐 선언하고
    q.push(make_pair(start, 0));    // 첫 값 처리해준다.
    while(!q.empty()){
        if (Goal Achieved){         // 목표 달성하면 리턴
            return;
        }
        p_si curr = q.front();
        for (int i=0; i<curr의 친구들 순회; i++){             // 친구들 순회하며
            if (visited[i]==UNVISITED && {조건 추가 위치}){   // 특정 조건 만족하면
                int countOrder = (curr.second) + 1          // 쌓아갈 값 만들어주고
                q.push(make_pair(curr의 친구, countOrder));  // 큐에 넣어주기
                visited[i]=VISITED;
            }      
        }
        q.pop();
    }
    return;
}
