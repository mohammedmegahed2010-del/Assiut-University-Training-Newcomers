#include <iostream>
#include <vector>
using namespace std;
 
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
 
int main(){
    int N;
    cin >> N;
    
    std::string vector_A;
    cin >> vector_A;
 
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        A[i] = vector_A[i] - '0';
    }
 
    int sum = 0;
    for (int j = 0; j < A.size(); j++){
        sum += A[j];
    } cout << sum;
    return 0;
}