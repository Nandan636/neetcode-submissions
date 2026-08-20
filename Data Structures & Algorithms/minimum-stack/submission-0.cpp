class MinStack {
    stack<int> st;
    stack<int> minst;
public:
    MinStack() {
        
        
    }
    
    void push(int value) {
        st.push(value);
        if( minst.empty() ||value <= minst.top() ){
       minst.push(value);
    }
    else{
        minst.push(minst.top());
    }
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
            minst.pop();
        }
    }
    
    int top() {
        if(!st.empty())
            return st.top();
        return 0;
    }
    
    int getMin() {
        if(!st.empty())
            return minst.top();
        return 0;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */