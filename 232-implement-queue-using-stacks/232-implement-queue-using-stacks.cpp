class MyQueue {
public:
    MyQueue() {
        
        
    }
    stack<int> s1;
    stack<int> s2;
    
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        
    }
    
    int pop() {
        int current = s1.top();
        s1.pop();
        return current;
        
    }
    
    int peek() {
        return s1.top();
        
    }
    
    bool empty() {
        return s1.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */