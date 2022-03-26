#include <bits/stdc++.h>
using namespace std;

int main(){
    string in;
    int cases = 0;
    while(cin >> in){
        cout << "Case " << ++cases << ":" << endl;
        int N; cin >> N;
        for(int n = 0; n < N; ++n){
            int i, j; cin >> i >> j;
            bool ok = true;
            
            for(int k = min(i, j); k < max(i, j); ++k){
                if(in[k] != in[k+1]){
                    ok = false;
                    break;
                }
            } 

            if(ok){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}