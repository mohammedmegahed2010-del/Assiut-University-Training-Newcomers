#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C

int main(){
    int K, N, A;
    cin >> N >> K;

    int min = INT_MAX;
    
    for (int i = 0; i < N; i++) {
        cin >> A; 

        if (A < min){
            min = A;
        } 

        if ((i+1)%K==0 || !(i+1 < N)){
            cout << min << " ";
            min = INT_MAX;
        }
    }
    return 0;
}