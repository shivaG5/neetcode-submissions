class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
      int maxa=0;
      stack<int>st;
      int n=heights.size();
      for(int i=0;i<=n;i++)
      {
         int currh= (i==n) ?0:heights[i];
         while(!st.empty() && currh<heights[st.top()])
         {
                int h=heights[st.top()];
                st.pop();
                int l=st.empty()?-1:st.top();
                int w=i-l-1;
                int area=h*w;
                maxa=max(area,maxa);
         }
         st.push(i);
      }
      return maxa;   
    }
};
