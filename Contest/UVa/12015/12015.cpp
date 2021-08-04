#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    int cases = 0;
    while(T--){
        vector< pair<string, int> > V;
        for(int i = 0; i < 10; ++i){
            string uri;
            int s;
            cin >> uri >> s;
            V.push_back(make_pair(uri, s));
        }

        vector< pair<string, int> > ans;
        int maxi = 0;
        for(auto it: V){
            if(it.second > maxi){
                maxi = it.second;
                ans.clear();
                ans.push_back(it);
            }
            else if(it.second == maxi){
                ans.push_back(it);
            }
        }

        cout << "Case #" << ++cases << ":" << endl;
        for(auto it: ans){
            cout << it.first << endl;
        }
    }
    return 0;
}