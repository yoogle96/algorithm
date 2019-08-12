#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
};

class LinkedList{
    public:
    Node * tail;
    Node * head;
    Node * cur;
    Node * before;
    int numOfData;
};

typedef LinkedList List;

void ListInit(List * plist){
    plist -> tail = NULL;
    plist -> head = NULL;
    plist -> cur = NULL;
    plist -> before = NULL;
    plist -> numOfData = 0;
}

void LInsert(List * plist, int data){
    Node * newNode = new Node;
    newNode -> data = data;

    if(plist -> tail == NULL){
        plist -> head = newNode;
        plist -> tail = newNode;
        plist -> cur = newNode;
        newNode -> next = newNode;
    }else{
        newNode -> next = plist -> head;
        plist -> tail -> next = newNode;

        // plist -> before = plist -> tail;
        plist -> tail = newNode;
    }

    (plist -> numOfData)++;
}

int LRemove(List * plist, int idx){
    if(idx == 1){
        plist -> before = plist -> tail;
        plist -> cur = plist -> head;
    }else{
        for(int i = 0; i < idx-1; i++){
            plist -> before = plist -> cur;
            plist -> cur = plist -> cur -> next;
        }
    }
    
    Node * rpos = plist -> cur;
    int rdata = plist -> cur -> data;

    if(rpos == plist -> head){
        if(plist -> head == plist -> tail){
            plist -> head = NULL;
            plist -> tail = NULL;
        }else{
            plist -> head = rpos -> next;
        }
    }

    if(rpos == plist -> tail){
        if(plist -> tail == plist -> head){
            plist -> head = NULL;
            plist -> tail = NULL;
        }else{
            plist -> tail = plist -> before;
        }
    }

    plist -> before -> next = plist -> cur -> next;
    plist -> cur = plist -> before -> next;
    delete rpos;
    return rdata;
}

void viewData(List * plist, int idx){
    while(plist -> cur != plist -> tail){
        for(int i = 0; i < idx - 1; i++){
            plist -> cur = plist -> cur -> next;
        }
        cout << plist -> cur -> data;
        
    }
}

int main(){
    List list;
    string output = "<";
    ListInit(&list);
    int n, k;

    cin >> n >> k;

    for(int i = 1 ; i <= n; i++){
        LInsert(&list, i);
    }

    for(int i = 0 ; i < n; i++){
        if(i < n-1){
            output += to_string(LRemove(&list, k)) + ", ";
        }else{
            output += to_string(LRemove(&list, k));
        }
    }

    output += ">";

    cout << output;
}