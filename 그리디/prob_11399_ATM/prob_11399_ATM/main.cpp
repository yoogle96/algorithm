#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    int total = 0;
    
    scanf("%d", &n);
    int * arr = new int[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    sort(arr, arr+n);
    
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            total += arr[i];
        }
    }
    
    printf("%d\n", total);
    return 0;
}
