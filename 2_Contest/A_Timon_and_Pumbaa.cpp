#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A

int main(){
    long long a, b;
    cin >> a >> b;

    if (a-b >= 0){
        cout << a-b;
    } else {
        cout << 0;
    }
    return 0;
}