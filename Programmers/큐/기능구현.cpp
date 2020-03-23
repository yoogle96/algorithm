#include <string>
#include <vector>

using namespace std;

vector<int> answer;
vector<int> day;
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    for(int i = 0; i < progresses.size(); i++) {
        int remain = 100 - progresses[i];
        
        if(remain % speeds[i] != 0) {
            day.push_back((remain / speeds[i]) + 1);
        }else {
            day.push_back(remain / speeds[i]);
        }
    }
    
    int curDay = day[0];
    int cnt = 1;
    for(int i = 1; i < day.size(); i++) {
        if(curDay >= day[i]) {
            cnt++;
        }else {
            answer.push_back(cnt);
            curDay = day[i];
            cnt = 1;
        }
    }
    answer.push_back(cnt);
    
    return answer;
}