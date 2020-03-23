class MyQueue {
  
    public:
        queue<int> q;
        void push(int x) {
            q.push(x);
        }

        void pop() {
            q.pop();
        }

        int front() {
            return q.front();
        }




        // public:
        // stack<int> stack_newest_on_top, stack_oldest_on_top;   
        // int ch = 0;
        // void push(int x) {
        //     stack_newest_on_top.push(x);
        //     stack<int> temp_stack1 = stack_newest_on_top;
        //     stack<int> temp_stack2;
        //     int size = temp_stack1.size();
        //     for(int i = 0 ; i < size - ch; i++) {
        //         temp_stack2.push(temp_stack1.top());
        //         temp_stack1.pop();
        //     }
        //     stack_oldest_on_top = temp_stack2;
        // }

        // void pop() {
        //     stack_oldest_on_top.pop();
        //     ch++;
        // }

        // int front() {
        //     return stack_oldest_on_top.top();
        // }
};