/* 
	BFS를 사용하되, 특정 목표까지 거친 노드 수를 알아야 할 경우 
	큐에 pair 형태로 두 번째 인자 countOrder를 넣어준 뒤, 
	큐에 새로이 추가되는 노드는 부모 노드의 countOrder + 1 하는 식.
	ex) 프로그래머스 - bfs - 단어찾기
*/

void bfs(){
    
    queue<p_si> q;
    q.push(make_pair(start, 0));
    while(!q.empty()){
        if (Goal Achieved){
            return;
        }     
        for (int i=0; i<vec.size(); i++){
            if (visited[i]==UNVISITED && {조건 추가 위치}){
                int countOrder = (q.front().second) + 1 
                q.push(make_pair(vec[i], countOrder));
                visited[i]=VISITED;
            }      
        }
        q.pop();
    }
    return;
}
