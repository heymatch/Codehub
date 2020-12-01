#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    int cases = 0;
    while(T--){
        int l, w, h; cin >> l >> w >> h;
        if(l > 20 || w > 20 || h > 20){
            cout << "Case " << ++cases << ": " << "bad" << endl;
        }
        else{
            cout << "Case " << ++cases << ": " << "good" << endl;
        }
    }
    return 0;
}