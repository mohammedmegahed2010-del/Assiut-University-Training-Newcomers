#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

int add(int X, int Y){
    return X+Y;
}

int main(){
    int X, Y;
    cin >> X >> Y;
    cout << add(X, Y);
}