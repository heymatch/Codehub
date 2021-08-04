#include <bits/stdc++.h>
using namespace std;

// not yet

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        int arr[100005] = {};
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        int maxi = -0xFFFFFFF;
        int ans = -0xFFFFFFF;
        for(int i = 0; i < n; ++i){
            ans = max(ans, maxi-arr[i]);
            maxi = max(maxi, arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}