#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X

int main(){
    short int N, M;
    cin >> N >> M;

    vector<vector<char>> A(N, vector<char>(M));
    for (int row = 0; row < N; row++){
        for (int col = 0; col < M; col++){
            cin >> A[row][col];
        }
    }

    short int X, Y;
    cin >> X >> Y;
    X--; Y--;

    short int d_row[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    short int d_col[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (short int i = 0; i < 8; i++){

        if ((X+d_row[i] >= 0 && X+d_row[i] < A.size()) &&
        (Y+d_col[i] >= 0 && Y+d_col[i] < A[0].size())){

            if (A[ X+d_row[i] ][ Y+d_col[i]] != 'x'){
                cout << "no";
                return 0;
            }

        }
    } cout << "yes";

    return 0;
}