#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

class Conference{
public:
    int _startTime;
    int _endTime;
    int _distance;

    Conference(int startTime, int endTime){
        _startTime = startTime;
        _endTime = endTime;
        _distance = endTime - startTime;
    }
};

bool cmp1(Conference conf1, Conference conf2){
    if(conf1._endTime != conf2._endTime){
        return conf1._endTime < conf2._endTime;
    }
    else{
        return conf1._startTime < conf2._startTime;
    }
}

int main(void) {
    int n;
    int count = 1;
    int tempT = 0;
    scanf("%d", &n);
    vector<Conference> v;

    for(int i = 0; i < n; i++){
        int startTime, endTime;
        scanf("%d %d", &startTime, &endTime);
        v.push_back(Conference(startTime, endTime));
    }

    if(n == 1){
        printf("%d\n", count);
        return 0;
    }

    sort(v.begin(), v.end(), cmp1);

    tempT = v[0]._endTime;
    for(int j = 1; j < n; j++){
        if(tempT <= v[j]._startTime){
            count++;
            tempT = v[j]._endTime;
        }
    }
    
    printf("%d\n", count);
    return 0;
}
