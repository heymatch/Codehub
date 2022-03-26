#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T; cin >> T;
    
    while(T--){
        unsigned long long n; cin >> n;
        unsigned long long ans = (-1 + sqrt(1+4*2*n)) / 2;
        cout << ans << endl;
    }
    
    return 0;
}