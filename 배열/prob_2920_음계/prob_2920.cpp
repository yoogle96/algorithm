#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int arr[8];
    int num;

	for(int i = 0; i < 8; i++){
		cin >> arr[i];
	}

	if(arr[0] == 1){
		for(int i = 1; i < 7; i++){
			if(arr[i+1] != arr[i]+1){
				cout << "mixed" << endl;
				return 0;
			}
		}
		cout << "ascending" << endl;
	}
	else if(arr[0] == 8){
		for(int i = 1; i < 7; i++){
			if(arr[i+1] != arr[i]-1){
				cout << "mixed" << endl;
				return 0;
			}
		}
		cout << "descending" << endl;
	}
	else{
		cout << "mixed" << endl;
	}

	return 0;
}