#include <bits/stdc++.h>
using namespace std;

int shrink(int v){
    if(v >= 10)
        return shrink(v / 10) + (v % 10);
    return v;
}

int main(){
    string str1;
    string str2;
    while(getline(cin, str1)){
        getline(cin, str2);
        for(int i = 0; i < str1.length(); ++i){
            str1[i] = tolower(str1[i]);
        }
        for(int i = 0; i < str2.length(); ++i){
            str2[i] = tolower(str2[i]);
        }
        int v1 = 0, v2 = 0;
        for(int i = 0; i < str1.length(); ++i){
            if(isalpha(str1[i]))
                v1 += 1 + (str1[i] - 'a');
        }
        for(int i = 0; i < str2.length(); ++i){
            if(isalpha(str2[i]))
                v2 += 1 + (str2[i] - 'a');
        }

        while(v1 >= 10)
            v1 = shrink(v1);
        while(v2 >= 10)
            v2 = shrink(v2);

        cout << fixed << setprecision(2);
        if(v1 > v2)
            cout << 100.0 * ((double)v2 / (double)v1) << " %" << endl;
        else 
            cout << 100.0 * ((double)v1 / (double)v2) << " %" << endl;
    }
    return 0;
}