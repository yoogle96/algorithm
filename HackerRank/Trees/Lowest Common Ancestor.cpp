vector<Node*> v[30];
void dfs(Node * node, vector<Node*> tmp) {
    if(node == nullptr) return;
    tmp.push_back(node);
    v[node -> data] = tmp;
    dfs(node -> left, tmp);
    dfs(node -> right, tmp);
}

Node *lca(Node *root, int v1,int v2) {
    vector<Node*>tmp;
    dfs(root, tmp);
    Node * ans;
    for(int i = v[v1].size() - 1; i >= 0; i--) {
        Node * cur = v[v1][i];
        for(int j = v[v2].size() - 1; j >= 0; j--) {
            if(cur == v[v2][j]) {
                ans = cur;
                break;
            }
        }
        if(ans != nullptr) break;
    }

    return ans;
}