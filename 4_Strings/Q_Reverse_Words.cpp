#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

int main(){
    std::string S;
    getline(cin, S);

    for (int i = 0; i < S.length(); i++){
        if (S[i] == ' ' || i == S.length()-1){
            int start = i-1; if (i == S.length()-1) start = i;
            for (int j = start; j >= 0 && S[j] != ' '; j--){
                cout << S[j];
            } if (i != S.length()-1) cout << " ";
        }
    }

    return 0;
}