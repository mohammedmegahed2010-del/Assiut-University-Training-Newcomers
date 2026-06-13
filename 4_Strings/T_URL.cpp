#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T

int main(){
    char c;
    while (true){
        cin >> c;
        if (c == '?'){
            break;
        }
    }

    std::string S;
    cin >> S;

    for (int i = 0; i < S.length(); i++){
        if (S[i] == '='){
            cout << ": ";
        } else if (S[i] == '&'){
            cout << "\n";
            continue;
        } else {
            cout << S[i];
        }
    }

    return 0;
}