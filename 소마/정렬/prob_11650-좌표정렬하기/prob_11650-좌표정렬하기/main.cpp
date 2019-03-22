#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Point{
public:
    int _x;
    int _y;
    
    Point(int x, int y){
        _x = x;
        _y = y;
    }
};

bool cmp(const Point point1, const Point point2){
    if(point1._x < point2._x){
        return true;
    }
    else if(point1._x == point2._x){
        return point1._y < point2._y;
    }
    else{
        return false;
    }
}

int main(void) {
    vector<Point> v;
    int testCount = 0;
    int x = 0, y = 0;
    
    scanf("%d", &testCount);
    for(int i = 0; i < testCount; i++){
        scanf("%d", &x);
        scanf("%d", &y);
        v.push_back(Point(x, y));
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for(int i = 0; i < testCount; i++){
        printf("%d %d\n", v[i]._x, v[i]._y);
    }
    
    
    return 0;
}
