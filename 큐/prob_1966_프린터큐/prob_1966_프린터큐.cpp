#include <iostream>
#include <queue>

using namespace std;

int main(){
    int testCase, total, findIdx, importance, cnt;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        queue< pair<int, int> > q;
        priority_queue< int > pq;
        cnt = 0;
        cin >> total >> findIdx;
        for(int j = 0 ; j < total; j++){
            cin >> importance;
            q.push( make_pair(j, importance) );
            pq.push(importance);
        }

        while(!q.empty()){
            int nowIdx = q.front().first;
            int nowImportance = q.front().second;
            q.pop();
            if(nowImportance == pq.top()){
                pq.pop();
                cnt++;
                if(nowIdx == findIdx){
                    break;
                }
            }else{
                q.push( make_pair(nowIdx, nowImportance) );
            }
        }
        
        cout << cnt << endl;
    }
    
}