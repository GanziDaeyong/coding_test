#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (vector<int> v : commands){
        
        vector<int> each;
        each.reserve(array.size());

        each.assign(array.begin()+v[0]-1, array.begin()+v[1]);
        sort(each.begin(), each.end());

        answer.push_back(each[v[2]-1]);    
    }
    
    return answer;
}