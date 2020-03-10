#include <bits/stdc++.h>
using namespace std;

class Block {
    public:
    Block(int _sizee, int _height, int _weight) {
        sizee = _sizee;
        height = _height;
        weight = _weight;
    }
    int sizee;
    int height;
    int weight;
};
bool cmp(Block b1, Block b2) {
    return b1.sizee > b2.sizee;
}
vector<Block> v;
int n, sizee, height, weight, dp[101];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> sizee >> height >> weight;
        v.push_back(Block(sizee, height, weight));
    }
    sort(v.begin(), v.end(), cmp);
    dp[1] = v[0].height;
    int ans = dp[1];
    for(int i = 1; i < n; i++) {
        int maxx = -2147000000;
        for(int j = i - 1; j >= 0; j--) {
            if(v[i].weight < v[j].weight) {
                maxx = max(maxx, dp[j + 1]);
            }
        }
        if(maxx == -2147000000) dp[i + 1] = v[i].height;
        else dp[i + 1] = maxx + v[i].height;

        ans = max(ans, dp[i + 1]);
    }
    cout << ans << endl;
}