#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

void max_min(std::vector<int> X){
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < X.size(); i++){
        if (X[i] > max){
            max = X[i];
        } if (X[i] < min){
            min = X[i];
        }
    } 
    cout << min << " " << max;
}

int main(){
    int N;
    cin >> N;

    vector<int> X(N);
    for (int i = 0; i < N; i++){
        cin >> X[i];
    }

    max_min(X);
    return 0;
}