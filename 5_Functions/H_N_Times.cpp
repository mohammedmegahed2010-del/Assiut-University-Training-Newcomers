#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

void repeat(short int N, char chr){
    for (short int i = 0; i < N; i++){
        cout << chr << " ";
    }
}
int main(){
    short int T;
    cin >> T;

    while (T--){
        short int N;
        cin >> N;

        char C;
        cin >> C;

        repeat(N, C);
        
        cout << "\n";
    }
    return 0;
}