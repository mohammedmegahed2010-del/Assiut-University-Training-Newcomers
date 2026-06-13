#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

int main(){
    std::string S;
    getline(cin, S);

    for (int i = 0; i < S.length(); i++){
        if (i < S.length()-4 &&
            S[i] == 'E'   && S[i+1] == 'G' && 
            S[i+2] == 'Y' && S[i+3] == 'P' && 
            S[i+4] == 'T'){
                cout << " ";
                i += 4;
            } else {
            cout << S[i];
        }
    }

    return 0;
}