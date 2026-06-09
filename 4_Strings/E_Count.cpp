#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

int main(){
    std::string S;
    cin >> S;

    int SUM = 0;
    for (char C : S){
        SUM += C-'0';
    } cout << SUM;
    
    return 0;
}