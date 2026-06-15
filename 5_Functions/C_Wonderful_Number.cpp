#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C

bool isodd(long long N){
    return N%2!=0;
}

bool is_binary_palindrome(long long N){
    std::string binary="", reversed_binary="";
    while (N != 0){
        binary += N%2;
        N/=2;
    }

    for (int i = binary.length()-1; i >= 0; i--){
        reversed_binary += binary[i];
    }

    return binary == reversed_binary;
}

int main(){
    long long N;
    cin >> N;
    
    cout << (isodd(N) && is_binary_palindrome(N) ? "YES" : "NO");
    return 0;
}