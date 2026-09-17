class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        
        for(int i=0;i<n;i++)
        {
            int sume=target-nums[i];
            if(mpp.find(sume)!=mpp.end()){
                return {mpp[sume],i};
            }
            mpp[nums[i]]=i;

        }
        return {};
    }
};
