#include <bits/stdc++.h>
using namespace std;

int shrink(int v){
    if(v >= 10)
        return shrink(v / 10) + (v % 10);
    return v;
}

int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        while(n >= 10)
            n = shrink(n);
        cout << n << endl;
    }
    return 0;
}