#include <string>
#include <vector>
#include <stack>

using namespace std;

stack<int> s;
vector<int> answer;
vector<int> solution(vector<int> heights) {
    for(int i = heights.size() - 1; i >= 0; i--) {
        int idx = 0;
        
        for(int j = i - 1; j >= 0; j--) {
            if(heights[i] < heights[j]) {
                idx = j + 1;
                break;
            }
        }
        
        s.push(idx);
    }
    
    while(!s.empty()) {
        answer.push_back(s.top());
        s.pop();
    }
    
    return answer;
}