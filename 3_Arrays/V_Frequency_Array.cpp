#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> frequency(M+1, 0);
    for (int i = 0; i < N; i++){
        int num;
        cin >> num;
        frequency[num]++;
    }

    for (int i = 1; i <= M; i++){
        cout << frequency[i] << "\n";
    }

    return 0;
}