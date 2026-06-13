#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

int main(){
    int N;
    cin >> N;

    int frequency[26] = {0};
    char chr;

    for (int c = 0; c < N; c++){
        cin >> chr;
        frequency[chr-'a']++;
    }
    
    for (int i = 0; i < 26; i++){
        for (int j = 0; j < frequency[i]; j++){
            cout << char(i+'a');
        }
    }
    
    return 0;
}