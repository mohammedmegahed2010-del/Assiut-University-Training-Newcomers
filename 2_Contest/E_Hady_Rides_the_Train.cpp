#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E

int main(){
    long long d;
    cin >> d;
    
    long long row = d/4, col=d%4;
    if (row%2!=0){
        col = 3 - col;
    } cout << row << " " << col;

    return 0;
}