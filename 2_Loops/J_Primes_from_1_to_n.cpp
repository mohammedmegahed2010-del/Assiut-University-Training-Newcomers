#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

int main(){
    short int N;
    cin >> N;
    

    for (int i = 2; i <= N; i++){
        bool prime = true;

        if (i==2) {
            cout << i << " ";
            continue;
        }

        else if (i > 2){
            for (int j = i-1; j > 1; j--){
                if (i%j == 0){
                    prime = false;
                }
            }
        } if (prime) cout << i << " ";
    }
}