#include <bits/stdc++.h>
using namespace std;

long long func(long long x, long long y){
    return (x + y) * (x + y + 1) / 2 + x;
}

int main(){
    int n; cin >> n;
    int cases = 0;
    while(n--){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        cout << "Case " << ++cases << ": " << func(x2, y2) - func(x1, y1) << endl;
    }
    return 0;
}