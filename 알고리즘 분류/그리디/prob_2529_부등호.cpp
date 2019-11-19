#include <iostream>
#include <string>
#include <vector>

using namespace std;

int k;
string myMax = "", myMin = "";
vector<string> v;
vector<int> maxNums, minNums;
int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){
    cin >> k;
    for(int i = 0; i < k; i++){
        string input;
        cin >> input;
        v.push_back(input);
    }
    for(int i = 0; i < k+1; i++){
        minNums.push_back(i);
        maxNums.push_back(9-i);
    }



    // int step = 0;
    
    for(int i = 0; i < v.size(); i++){
        if(v[i] == ">"){
            int step = i+1;
           
            while(1){
                if(step < k && v[step] == ">") step++;
                else break;
            }


            for(int j = step ; j > i; j--){
                myMin += to_string(minNums[j]);
            }

            i = step-1;
        }
        if(v[i] == "<"){
            myMin += to_string(minNums[i]);

        }
    }

    cout << myMin << endl;
}
