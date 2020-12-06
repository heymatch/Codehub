#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        string str;
        cin >> str;
        int ans = 0;
        int cnt = 1;
        for(auto it: str){
            if(it == 'O'){
                ans += cnt;
                ++cnt;
            }
            else if(it == 'X'){
                cnt = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}