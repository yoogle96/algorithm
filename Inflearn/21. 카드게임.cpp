#include <iostream>
using namespace std;
int arr1[10], arr2[10];
int aScore, bScore;
bool flag;
int main() {
    for(int i = 0; i < 10; i++) cin >> arr1[i];
    for(int i = 0; i < 10; i++) cin >> arr2[i];

    for(int i = 0; i < 10; i++) {
        if(arr1[i] > arr2[i]) {
            aScore+=3;
            flag = true;
        }
        else if(arr1[i] < arr2[i]) {
            bScore+=3;
            flag = false;
        }
        else {
            aScore++;
            bScore++;
        }
    }
    if(aScore > bScore) {
        cout << aScore << " " << bScore << endl;
        cout << "A";
    }
    else if(aScore < bScore) {
        cout << aScore << " " << bScore << endl;
        cout << "B";
    }
    else {
        if(aScore == 10) {
            cout << "D";
        }else {
            if(flag) {
                cout << aScore << " " << bScore << endl;
                cout << "A";
            }else {
                cout << aScore << " " << bScore << endl;
                cout << "B";
            }
        }
    }
}