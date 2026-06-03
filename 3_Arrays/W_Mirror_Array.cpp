#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

int main(){
    short int N, M;
    cin >> N >> M;

    vector<vector<long>> A(N, vector<long>(M));
    for (short int row = 0; row < N; row++){
        for (short int col = 0; col < M; col++){
            cin >> A[row][col];
        }
    }

    for (short int row = 0; row < N; row++){
        for (short int col = M-1; col >= 0; col--){
            cout << A[row][col] << " ";
        } cout << "\n";
    }
    
    return 0;
}