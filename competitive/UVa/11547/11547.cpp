#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        cout << abs((((n * 63 + 7492) * 5 - 498) / 10) % 10) << endl; 
    }

    return 0;
}