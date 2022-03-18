#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int solution(vector<int> people, int limit) {
    
    sort(people.begin(), people.end(), greater<int>());
    
    int fat = 0;
    int slim = people.size()-1;
    int boat = 0;
    
    while (1){
    
        if (people[fat]+people[slim]<=limit) slim-=1;
        fat+=1;
        boat+=1;

        if (fat==slim) {
            boat+=1;
            break;
        }
        else if (fat>slim) {
            break;
        }
    }
    return boat;
}