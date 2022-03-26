#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> M;
    M["HELLO"] = "ENGLISH";
    M["HOLA"] = "SPANISH";
    M["HALLO"] = "GERMAN";
    M["BONJOUR"] = "FRENCH";
    M["CIAO"] = "ITALIAN";
    M["ZDRAVSTVUJTE"] = "RUSSIAN";

    int cases = 0;
    string str;
    while(cin >> str){
        if(str == "#")break;
        if(!M.count(str)){
            cout << "Case " << ++cases << ": " << "UNKNOWN" << endl;
        }
        else 
            cout << "Case " << ++cases << ": " << M[str] << endl;
    }
    return 0;
}