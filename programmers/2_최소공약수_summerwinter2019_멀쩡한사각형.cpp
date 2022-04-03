using namespace std;


int gcd(int a, int b) { 
    int mod = a % b; 
    while (mod > 0) {
        a = b; 
        b = mod; 
        mod = a % b; 
    } 
    return b; 
}


long long solution(int w,int h) {
    
    int a = w < h ? w : h;
    int b = w < h ? h : w;
    
    int gcdV = gcd(a, b);
    a/=gcdV; b/=gcdV;
    long long area;
    if (b%a==0) area = b;
    else area = b + a - 1;
    area *= gcdV;
    
    long long total = (long long)w* (long long)h;
    total -= area;

    return total;
}