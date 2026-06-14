#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

int main(){
    short int N;
    cin >> N;

    vector<vector<short int>> A(N, vector<short int>(N));
    for (short int row = 0; row < N; row++){
        for (short int col = 0; col < N; col++){
            cin >> A[row][col];
        }
    }
    
    int main_diagonal = 0, secondary_diagonal = 0;
    short int col_main = 0, col_sec = N-1;

    for (short int row = 0; row < N; row++){
        main_diagonal      += A[row][col_main];
        secondary_diagonal += A[row][col_sec];
        col_main++; col_sec--;
    }

    int difference = main_diagonal-secondary_diagonal;
    cout << (difference < 0 ? difference*-1 : difference);

    return 0;
}