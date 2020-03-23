#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testCase, age;
    string name;
    multimap<int, string> m;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> age >> name;
        m.insert(make_pair(age, name));
    }

    map<int, string>::iterator iter = m.begin();

    while(iter != m.end()){
        cout << (*iter).first << " " << (*iter).second << "\n";
        iter++;
    }
}