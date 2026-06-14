#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

int main(){
    long long N, Q;
    cin >> N >> Q;

    vector<long long> prefix(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> prefix[i];
        prefix[i] += prefix[i-1];
    }

    for (int i = 0; i < Q; i++){
        long long L, R;
        cin >> L >> R;

        cout << prefix[R] - prefix[L - 1] << "\n";
    }

    return 0;
}