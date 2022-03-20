#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

long long solution(int n, vector<int> times) {
    
    sort(times.begin(), times.end());
    
    ll l = 1;
    ll r = times[times.size()-1]*n;
    
    while (true){
        
        ll m = (l+r)/2;
        ll peoplecnt = 0;
        for (int v : times){
            peoplecnt += (m / v);
        }
        if (peoplecnt>=n) {
            r = m;
        }
        else l = m+1;
        if (l==r){
            break;
        }        
    }
    
    long long answer = l;
    return answer;
}