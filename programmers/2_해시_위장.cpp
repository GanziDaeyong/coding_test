#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    
    map<string, int> m;
    for (vector<string> v : clothes){
        map<string, int>::iterator it = m.find(v[1]);
        if (it!=m.end()){
            it->second += 1;
        } else {
            m.insert(make_pair(v[1],1));
        }
    }
    map<string, int>::iterator it;
    
    int res = 0;
    
    if (m.size()!=1){
        res = 1;
        for (it=m.begin(); it!=m.end(); it++){
        res *= (it->second)+1;
    }
        res-=1;
    }
    else{
    res += clothes.size();
        
    }
 
        

    return res;
}