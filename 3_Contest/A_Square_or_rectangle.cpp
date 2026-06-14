#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A

int main(){
    short int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int w, h;
        cin >> w >> h;

        if (w==h){
            cout << "Square\n";
        } else{
            cout << "Rectangle\n";
        }
    }
    return 0;
}