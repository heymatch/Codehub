#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int m, n; cin >> m >> n;
        vector<int> A(m), B(n);
        set<int> U, I;
        
        for(int i = 0; i < m; ++i){
            int e; cin >> e;
            U.insert(e);
        }

        for(int i = 0; i < n; ++i){
            int e; cin >> e;
            if(U.count(e)){
                I.insert(e);
            }
            U.insert(e);
        }

        if(2 * I.size() > U.size()){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }

    }

    return 0;
}