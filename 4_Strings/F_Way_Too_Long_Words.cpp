#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

int main(){

    short int n;
    cin >> n; 

    for (short int i = 0; i < n; i++){
        std::string str;
        cin >> str; 

        if (str.length() > 10){
            cout << str[0] << str.length()-2 << str[str.length()-1] << "\n";
        } else{
            cout << str << "\n";
        }
    }
    
    return 0;
}