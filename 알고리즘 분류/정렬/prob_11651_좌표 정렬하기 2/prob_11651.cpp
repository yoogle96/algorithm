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

bool compare(Point a, Point b){
    return (a._y != b._y) ? (a._y < b._y) : (a._x < b._x);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testCase;
    int inputX, inputY;
    vector<Point> v;

    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> inputX >> inputY;
        v.push_back(Point(inputX, inputY));
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0 ; i < v.size(); i++){
        cout << v[i]._x << " " << v[i]._y << "\n";
    }
    return 0;
}