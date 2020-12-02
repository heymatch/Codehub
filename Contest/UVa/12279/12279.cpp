#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int cases = 0;
    while(cin >> N){
        if(N == 0)break;
        int cnt = 0;
        while(N--){
            int v; cin >> v;
            if(v)
                ++cnt;
            else 
                --cnt;
        }
        cout << "Case " << ++cases << ": " << cnt << endl;
    }
    return 0;
}