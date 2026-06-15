#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

void print(int N){
    for (int i = 1; i <= N; i++){
        cout << i;
        if (i!=N){
            cout << " ";
        }
    }
}

int main(){
    int N;
    cin >> N;
    print(N);
}