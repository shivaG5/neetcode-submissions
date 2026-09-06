class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int maxe=0;
        while(l<r)
        {
            int curr=min(heights[l],heights[r])*(r-l);
            maxe=max(maxe,curr);
            if(heights[l]<heights[r])
            {
                l++;
            }
            else{
                r--;
            }
        }
        return maxe;
    }
};
