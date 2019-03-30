#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    printf("---------------\n");
    vector<int> v;
    int test = 0;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        int num = 0;
        scanf("%d", &num);
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        printf("%d\n", v[i]);
    }
    return 0;
}
