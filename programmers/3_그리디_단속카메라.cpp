#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool dycomp(vector<int> a, vector<int> b){
    return a[1]<b[1];
}

int solution(vector<vector<int>> routes) {
    
    sort(routes.begin(), routes.end(), dycomp);
    int cam = routes[0][1];
    int total = 1;
    for (int i=1; i<routes.size(); i++){
        int st = routes[i][0]; int fin = routes[i][1];
        if (st<=cam && cam<=fin) continue;
        if (st>cam) {
            cam = fin;
            total +=1;
        }
    }
    
    int answer = total;
    return answer;
}