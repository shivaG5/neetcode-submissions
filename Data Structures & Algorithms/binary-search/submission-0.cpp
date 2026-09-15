class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=0;
        int n1=nums.size();
        for(int i=0;i<n1;i++)
        {
            if(nums[i]==target)
            {
                ans=i;
                return ans;
            }
        }
        return -1;
        
    }
};
