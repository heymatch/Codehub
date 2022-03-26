#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string keyboard, input;
        cin >> keyboard >> input;

        size_t dist = 0;
        for(size_t i = 0; i < input.length() - 1; ++i){
            size_t a = keyboard.find(input[i]), b = keyboard.find(input[i+1]);
            dist += a > b ? a - b : b - a;
        }

        cout << dist << endl;
    }
    return 0;
}