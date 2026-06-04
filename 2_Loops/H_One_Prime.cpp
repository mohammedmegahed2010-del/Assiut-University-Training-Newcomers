#include <iostream>
using namespace std;

// Prblem_Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

int main(){
    int N;
    cin >> N;

    if (N < 2) {
        cout << "NO";
        return 0;
    }
    
    for (int i = N-1; i > 1; i--){
        if (N%i == 0){
            cout << "NO";
            return 0;
        }
    } cout << "YES";
    return 0;
}