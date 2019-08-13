#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main(){
    int N, M, inputNum, cnt, total = 0, mod;
    deque<int> q;
    vector<int> v;
    cin >> N >> M;
    for(int i = 1 ; i <= N; i++){
        q.push_back(i);
    }

    for(int i = 0; i < M; i++){
        cin >> inputNum;
        v.push_back(inputNum);
    }

    for(int i = 0 ; i < M; i++){
        cnt = 0;
        while(1){
            if(q.front() == v[i]){
                if((q.size() / (cnt+1) >= 2) || (q.size() % (cnt+1) == cnt)){
                    q.pop_front();
                    break;
                }
                else{
                    mod = q.size() % (cnt + 1);
                    for(int i = 0 ; i < cnt + mod; i++){
                        q.push_front(q.back());
                        q.pop_back();
                    }
                    q.pop_back();
                    cnt = mod+1;
                    break;
                }
            }
            q.push_back(q.front());
            q.pop_front();
            cnt++;
        }
        total += cnt;
    }
    
    cout << total << "\n";
}