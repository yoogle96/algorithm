#include <vector>
#include <algorithm>

using namespace std;

vector<int> answer;
vector<int> solution(vector<int> array, vector<vector<int>> commands) {

    for(int i = 0; i < commands.size(); i++) {
        int start = commands[i][0];
        int end = commands[i][1];
        vector<int> temp;
        temp.clear();
        if(start != end) {
            temp.assign(array.begin() + (start - 1), array.begin() + (end));
        }else {
            temp.push_back(array[start - 1]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2] - 1]);
    }

    return answer;
}