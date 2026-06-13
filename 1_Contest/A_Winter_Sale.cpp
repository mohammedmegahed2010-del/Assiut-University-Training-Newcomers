#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

// --------------------------

// X → Discount percentage
// P → Price after discount
// Org → Original Price

// ---------------------------

// P = Org - discount value
// P = Org - ( Org * (X/100) )
// P = Org * ( 1 - (X/100) ) 
// P = Org * ( (100/100) - (X/100) )
// P = Org * ( (100-X)/100 )
// P * ( 100/(100-X) ) = Org

// -----------------------------
// Org = P * ( 100 / (100 - X) )
// -----------------------------

int main(){
    double X; double P;
    cin >> X >> P;
    
    double Org = P*(100/(100 - X));

    cout << Org;

    return 0;
}