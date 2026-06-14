#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F

int main(){
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int printed = 0;
    int index = 0;

    while (printed < a.size()){
        cout << a[index] << " ";
        printed++;
        index++;
        if (a.size() > printed){
            cout << a[a.size()-index] << " ";
            printed++;
        }
    }

    return 0;
}