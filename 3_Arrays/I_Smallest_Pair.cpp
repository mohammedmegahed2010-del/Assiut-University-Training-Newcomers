#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

int main(){
    int T, N;
    cin >> T;
    
    for (int t = 0; t < T; t++){
        cin >> N;
        vector<int> A(N);
        for (int n = 0; n < N; n++){
            cin >> A[n];
        }

        long long Smallest_Pair = A[0] + A[1] + (1-0);
        for (int i = 0; i < A.size(); i++){
            for (int j = A.size()-1; j > i; j--){
                long long pair = A[i] + A[j] + (j-i);
                if (pair < Smallest_Pair){
                    Smallest_Pair = pair;
                }
            }
        } cout << Smallest_Pair << "\n";
    }
    return 0;
}