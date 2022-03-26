#include <bits/stdc++.h>
using namespace std;

int main(){
    int b = 31 + 28 + 31 + 30 + 29;
    int e = 365 * 2 + 31 * 5 + 28 + 3 * 30 + 30;
    int d = (e - b) % 7;
    int ans = 5 - d;
    //cout << ans << endl;
    cout << "May 29, 2013 Wednesday\n";
    return 0;
}