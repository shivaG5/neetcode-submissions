class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int mx=0;
        unordered_map<char,int>mpp;
        for(int r=0;r<s.size();r++)
        {
            char c=s[r];
            if(mpp.find(c)!=mpp.end()&&mpp[c]>=l)
            {
                l=mpp[c]+1;
            }
            mpp[c]=r;
            mx=max(mx,r-l+1);
        
        }
        return mx;
    }
};
