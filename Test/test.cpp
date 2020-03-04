#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int input1;
    double input2;
    string input3;
    cin >> input1;
    cin >> input2;
    // cin >> input3;
    // cin.getline(input3,1000,'\n');
    // cin.getline(input3, 1000, '\n');
    getline(cin, input3);
    

    cout << input3;
    // i += input1;
    // d += (double)input2;
    // cout << i << endl;
    // cout << d << endl;
    // cout << s << input3 << endl;

    return 0;
}