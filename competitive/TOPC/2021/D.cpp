#include <bits/stdc++.h>
using namespace std;

int main(){
    double n; cin >> n;

    if(n == 2){
        cout << fixed << setprecision(6) << 1.0 <<endl;
        return 0;
    }
    
    //n -= 1;
    long long div = 1;
    double ans = 1.0/(n-1.0);
    double k = (n - 2.0)/(n-1.0);
    double b=1.0/(n-1.0);
    double f=k*b;
    double tmp=k*b;

    n -= 2.0;
    while(n!=1.0){
        tmp *= 1.0 / n;
        f += tmp;
        n--;
    }
    
    //for(long long i = 1; i <= n-2; ++i){
    //    div *= i;
    //    ans += k * 1/(static_cast<double>(div));
    //}
    
    ans = ans + f;
    cout << fixed << setprecision(6) << ans <<endl; 


    return 0;
}