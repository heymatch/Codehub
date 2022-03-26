#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    bool flag = true;
    while(cin >> a >> b){
    for(int i = 0; i < a.size(); ++i)
        if(isalpha(a[i]))
            flag = false;

    for(int i = 0; i < b.size(); ++i)
        if(isalpha(b[i]))
            flag = false;

    if(flag)
        cout << stoi(a) - stoi(b) << endl;
    else
        cout << "NaN" << endl;
    }


    return 0;
}