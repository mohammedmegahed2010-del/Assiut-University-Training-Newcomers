#include <iostream>
using namespace std;

// Prblem_Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

int main() {
    long N;
    cin >> N;

    std::string str_1 = to_string(N);
    std::string str_2 = "";
    
    for (int i = str_1.length()-1; i >= 0; i--){
        str_2 += str_1[i];
    }

    bool leading_zero = true;

    for (int i = 0; i < str_2.length(); i++){
        if ((str_2[i] == '0') && (leading_zero)){
            continue;
        } leading_zero = false;
        cout << str_2[i];
    }

    cout << (str_1==str_2 ? "\nYES":"\nNO");
    return 0;
}