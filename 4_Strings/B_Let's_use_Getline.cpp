#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

int main(){
    std::string S;
    getline(cin, S);

    for (int i = 0; i < S.length(); i++){
        if (S[i] == '\\'){
            break;
        } else {
            cout << S[i];
        }
    }
    
    return 0;
}