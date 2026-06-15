#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L

vector<int> concatenate(vector<int> &A, vector<int> &B){
    
    vector<int>concatenated_Array = B;

    concatenated_Array.insert(concatenated_Array.end(), A.begin(), A.end());
    
    return concatenated_Array;
}

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    vector<int> B(N);
    for (int i = 0; i < N; i++){
        cin >> B[i];
    }
    
    vector<int> concatenated_Array = concatenate(A, B);
    for (int i = 0; i < concatenated_Array.size(); i++){
        cout << concatenated_Array[i] << " ";
    }

    return 0;
}