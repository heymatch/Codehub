#include <bits/stdc++.h>
using namespace std;

struct Country{
    int g, s, c;
    string n;

    bool operator<(const Country &right) const{
        if(g == right.g){
            if(s == right.s){
                return c < right.c;
            }
            return s < right.s;
        }
        return g < right.g;
    }
};

int main(){
    int T; cin >> T;
    vector<Country> v(T);
    for(int i = 0; i < T; ++i){
        
        int g, s, c; 
        string n;

        cin >> g >> s >> c;
        cin.ignore();
        getline(cin, n);
        v[i].g = g;
        v[i].s = s;
        v[i].c = c;
        v[i].n = n;

    }

    sort(v.begin(), v.end());

    cout << v[T-1].n << endl;

    return 0;
}