#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Probelm Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q

int main(){
    int T;
    cin >> T;

    for(int t = 0; t < T; t++){
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++){
            cin >> A[i];
        }
        
        int count = 0;
        for (int i = 0; i < A.size(); i++){
            int min = A[i];
            for (int j = i; j < A.size() && A[j] >= min; j++){
                count++;
                min = A[j];
            }
        } cout << count;

        if (t < T-1) cout << "\n";
    }

    return 0;
}