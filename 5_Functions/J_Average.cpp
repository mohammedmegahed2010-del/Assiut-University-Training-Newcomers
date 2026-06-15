#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J

void average(vector<double> &A){
    double sum = 0;
    for (int i = 0; i < A.size(); i++){
        sum += A[i];
    } cout << fixed << setprecision(6) << sum / A.size();
}

int main(){
    int N;
    cin >> N;
    
    vector<double> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    average(A);
    return 0; 
}