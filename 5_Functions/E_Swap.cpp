#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E

void swap(int X, int Y){
    int temp = X; X = Y; Y = temp; 
    cout << X << " " << Y; 
}

int main(){
    int X, Y;
    cin >> X >> Y;
    swap(X, Y);
    return 0;
}