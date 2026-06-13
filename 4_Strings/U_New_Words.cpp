#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U

int main(){
    std::string S;
    cin >> S;
    
    int egypt[5] = {0, 0, 0, 0, 0}, num=INT_MAX;

    for (int i = 0; i < S.length(); i++){
        char chr = tolower(S[i]);
        for (int j = 0; j < 5; j++){
            if (chr == "egypt"[j]){
                egypt[j]++;
            }
        }
    }
    
    for (int i = 0; i < 5; i++){
        if (egypt[i] < num){
            num = egypt[i];
        }
    } cout << num;

    return 0;
}