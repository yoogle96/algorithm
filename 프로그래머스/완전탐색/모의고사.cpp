#include <string>
#include <vector>
using namespace std;
vector<vector<int>> pattern = {{1, 2, 3, 4, 5}, {2, 1, 2, 3, 2, 4, 2, 5}, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
vector<int> temp;
vector<int> answer;
vector<int> solution(vector<int> answers) {
    for (int i = 0; i < pattern.size(); i++) {
        int maxIdx = pattern[i].size();
        int curIdx = 0, cnt = 0;

        for(int j = 0; j < answers.size(); j++) {
            if(curIdx >= maxIdx) {
                curIdx = 0;
            }

            if(pattern[i][curIdx] == answers[j]) {
                cnt++;
            }
            curIdx++;
        }

        temp.push_back(cnt);
    }

    int topIdx = 0; answer.push_back(1);
    for(int i = 1 ; i < temp.size(); i++) {
        if(temp[topIdx] < temp[i]) {
            answer.clear();
            answer.push_back(i + 1);
            topIdx = i;
        }else if(temp[topIdx] == temp[i]) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}
