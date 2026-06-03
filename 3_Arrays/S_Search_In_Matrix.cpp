#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

int main(){
    short int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));
    
    for (short int row = 0; row < N; row++){
        for(short int col = 0; col < M; col++){
            cin >> A[row][col];
        }
    }

    int X;
    cin >> X;

    for (short int row = 0; row < N; row++){
        for (short int col = 0; col < M; col++){
            if (A[row][col] == X){
                cout << "will not take number";
                return 0;
            }
        }
    } cout << "will take number";
    
    return 0;
}