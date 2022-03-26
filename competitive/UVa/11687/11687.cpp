#include <bits/stdc++.h>
using namespace std;

int func(string str){
    if(str == "1")
        return 1;
    return 1 + func(to_string(str.length()));
}

int main(){
    string str;
    while(cin >> str){
        if(str == "END")break;
        int ans = func(str);
        cout << ans << endl;
    }
    return 0;
}