#include <iostream>
#include <cmath>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D

bool is_prime(long long N){
    if (N <= 1){
        return false;
    } else if (N == 2){
        return true;
    } else {
        for (long long i = 2; i*i <= N; i++){
            if (N % i == 0){
                return false;
            }
        }
    } return true;
}

int main(){
    short int t;
    cin >> t;
    
    while (t--){
        long long N;
        cin >> N;
        cout << (is_prime(N) ? "YES" : "NO");
        if (t >= 1) cout << "\n";
    } 
    
    return 0;
}