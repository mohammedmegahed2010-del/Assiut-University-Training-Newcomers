#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103

int main(){
    short int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int num_even = 0, num_odd = 0, num_operation;

        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] % 2 == 0){
                num_even++;
            } else{
                num_odd++;
            }
        }
        
        if (a.size() % 2 != 0){
            num_operation = -1;
        } else if (num_even > num_odd){
            num_operation = num_even-(a.size()/2);
        } else if (num_odd > num_even){
            num_operation = num_odd-(a.size()/2);
        }
        
        cout << num_operation << "\n";
    }
    return 0;
}