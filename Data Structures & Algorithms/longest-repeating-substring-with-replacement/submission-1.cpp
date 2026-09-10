class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int mx=0;
        int res=0;
        vector<int>cnt(26,0);
        for(int r=0;r<s.size();r++)
        {
            cnt[s[r]-'A']++;
            mx=max(mx,cnt[s[r]-'A']);
            while((r-l+1)-mx>k)
            {
                cnt[s[l]-'A']--;
                l++;

            }
            res=max(res,r-l+1);

        }
        return res;
    }
};
