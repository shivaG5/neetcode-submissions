class Solution {
public:
    bool isPalindrome(string s) {
     long long left=0;
     long long right=s.size()-1;
     while(left<right)
       {
            char l=s[left];
            char r=s[right];
            if(!isalnum(l)){
                left++;
                continue;
            }
            if(!isalnum(r))
            {
                right--;
                continue;
            }
            if(tolower(l)!=tolower(r))
            {
                return false;
            }
            left++;
            right--;

        }
        return true;   
    }
};
