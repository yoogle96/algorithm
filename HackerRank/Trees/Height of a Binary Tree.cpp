int ans;
void dfs(Node * node, int cnt) {
    if(node -> left == nullptr && node -> right == nullptr) {
        ans = max(ans, cnt);
        return;
    }
    if(node -> left != nullptr) {
        dfs(node->left, cnt + 1);
    }
    if(node->right != nullptr) {
        dfs(node->right, cnt + 1);
    }
}
int height(Node* root) {
    dfs(root, 0);
    return ans;
}
