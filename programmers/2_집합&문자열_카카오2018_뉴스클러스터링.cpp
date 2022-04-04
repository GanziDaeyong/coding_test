#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int solution(string str1, string str2) {
    
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    multiset<string> s1, s2;
    
    for (int i=0; i<str1.size()-1; i++){
        if (isalpha(str1[i]) && isalpha(str1[i+1])){
            string toput = str1.substr(i, 2);
            s1.insert(toput);
        }
    }
    for (int i=0; i<str2.size()-1; i++){
        if (isalpha(str2[i]) && isalpha(str2[i+1])){
            string toput = str2.substr(i, 2);
            s2.insert(toput);            
        }
    }
    
    vector<string> v_inter, v_union;
    
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(v_inter));
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(v_union));
    
    if (v_union.size()==0) return 65536;
    double division = (v_inter.size()*1.0/v_union.size());
    division *= 65536;
    return division;
}
