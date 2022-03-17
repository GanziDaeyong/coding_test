#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef map<string, vector<string>> m_svs;

m_svs m;
map<string, map<string, int>> tks;
int len;
vector<string> res;
int done=0;

void dfs(string curr){
    
    if (res.size()==len){
        done=1;
        return;
    }
    
    for (int i=0; i<m[curr].size(); i++){
        string region = m[curr][i];
        if (tks[curr][region]>0){
            tks[curr][region]-=1;
            res.push_back(region);
            dfs(region);
            if (done==1) return;
            tks[curr][region]+=1;
            res.pop_back();
        } 
    }
}



vector<string> solution(vector<vector<string>> tickets) {
    len = tickets.size()+1;
    res.push_back("ICN");
    
    for (vector<string> v : tickets){
        string from = v[0];
        string to = v[1];
        if (tks[from][to]!=0){
            tks[from][to]+=1;
        }
        else{
            tks[from][to]=1;
        }
        if (m[from].size()!=0){
            m[from].push_back(to);
        }
        else {
            vector<string> tmp;
            tmp.push_back(to);
            m[from] = tmp;
        }
    }
    m_svs::iterator it;
    for (it=m.begin(); it!=m.end(); it++){
        sort((it->second).begin(),(it->second).end());
    }
    
    dfs("ICN");
    
    vector<string> answer = res;
    return answer;
}