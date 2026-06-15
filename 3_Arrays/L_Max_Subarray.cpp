#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L

int main(){
    short int N, T;

    cin >> T;
    for (short int t = 0; t < T; t++){
        cin >> N;
    
        vector<int> A(N);
        for (short int i = 0; i < N; i++){
            cin >> A[i];
        } 

        for (short int i = 0; i < A.size(); i++){
            int max = A[i];
            
            for (short int j = i; j < A.size(); j++){
                if (A[j] > max){
                    max = A[j];
                } 
                cout << max << " ";
            } 
        } if (t < T-1) cout << '\n';
    }
    return 0;
}