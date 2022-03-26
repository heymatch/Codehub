#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, a, b, c, d, n;
    while(cin >> p >> a >> b >> c >> d >> n){
        double price = 0;
        double maxi = 0;
        double ans = 0;
        for(int k = 1; k <= n; ++k){
            price = (double)p * (sin((double)a * k + b) + cos((double)c * k + d) + 2);
            maxi = max(maxi, price);
            ans = max(ans, fabs(maxi-price));
        }
        cout << fixed << setprecision(6);
        cout << ans << endl;
    }
    return 0;
}