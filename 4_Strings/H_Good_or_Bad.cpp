#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

int main(){
    std::string S;
    short int T;
    
    cin >> T;
    for (short int i = 0; i < T; i++){
        cin >> S;
        for (int i = 0; i < S.length()-2; i++){
            if ((S[i] == '1' && S[i+1] == '0' && S[i+2] == '1') ||
                (S[i] == '0' && S[i+1] == '1' && S[i+2] == '0') ){
                cout << "Good\n"; 
                break;
            } if (i == S.length()-3) cout << "Bad\n";
        }
    }

    return 0;
}