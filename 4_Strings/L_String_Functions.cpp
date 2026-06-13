#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    string S;
    cin >> S;

    string query;
    int l, r, pos; 
    char x;

    for (int i = 0; i < Q; i++) {
        cin >> query;

        if (query == "pop_back") {
            S.pop_back();
        } 
        else if (query == "front") {
            cout << S.front() << "\n";
        } 
        else if (query == "back") {
            cout << S.back() << "\n";
        } 
        else if (query == "sort") {
            cin >> l >> r;
            sort(S.begin() + min(l, r) - 1, S.begin() + max(l, r));
        } 
        else if (query == "reverse") {
            cin >> l >> r;
            reverse(S.begin() + min(l, r) - 1, S.begin() + max(l, r));
        } 
        else if (query == "print") {
            cin >> pos;
            cout << S[pos - 1] << "\n";
        } 
        else if (query == "substr") {
            cin >> l >> r;
            for (int j = min(l, r)-1; j < max(l, r); j++){
                cout << S[j];
            } cout << "\n";
        } 
        else if (query == "push_back") {
            cin >> x;
            S.push_back(x);
        }
    }
    return 0;
}