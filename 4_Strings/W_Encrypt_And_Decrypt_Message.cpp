#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W

int main(){
    short int Q;
    cin >> Q;

    std::string S;
    cin >> S;

    std::string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    std::string org = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    
    std::string new_S;

    if (Q == 1){
        for (int i = 0; i < S.length(); i++){
            for (int j = 0; j < org.length(); j++){
                if (S[i] == org[j]){
                    new_S += key[j];
                }
            }
        }
    } else {
        for (int i = 0; i < S.length(); i++){
            for (int j = 0; j < key.length(); j++){
                if (S[i] == key[j]){
                    new_S += org[j];
                }
            }
        }
    } 
    
    cout << new_S;
    return 0;
}