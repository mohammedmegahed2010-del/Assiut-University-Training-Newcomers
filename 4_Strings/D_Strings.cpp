#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

int main(){
    std::string A, B;
    cin >> A >> B;

    cout << A.length() << " " << B.length() << "\n";
    
    cout << A+B << "\n";

    char temp = A[0]; A[0] = B[0];  B[0] = temp;
    cout << A << " " << B;

    return 0;
}