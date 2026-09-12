class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()||s.size()<t.size()) 
         return "";
        unordered_map<char,int>n1,w1;
        for(char c:t)
        {
            n1[c]++;
        }
        int have=0;
        int req=n1.size();
        int reslen=INT_MAX;
        int resleft=0;
        int left=0;
        for(int r=0;r<s.size();r++)
        {
            char c=s[r];
            w1[c]++;
            if(n1.count(c)&&w1[c]==n1[c])
            {
                have++;
            }
            while(have==req)
            {
                if(r-left+1<reslen)
                {
                    reslen=r-left+1;
                    resleft=left;
                }
                char lc=s[left];
                w1[lc]--;
                if(n1.count(lc)&&w1[lc]<n1[lc])
                {
                    have--;
                }
                left++;
            }
        }
        return reslen==INT_MAX?"":s.substr(resleft,reslen);
    }
};
