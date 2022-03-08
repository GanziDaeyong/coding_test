#include <iostream>
using namespace std;
// #define PRINT(x) cout<<x<<"\n"

long long int A,B,C;

long long int mul(long long int a, long long int b, long long int c) {
    if (b==0) return 1;
    else if (b==1) return a%c;

    if (b%2==0) {
        long long int half = (mul(a, b/2, c))%c;
        return (half*half)%c;
    }
    else {
        long long int res = ((mul(a,b-1,c))%c) * a;
        return res%c;
    }
}

int main(){
    cin>>A>>B>>C;
    long long int res = mul(A,B,C);
    cout<<res;
    return 0;
}