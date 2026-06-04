#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

/* if number of N/2 is even number ? 
(For Example N = 4 → 2N = 8):
   *
  ***
 *****
******* → The    is     lines
******* → Center    two 
 *****
  ***
   *
but if number of N/2 is odd number ? 
(For Example N = 3 → 2N = 6) :
  *
 ***    
*****  → The Center is one Line
 ***
  *
*/

int main(){
    short int N, Stars=1, num = 2;
    cin >> N; short int Spaces=N-1;
    // Shape1
    for (short int j = 0; j < N; j++){
      for (short int i = 0; i < Spaces; i++){
        cout << " ";
      } 
      Spaces--;
      for (short int s = 0; s < Stars; s++){
        cout << "*";
      } cout << "\n"; Stars += 2;
    }
    if (N%2 == 0) {
      Stars--;
      num = 1;
    } else {
      Stars -= 3;
    }

    for (short int row = 0; row < N; row++){
      for (short int i = 0; i < Spaces+num; i++){
        cout << " ";
      } 
      Spaces++;
      for (short int k = 0; k < Stars-1; k++){
        cout << "*";
      } Stars -= 2; cout << "\n";
    }

    return 0;
}