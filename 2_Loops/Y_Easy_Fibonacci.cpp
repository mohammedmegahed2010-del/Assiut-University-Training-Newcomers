#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

int main(){
    int N;
    cin >> N;

    if (N==1){
        cout << 0;
        return 0;
    } else if (N==2){
        cout << 0 << " " << 1;
        return 0;
    } else{
        long long last = 1, last_last = 0;
        cout << last_last << " " << last << " ";
    
        for (int i = 2; i < N; i++){
            cout << last_last + last << " ";
            long long new_num = last_last + last;
            last_last = last;
            last = new_num;
        }
    }
    return 0;
}