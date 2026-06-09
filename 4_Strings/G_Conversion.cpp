#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

int main(){
    std::string S;
    cin >> S;

    for (int i = 0; i < S.length(); i++){
        char C;
        if (S[i] == ',') C = ' ';
        else if (islower(S[i])) C = toupper(S[i]);
        else if (isupper(S[i])) C = tolower(S[i]);
        cout << C;
    }

    return 0;
}