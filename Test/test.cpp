#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


#define INF 999999999
class Tree {
    public:
    int size;
    vector<int> minVal;

    Tree(int * arr, int arrSize) {
        size = arrSize;
        minVal.resize(size * 4);
        init(arr, 0, size - 1, 1);
    }

    int init(int * arr, int left, int right, int node) {
        if(left == right) {
            return minVal[node] = arr[left];
        }

        int mid = (left + right) / 2;
        int leftMinVal = init(arr, left, mid, node * 2);
        int rightMinVal = init(arr, mid + 1, right, node * 2 + 1);

        return minVal[node] = min(leftMinVal, rightMinVal);
    }

    int check(int left, int right, int node, int nodeLeft, int nodeRight) {
        if(right < nodeLeft || nodeRight < left) return INF;
        if(left <= nodeLeft && nodeRight <= right) return minVal[node];

        int mid = (nodeLeft + nodeRight) / 2;
        int leftMinVal = check(left, right, node * 2, nodeLeft, mid);
        int rightMinVal = check(left, right, node * 2 + 1, mid + 1, nodeRight);

        return min(leftMinVal, rightMinVal);
    }

    int check(int left, int right) {
        return check(left, right, 1, 0, size - 1);
    }
};

int segment(int x, vector<int> arr) {
    int * arrr = &arr[0];
    cout << "sizeof(arr) : " << sizeof(arr) << endl;
    cout << "sizeof(int) : "  << sizeof(int) << endl;
    Tree tree(arrr, arr.size());
    // Tree tree(arr, sizeof(arr) / sizeof(int));
    // priority_queue<int, vector<int>, less<int>> gpq;
    vector<int> tv;
    int ch[1000001], idx = 0, maxx = -2147000000;
    for(int i = 0; i < sizeof(arr) / sizeof(int) - x; i++) {
        int min = tree.check(i, i + x);
        cout << "i : " << i << " j : " << (i + x) - 1 << endl;
        cout << min << endl;
        // vector<int> v;
        // priority_queue<int, vector<int>, greater<int>> lpq;
        // for(int j = i; j < i + x; j++) {
        //     lpq.push(arr[j]);
        // }
        // gpq.push(min);
        tv.push_back(min);
    }
    sort(tv.begin(), tv.end(), greater<int>());
    maxx = tv[0];
    // maxx = gpq.top();

    // for(int i = 0; i < idx; i++) {
    //     maxx = max(maxx, ch[i]);
    // }
    return maxx;
}

int main() {
    int arr[] = {5, 2, 5, 4 ,6 ,8};
    vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
    int ans = segment(3, vec);
    cout << ans;
}


// int main() {
//     static const int arr[] = {5, 2, 5, 4 ,6 ,8};
//     vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
//     // int ans = segment(1, vec);
//     // cout << ans << endl;
//     // int arr[] = { 7, 4, 5, 1, 9, 5, 2, 11, 10 };
//     int * arrr = &vec[0];
//     // int arr[] = 
//     Tree rmq(arrr, sizeof(arr) / sizeof(int));
    
 
//     printf("query(0-8) : %d\n", rmq.check(0, 2));
//     printf("query(1-6) : %d\n", rmq.check(1, 3));
//     printf("query(7-8) : %d\n", rmq.check(2, 4));
//     printf("query(3-7) : %d\n", rmq.check(3, 5));
//     // printf("query(0-2) : %d\n", rmq.check(0, 2));
//     // printf("query(0-2) : %d\n", rmq.check(4, 8));
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #define INF 99999999
// using namespace std;
// struct RMQ {
//     int size;
//     vector<int> minValues;
 
//     RMQ(int *arr,int arrSize) {
//         size = arrSize;
//         minValues.resize(size * 4);
//         init(arr, 0, size - 1,1);
//     }
 
//     int init(int *arr, int left, int right,int node) {
//         if (left == right) return minValues[node] = arr[left];
 
//         int mid = (left + right) / 2;
//         int leftMinValue = init(arr, left, mid, node * 2);
//         int rightMinValue = init(arr, mid + 1, right, node * 2 + 1);
 
//         return minValues[node] = min(leftMinValue, rightMinValue);
//     }
 
//     int query(int left, int right, int node, int nodeLeft, int nodeRight) {
//         if (right < nodeLeft || nodeRight < left) return INF;
//         if (left <= nodeLeft&&nodeRight <= right)
//             return minValues[node];
 
//         int mid = (nodeLeft + nodeRight) / 2;
//         int leftMinValue = query(left, right, node * 2, nodeLeft, mid);
//         int rightMinValue = query(left, right, node * 2 + 1, mid + 1, nodeRight);
 
//         return min(leftMinValue, rightMinValue);
//     }
 
//     int query(int left, int right) {
//         return query(left, right, 1, 0, size - 1);
//     }
 
//     int update(int index, int value, int node, int nodeLeft, int nodeRight) {
//         if (index < nodeLeft || nodeRight < index) return minValues[node];
 
//         if (nodeLeft == nodeRight) return minValues[node] = value;
//         int mid = (nodeLeft + nodeRight) / 2;
//         int leftMinValue = update(index, value, node * 2, nodeLeft, mid);
//         int rightMinValue = update(index, value, node * 2 + 1, mid + 1, nodeRight);
//         return minValues[node]=min(leftMinValue, rightMinValue);
//     }
 
//     int update(int index, int value) {
//         return update(index, value, 1, 0, size - 1);
//     }
// };
 
// int main() {
 
//     int arr[] = { 7, 4, 5, 1, 9, 5, 2, 11, 10 };
//     RMQ rmq(arr, sizeof(arr) / sizeof(int));
 
//     printf("query(0-8) : %d\n", rmq.query(6, 8));
//     printf("query(1-6) : %d\n", rmq.query(1, 6));
//     printf("query(7-8) : %d\n", rmq.query(7, 8));
//     printf("query(3-7) : %d\n", rmq.query(3, 7));
//     printf("query(0-2) : %d\n", rmq.query(0, 2));
//     printf("query(0-2) : %d\n", rmq.query(4, 8));
//     printf("update(index 4, value 0)) : %d\n", rmq.update(4,0));
     
// }
