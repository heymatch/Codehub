#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    int cases = 0;
    while(T--){
        int n; cin >> n;
        int maxi = 0;
        while(n--){
            int v; cin >> v;
            maxi = max(maxi, v);
        }

        cout << "Case " << ++cases << ": " << maxi << endl;
    }
    return 0;
}