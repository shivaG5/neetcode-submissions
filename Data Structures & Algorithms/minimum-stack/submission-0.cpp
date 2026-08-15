class MinStack {
public:

   stack<long long>st;
    long long mini;
    MinStack() {
        stack<long long>st;
        long long mini;
    }
    
    void push(int val) {
       if(st.empty())
       {
          st.push(val);
          mini=val;
       }
       else if (val>=mini)
       {
         st.push(val);
       }
       else
       {
         st.push(2ll*val-mini);
          mini=val;
       }    
    }
    
    void pop() 
    {
       if(st.top()<mini)
       {
         mini=2ll*mini-st.top();
       }

       st.pop();
    }
    
    int top() 
    {
      if(st.top()<mini)
      {
         return mini;
      }
      return st.top();    
    }
    
    int getMin() {
        return mini;
    }
};
