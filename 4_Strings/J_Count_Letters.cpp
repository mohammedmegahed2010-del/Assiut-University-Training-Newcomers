#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

int main(){
    std::string S;
    cin >> S;
    
    for (int i = 'a'; i <= 'z'; i++){
        int count = 0; bool found = false;
        for (int j = 0; j < S.length(); j++){
            if (tolower(S[j]) == i){
                found = true;
                count++;
            }
        } if (found) cout << char(i) << " : " << count << "\n";
    }

    return 0;
}