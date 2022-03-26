#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> cumsum;
    cumsum.reserve(20005);
    int sum = 0;
    for(int i = 1; sum <= 100000000; ++i){
        sum += i;
        cumsum.push_back(sum);
    }

    int s;
    while(cin >> s){
        if(!s) break;
        for(size_t i = 0; i < cumsum.size(); ++i){
            if(s < cumsum[i]){
                cout << cumsum[i] - s << " " << i+1 << endl;
                break;
            }
        }
    }
    

    return 0;
}