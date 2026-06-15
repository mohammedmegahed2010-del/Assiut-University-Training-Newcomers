#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M

int count_distinct_numbers(vector<int> &A){
    
    sort(A.begin(), A.end());
    int count_distinct_numbers=0;

    for (int i = 0; i < A.size(); i++){
        if (i==0 || (i > 0 && A[i-1] != A[i])){
            count_distinct_numbers++;
        }
    }

    return count_distinct_numbers;
}

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    cout << count_distinct_numbers(A);
    return 0;
}