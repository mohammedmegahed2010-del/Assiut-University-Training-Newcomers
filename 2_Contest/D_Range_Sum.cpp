#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

// Sum(1, n) = (n * (n + 1) ) / 2

// Sum(1, L) = (L * (L + 1) ) / 2
// Sum(1, R) = (R * (R + 1) ) / 2

// To get the sum from L to R: Remove all numbers before L
// Sum(L, R) = (Sum(1, R) - Sum(1, L - 1))

int main(){
    int T; long long R, L;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> L >> R;
        
        long long f_1_t_Min = ((min(L, R)-1) * min(L, R))/2;
        long long f_1_t_Max = (max(L, R) * (max(L, R) + 1))/2;

        cout << f_1_t_Max-f_1_t_Min << "\n";
    }

    return 0;
}