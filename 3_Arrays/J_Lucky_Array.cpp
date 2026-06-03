#include <iostream>
#include <vector>
using namespace std;
 
// Probelm Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
 
int main(){
    short int N;
    cin >> N;
    
    vector<int> A(N);
    for (short int i = 0; i < N; i++){
        cin >> A[i];
    }
 
    int min = A[0];
    for (short int j = 0; j < A.size(); j++){
        if (A[j] < min){
            min = A[j];
        }
    }
 
    short int count_min = 0;
    for (short int k = 0; k < A.size(); k++){
        if (A[k] == min){
            count_min++;
        }
    }
 
    cout << (count_min % 2 != 0 ? "Lucky" : "Unlucky");
    return 0;
}