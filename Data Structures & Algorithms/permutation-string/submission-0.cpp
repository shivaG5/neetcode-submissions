class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        if(n1>n2) return false;
        vector<int>s11(26,0);
        vector<int>wcc(26,0);
        for(int i=0;i<n1;i++)
        {
            s11[s1[i]-'a']++;
            wcc[s2[i]-'a']++;
        }
        int m=0;
        for(int i=0;i<26;i++)
        {
            if(s11[i]==wcc[i]){
                m++;
            }
        }
        int l=0;
        for(int r=n1;r<n2;r++)
        {
            if(m==26){
             return true;
            }
            int rch=s2[r]-'a';
            wcc[rch]++;
            if(wcc[rch]==s11[rch])
            {
                m++;
            }
            else if (wcc[rch]==s11[rch]+1)
            {
                m--;
            }
            int lch=s2[l]-'a';
            wcc[lch]--;
            if(wcc[lch]==s11[lch])
            {
                m++;
            }
            else if(wcc[lch]==s11[lch]-1)
            {
                m--;
            }
            l++;

        }
        return m==26;
    }
};
