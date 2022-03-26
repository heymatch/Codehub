#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;

    // vector<unsigned long long> TB(1000005);

    // TB[1] = 1;
    // TB[2] = 1;

    // for(unsigned long long i = 3; i < 1000005; ++i){
    //     unsigned long long limit = sqrt(i);
    //     TB[i] = 1;
    //     for(unsigned long long j = 2; j <= limit; ++j){
    //         if(i % j == 0){
    //             unsigned long long idj = i / j;
    //             TB[i] += j;
    //             if(idj != j)
    //                 TB[i] += idj;
    //             // limit = min(limit, idj);
    //             // cout << TB[i] << endl;
    //             // cout << j << endl;
    //             // cout << i/j << endl;
    //             if(TB[i] >= i)
    //                 break;
    //         }
            
    //     }
    // }

    while(T--){
        unsigned long long n; scanf("%llu", &n);

        
        unsigned long long s = 0;
        for(unsigned long long j = 2; j <= sqrt(n); ++j){
            if(n % j == 0){
                unsigned long long idj = n / j;
                s += j;
                if(idj != j)
                    s += idj;
                // limit = min(limit, idj);
                // cout << TB[i] << endl;
                // cout << j << endl;
                // cout << i/j << endl;
                if(s >= n)
                    break;
            }
            
        }

        if(n == 1)
            s = 0;
        else if(n == 2)
            s = 1;

        // clog << n <<endl;
        // clog << s <<endl;

        if(s > n){
            printf("abundant\n");
        }
        else if(s == n){
            printf("perfect\n");
        }
        else{
            printf("deficient\n");
        }

    }


    return 0;
}