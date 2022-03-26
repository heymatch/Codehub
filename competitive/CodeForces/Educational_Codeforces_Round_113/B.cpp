// ! not accept

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        char ans[205][205] = {};
        char player[205][205] = {};

        bool exist_ans = true;
        for(int i = 0; i < n; ++i){
            bool win = false;
            for(int j = 0; j < n; ++j){
                if(ans[i][j] == 0){
                    if(i == j){
                        ans[i][j] = 'X';
                    }
                    else if(s[i] == '1'){
                        ans[i][j] = ans[j][i] = '=';
                    }
                    else if(s[i] == '2'){
                        if(s[j] == '1'){
                            ans[i][j] = ans[j][i] = '=';
                        }
                        else if(s[j] == '2'){
                            if(!win){
                                win = true;
                                ans[i][j] = '+';
                                ans[j][i] = '-';
                            }
                        }
                    }
                }
            }

            if(s[i] == '2' && !win){
                cout << "NO" << endl;
                exist_ans = false;
                break;
            }
        }

        if(exist_ans){
            cout << "YES" << endl;
            for(int i = 0; i < n; ++i){
                for(int j = 0; j < n; ++j){
                    cout << ans[i][j];
                }
                cout << endl;
            }
        }

    }
    
    return 0;
}