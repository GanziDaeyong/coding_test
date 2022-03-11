#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

bool compare(pii a, pii b) {
    if (a.second == b.second){
        return a.first<b.first;
    } else{
        return a.second>b.second;
    }
}
bool compare2(psi a, psi b) {
    return a.second>b.second;
}


vector<int> solution(vector<string> genres, vector<int> plays) {

    map<string, vector<pii>> ge;
    map<string, int> tp;

    for (int i=0; i<genres.size(); i++){

        pii p = make_pair(i, plays[i]);
        map<string, vector<pii>>:: iterator it = ge.find(genres[i]);

        if (it==ge.end()){
            vector<pii> vv;
            vv.push_back(p);
            ge[genres[i]] = vv;
            tp[genres[i]] = plays[i];
        } else{
            map<string, int>:: iterator it2 = tp.find(genres[i]);
            ge[genres[i]].push_back(p);
            tp[genres[i]] +=plays[i];
        }

    }

    map<string, vector<pii>> ::iterator it;
    
    for (it = ge.begin(); it!=ge.end(); ++it){
       sort( (it->second).begin(), (it->second).end(), compare);
    }

    vector<psi> toVec;
    toVec.resize(tp.size());
    copy(tp.begin(), tp.end(), toVec.begin());
    sort(toVec.begin(), toVec.end(), compare2);
    
    vector<int> answer;
    
    for (pair<string, int> v: toVec){
        vector<pii> tmp = ge[v.first];
        answer.push_back(tmp[0].first);
        if (tmp.size()>=2) answer.push_back(tmp[1].first);
    }

    return answer;

}