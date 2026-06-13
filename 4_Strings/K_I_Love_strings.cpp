#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

int main(){
    short int N;
    cin >> N;
    
    std::string S, T;
    
    for (int i = 0; i < N; i++){
        cin >> S >> T;

        for (int j = 0; j < S.length() || j < T.length(); j++){
            if (j < S.length()){
                cout << S[i];
            } if (j < T.length()){
                cout << T[i];
            }
        } cout << "\n";
    }
}