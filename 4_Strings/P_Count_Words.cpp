#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

int main(){
    std::string S;
    getline(cin, S);
    
    int count = 0;
    
    for (int i = 0; i < S.length(); i++){
        if (isalpha(S[i]) && (i==0 || (i>0 && !isalpha(S[i-1])))){
            count++;
        }
    } cout << count;

    return 0;
}