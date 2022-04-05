#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

using namespace std;
typedef pair<string, int> psi;

int solution(int cacheSize, vector<string> cities) {
    
    if (cacheSize==0) return cities.size()*5;
    
    set<string> s;
    map<string, int> m;
    int time = 0;
    int total = 0;
    for (string c : cities){
        transform(c.begin(), c.end(), c.begin(), ::tolower);
        int found =0;
        m[c] = time;
        time +=1;
        auto it = s.find(c);
        if (it!=s.end()) {
            total += 1;
        }
        else {
            if (s.size()<cacheSize){
                s.insert(c);
            }
            else {
                // find min from map
                string minStr = "";
                int minV = 999999;
                
                for (string str : s){
                    if (m[str]<minV){
                        minV = m[str];
                        minStr = str;
                    }
                }
                s.erase(minStr);
                s.insert(c);
            }
            total += 5;
        }
    }
    
    return total;
}