#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R

int main(){
    int N; cin >> N;

    std::string S;
    cin >> S;

    int score = 0;

    for (int i = 0; i < S.length(); i++){
        if (S[i] == 'V'){
            score += 5;
        } else if (S[i] == 'W'){
            score += 2;
        } else if (i < S.size()-1){
            if (S[i] == 'X'){
                i++;
            } else if (S[i] == 'Y'){
                S += char(S[i+1]);
                i++;
            } else if ((S[i] == 'Z') && i+1 < S.length() &&
                       (S[i+1] == 'V' || S[i+1] == 'W')){
                        if (S[i+1] == 'V') score/=5;
                        else if (S[i+1] == 'W') score /= 2;
                        i++;
            }
        } 
    } cout << score;

    return 0;
}