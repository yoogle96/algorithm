#include <iostream>
using namespace std;

void dfs(int n) {
    if(n > 7) return;
    cout << n << " ";
    dfs(n * 2);
    dfs(n * 2 + 1);
}

int main() {
    dfs(1);
}

// class Node {
//     public:
//         Node(int _num);
//         int num;
//         Node * left;
//         Node * right;

// };

// Node::Node(int _num) {
//     num = _num;
//     left = nullptr;
//     right = nullptr;
// }

// Node * node1 = new Node(1);
// Node * node2 = new Node(2);
// Node * node3 = new Node(3);
// Node * node4 = new Node(4);
// Node * node5 = new Node(5);
// Node * node6 = new Node(6);
// Node * node7 = new Node(7);

// void recur(Node * node) {
//     if(node == nullptr) return;
//     cout << node -> num << " ";
//     recur(node -> left);
//     recur(node -> right);
// }

// int main() {    
//     node1 -> left = node2;
//     node1 -> right = node3;
//     node2 -> left = node4;
//     node2 -> right = node5;
//     node3 -> left = node6;
//     node3 -> right= node7;
//     recur(node1);
// }