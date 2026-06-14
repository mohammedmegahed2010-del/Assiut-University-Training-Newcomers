#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    int count = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    } sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++){
        if (binary_search(a.begin(), a.end(), a[i]+1)){
            count++;
        }
    } cout << count;

    return 0;
}