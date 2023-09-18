class MinStack {
public:
    stack<long> st;
    long minEle;
    MinStack() {
        
    }
    
    void push(int val) {
              if(st.size()==0){
            minEle=val;
            st.push(val);
        }
        else{
            if(val>=minEle)
            st.push(val);
            else if(val<minEle){
                st.push((long)2*val-minEle);
                minEle=val;
            }
        }
    }
    
    void pop() {
          if(st.size()==0)
        return ;
        if(st.top()>=minEle)
        st.pop();
        else if(st.top()<minEle){
            minEle=2*minEle-st.top();
            st.pop();
        }
    }
    
    int top() {
           if(st.size()==0)
        return -1;
        
            if(st.top()>=minEle)
            return st.top();
            else
            return minEle;
        
    }
    
    int getMin() {
           if(st.size()==0)
        return -1;
        else
         return minEle;    
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */