#include <string>
#include <vector>
#include <unordered_map>

#define ENTER 1
#define LEAVE 2

using namespace std;

vector<string> getWord(string str){
    vector<string> ans;
    string tmp = "";
    for(int i=0;i<=str.size();i++){
        if(str[i]==' ' || (i==str.size() && tmp != "")){
            ans.push_back(tmp);
            tmp = "";
        }else{
            tmp += str[i];
        }
    }
    return ans;
}

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<int,string>> visit;
    unordered_map<string,string> user;
    for(int i=0;i<record.size();i++){
        vector<string> word = getWord(record[i]);
        if(word[0] == "Enter"){
                user[word[1]] = word[2];
                visit.push_back({ENTER, word[1]});
        }else if(word[0] == "Leave"){
                visit.push_back({LEAVE, word[1]});
        }else{
            user[word[1]] = word[2];
        }
    }
    
    for(int i=0;i<visit.size();i++){
        string id = visit[i].second;
        string name = user[id];
        if(visit[i].first == ENTER){
            answer.push_back(name+"님이 들어왔습니다.");
        }else{
            answer.push_back(name+"님이 나갔습니다.");
        }
    }
    return answer;
}