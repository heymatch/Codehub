#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        
        int l = 0, r = 0;
        bool balanced = false;
        for(int i = 0; i < n; ++i){
            int a = 0, b = 0;
            for(int j = i; j < n; ++j){
                if(s[j] == 'a'){
                    ++a;
                }
                else if(s[j] == 'b'){
                    ++b;
                }

                if(a == b){
                    l = i + 1, r = j + 1;
                    balanced = true;
                    break;
                }
            }
            if(balanced)
                break;
        }

        if(balanced){
            cout << l << " " << r << endl;
        }
        else{
            cout << -1 << " " << -1 << endl;
        }

    }
    
    return 0;
}