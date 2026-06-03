#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

int main(){
    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    std::sort(A.begin(), A.end());

    for (int i = 0; i < Q; i++){
        int start = 0, end = N-1;
        int X;

        cin >> X;
        bool found = false;

        while(start <= end){
            int mid = (start + end) / 2;

            if (A[mid] > X){
                end = mid - 1;
            } else if (A[mid] < X){
                start = mid + 1;
            } else {
                found = true;
                cout << "found\n"; 
                break;
            } 
        } if (!found) cout << "not found\n";
    } return 0;
}