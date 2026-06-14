#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U

int main(){
    long N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (long i = 0; i < N; i++){
        cin >> A[i];
    }

    vector<int> B(M);
    for (long i = 0; i < M; i++){
        cin >> B[i];
    }
    
    int B_pointer = 0;
    for (int A_pointer = 0; A_pointer < A.size(); A_pointer++){
        if (B_pointer < M && A[A_pointer] == B[B_pointer]){
            B_pointer++;
        } else if (B_pointer == M){
            break;
        }
    }

    if (B_pointer == M){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}