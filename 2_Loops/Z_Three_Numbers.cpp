#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

int main(){
    int K, S;
    cin >> K >> S;

    int count = 0;

    for (int X = 0; X <= K; X++){
        for (int Y = 0; Y <= K; Y++){
            int Z = S-X-Y;
            if (Z <= K && Z >= 0){
                count++;
            }
        }
    } cout << count;
    return 0;
}