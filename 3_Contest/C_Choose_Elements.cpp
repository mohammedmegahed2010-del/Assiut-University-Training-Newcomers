#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C

int main(){
    short int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    long long result = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    std::partial_sort(a.begin(), a.begin() + k, a.end(), std::greater<long long>());
    
    for (int i = 0; i < k; i++){
        if (a[i] > 0){
            result += a[i];
        } else{
            break;
        }
    } 
    
    cout << result;

    return 0;
}