#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

int main(){
    short int N;
    cin >> N; 
     
    if (N%10 == 0 || (N/10) % (N%10) == 0 || (N%10) % (N/10) == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}