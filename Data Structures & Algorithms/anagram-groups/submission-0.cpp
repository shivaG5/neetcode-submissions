class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(const string& s:strs)
        {
            string key(26,0);
            for(char c:s)key[c-'a']++;
            mpp[key].push_back(s);
        }
        vector<vector<string>>res;
        res.reserve(mpp.size());
        for(auto& [k,v]:mpp)res.push_back(move(v));
        return res;
    }
};
