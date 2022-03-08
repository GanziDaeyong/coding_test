#include <iostream>
#include <algorithm>
#include <vector>

#define PRINT(x) cout<<x<<"\n"
#define LB cout<<"\n"
#define MOD %10007
using namespace std;

long long int fib[1001]={0,1,2,3,5,8,13,21,};
int N;

int main() {
    cin>>N;
    for(int i=7; i<=N; i++) {
        fib[i] = (fib[i-1]MOD + fib[i-2]MOD)MOD;
    }
    cout<<fib[N];
    return 0;
}