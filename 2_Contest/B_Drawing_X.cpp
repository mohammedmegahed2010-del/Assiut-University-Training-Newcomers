#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B

int main(){
    short int N;
    cin >> N;

    char Special_1 = '\\';   // '\' 
    char Special_2 = '/'; // '/' 

    short int side_stars = 0;
    std::string side_stars_statue = "inc";

    short int center_stars = N-2;
    std::string center_side_stars_statue = "dec";

    for (short int line = 0; line < N; line++){
        if (line+1 == (N/2)+1){
            for (short int i = 0; i < 2; i++){
                for (short int j = 0; j < N/2; j++){
                    cout << "*";
                } if (!i) cout << "X";

            } cout << "\n"; side_stars--;
            side_stars_statue = "dec";
            center_side_stars_statue = "inc";
            Special_1 = Special_2; Special_2 = '\\';

        } else {
            for (short int i = 0; i < side_stars; i++){
                cout << "*";
            }

            cout << Special_1;

            for (short int i = 0; i < center_stars; i++){
                cout << "*";
            } if (center_side_stars_statue == "inc") center_stars+=2; 
              else if (center_stars > 1) center_stars-=2;

            cout << Special_2;

            for (short int i = 0; i < side_stars; i++){
                cout << "*";
            } if (side_stars_statue == "inc") side_stars++; else side_stars--;

            cout << "\n";
        }
    }
    return 0;
}