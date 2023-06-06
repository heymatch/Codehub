#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
    
        int M[100][100] = {};
        int Mr[100] = {};
        int Mc[100] = {};

        for(int i = 1; i <= N; ++i){
            cin >> Mr[i] >> Mc[i];
        }

        for(int i = 1; i < N; ++i){
            M[i][i+1] = Mr[i] * Mc[i] * Mc[i+1];
        }

        for(int len = 1; len <= N; ++len){
            for(int i = 1; i <= N; ++i){
                int j = i + len;
                if(j <= N){
                    int mini = 0xFFFFFFF;
                    for(int k = i; k < j; ++k){
                        mini = min(mini, M[i][k] + M[k+1][j] + (Mr[i] * Mc[k] * Mc[j]));
                    }
                    M[i][j] = mini;
                }
            }
        }
        

        // for(int i = 1; i <= N; ++i){
        //     for(int j = 1; j <= N; ++j){
        //         if(i < j){
        //             int mini = 0xFFFFFFF;
        //             for(int k = i; k < j; ++k){
        //                 mini = min(mini, M[i][k] + M[k+1][j] + (Mr[i] * Mc[k] * Mc[j]));
        //             }
        //             M[i][j] = mini;
        //         }
        //     }
        // }

        for(int i = 0; i <= N; ++i){
            for(int j = 0; j <= N; ++j){
                cout << setw(10) << M[i][j] << " ";
            }
            cout << endl;
        }

        cout << M[1][N] << endl;
    }

    return 0;
}