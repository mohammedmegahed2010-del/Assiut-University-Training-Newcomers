#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

long long power(int base, int exp){
    long long result = 1;
    for (int i = 0; i < exp; i++){
        result *= base;
    } 
    return result;
}

int main(){
    int X; short int N;
    cin >> X >> N;

    long long result = 0;
    for (int i = 0; i <= N; i += 2){
        if (i == 0){
            result += (power(X, i) - 1);
        }
        else {
            result += power(X, i);
        }
    }
    cout << result;
    return 0;
} 