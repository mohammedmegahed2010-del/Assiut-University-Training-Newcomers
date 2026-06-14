#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N

int main(){
    short int N;
    cin >> N;

    vector<long long> fibonacci = {0, 1};

    for (int i = 2; fibonacci.size() < 50; i++){
        fibonacci.push_back(fibonacci[i-1] + fibonacci[i-2]);
    }

    cout << fibonacci[N-1];
    
}