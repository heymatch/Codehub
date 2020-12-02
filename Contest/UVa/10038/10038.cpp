#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        set<int> S;
        int prev = 0;
        bool succ = true;
        for(int i = 0; i < n; ++i){
            int cur; cin >> cur;
            if(i == 0){
                prev = cur;
                continue;
            }
            S.insert(abs(prev-cur));
            prev = cur;
        }
        for(int i = 1; i < n; ++i){
            if(!S.count(i))
                succ = false;
        }
        if(succ)
            cout << "Jolly" << endl;
        else 
            cout << "Not jolly" << endl;
    }
    return 0;
}