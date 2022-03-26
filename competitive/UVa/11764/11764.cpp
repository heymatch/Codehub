#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    int cases = 0;
    while(T--){
        int N; cin >> N;
        int cur = -1, prev = -1;
        int high = 0, low = 0;
        while(N--){
            cin >> cur;
            if(prev == -1){
                prev = cur;
            }
            else if(cur > prev)
                ++high;
            else if(cur < prev)
                ++low;

            prev = cur;
        }

        cout << "Case " << ++cases << ": " << high << " " << low << endl;
    }
    return 0;
}