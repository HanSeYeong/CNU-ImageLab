class MinStack {
public:
    /** initialize your data structure here. */
        int data[100000];
        int t=-1;
        int min[100000];
    MinStack() {
    }
    
    void push(int x) {
        this->data[this->t+1] = x;
        this->t++;
        if(t==0)
            min[0] = data[t];
        else if(min[t-1]>data[t])
            min[t]=data[t];
        else
            min[t] = min[t-1];
        return;
    }
    
    void pop() {
       if(this->t > -1)
           this->t--;
        return;
    }
    
    int top() {
        if(this->t < -1)
            return 0;
        return this->data[this->t];
    }
    
    int getMin() {
        
        return this->min[t];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
