#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int masterNum;
    cout << "마스터넘버 : ";
    // 1 - masterNum = 18
    cin >> masterNum;
    
    // 동적배열 v를 18만큼 true로 할당 및 초기화
    vector<int> v(masterNum + 1);
    
    for(int i = 2; i < v.size(); i++){
        v[i] = i;
    }
    
    for(int i = 2; i < v.size(); i++){
        cout << v[i] << endl;
    }
    
    cout << "-----------------" << endl;
    for(int i = 2; i <= sqrt(masterNum); i++){
        cout << v[i] << endl;
        if(v[i]){
            for(int j = i + i; j < masterNum; j+=i){
                v[j] = 0;
            }
        }
    }
    
    cout << "-----------최종결과----------------" << endl;
    
    for(int i = 2; i < masterNum; i++){
        if(v[i] != 0)
            cout << v[i] << endl;
    }
    
}
    // 2 <=
    
//    cout << "sqrt값 = " << sqrt(masterNum) << endl;
//    for(int i = 2; i <= sqrt(masterNum); ++i){
//        if(v[i]){
//            for(int j = i * i; j < masterNum; j+=1)
//                v[j] = false;
//        }
//    }
//
//    for(int i = 2; i < masterNum; i++){
//        if(v[i]){
//            cout << i << endl;
//        }
//    }
//
//
//    cout << "cap = " << v.capacity() << endl;
//    return 0;
//}
