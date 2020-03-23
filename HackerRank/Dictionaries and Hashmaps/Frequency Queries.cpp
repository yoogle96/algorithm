// 정답
vector<int> freqQuery(vector<vector<int>> queries) {
    unordered_map<int, int> um;
    vector<int> answer;
    for(int i = 0; i < queries.size(); i++) {
        int cmd = queries[i][0];
        int num = queries[i][1];
        if(cmd == 1) {
            if(um.count(num)) {
                um[num] += 1;
            }else {
                um[num] = 1;
            }
        }else if(cmd == 2) {
            if(um.count(num)) {
                if(um[num] > 1) {
                    um[num] -= 1;
                }else {
                    um.erase(num);
                }
            }
        }else {
            if(num == 0) {
                answer.push_back(1);
                continue;
            }
            bool flag = false;
            for(auto item = um.begin(); item != um.end(); item++) {
                if(item -> second >= num) {
                    flag = true;
                    break;
                }
            }
            if(flag) answer.push_back(1);
            else answer.push_back(0);
        }
    }
    return answer;
}

// 오답
// vector<int> freqQuery(vector<vector<int>> queries) {
//     unordered_map<int, int> um;
//     vector<int> answer;
//     for(int i = 0; i < queries.size(); i++) {
//         int cmd = queries[i][0];
//         int num = queries[i][1];
//         if(cmd == 1) {
//             if(um.count(num)) {
//                 um[num] += 1;
//             }else {
//                 um[num] = 1;
//             }
//         }else if(cmd == 2) {
//             if(um.count(num)) {
//                 if(um[num] > 1) {
//                     um[num] -= 1;
//                 }else {
//                     um.erase(num);
//                 }
//             }
//         }else {
//             if(num == 0) {
//                 answer.push_back(1);
//                 continue;
//             }
//             bool flag = false;
//             for(auto item = um.begin(); item != um.end(); item++) {
//                 if(item -> second >= num) {
//                     flag = true;
//                     break;
//                 }
//             }
//             if(flag) answer.push_back(1);
//             else answer.push_back(0);
//         }
//     }
//     return answer;
// }