#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I

int swap_num(int num, int X, int Y){
    int new_num;
    if (num == X-1){
        new_num = Y-1;
    } else if (num == Y-1){
        new_num = X-1;
    } else{
        new_num = num;
    }
    return new_num;
}

void swap(vector<vector<int>> &A, short int X, short int Y){
    for (int row = 0; row < A.size(); row++){
        int new_row = swap_num(row, X, Y);
        for (int col = 0; col < A[0].size(); col++){
            int new_col = swap_num(col, X, Y); 
            cout << A[new_row][new_col] << " ";
        } cout << "\n";
    }
}

int main(){
    short int N, X, Y;
    cin >> N >> X >> Y;
    
    vector<vector<int>> A(N,vector<int>(N));

    for (int row = 0; row < N; row++){
        for (int col = 0; col < N; col++){
            cin >> A[row][col];
        }
    } swap(A, X, Y);

    return 0;
}