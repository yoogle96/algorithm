#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
int main(){
    int testCase = 0;
    int total = 0;
    vector<pair<int, int>> v;

    scanf("%d", &testCase);
    
    for(int i = 0; i < testCase; i++){
        int employee;
        scanf("%d", &employee);

        for(int j = 0; j < employee; j++){
            int num1, num2;
            scanf("%d %d", &num1, &num2);
            v.push_back({num1, num2});
        }

        sort(v.begin(), v.end());

        int result = 1;
        int min = v[0].second; 
        for(int w = 1; w < v.size(); w++){
            if(v[w].second < min){
                result++;
                min = v[w].second;
            }
        }

        printf("%d\n", result); 
        v.clear();
    }
}