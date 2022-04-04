#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s){    
    
    stack<char> st;
    st.push(s[0]);
    
    if (s.size()==1) return 0;
    
    int i=1;
    while(i<s.size()){
        if (!st.empty() && s[i]==st.top()) st.pop();
        else st.push(s[i]);
        i+=1;
    }
    return st.empty();
}