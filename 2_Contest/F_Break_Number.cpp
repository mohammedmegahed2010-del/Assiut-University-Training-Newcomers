#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F

int main(){
    int N;
    cin >> N;
    
    int max = 0;

    for (int i = 0; i < N; i++){
        long long number = 1;
        int time = 0;
        
        cin >> number;

        while (number % 2 == 0 && number != 0){
            number /= 2;
            time++;
        } if (time > max) max = time;
    } cout << max;

    return 0;
}