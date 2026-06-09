#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

int main(){
    std::string S, reversed_S;
    cin >> S;

    for (int i = S.length()-1; i >= 0; i--){
        reversed_S += S[i];
    }

    cout << (S == reversed_S ? "YES" : "NO");
    return 0;
}