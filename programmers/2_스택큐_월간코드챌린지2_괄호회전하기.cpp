#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int dy(string s){
    int zeroed = 0; 
    stack<char> st;
    int idx = 0;
    while(idx<s.size()){
        char c = s[idx];
        if (c=='[' || c=='(' || c=='{') {
            if (st.empty()) zeroed+=1;
            st.push(c);
        }
        else {
            if (st.empty()) return -1;
            char t = st.top();
            if (c==']' && t!='[') return -1;
            if (c==')' && t!='(') return -1;
            if (c=='}' && t!='{') return -1;
            st.pop();
        }
        idx +=1;
    }
    if (!st.empty()) return -1;
    return zeroed;
}


int solution(string s) {
    
    for (int i=0; i<s.size(); i++){
        int res = dy(s);
        if (res!=-1) return res;
        else rotate(s.begin(), s.begin()+1, s.end());
    }
    return 0;
    
}