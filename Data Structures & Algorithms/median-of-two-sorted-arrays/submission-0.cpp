class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1);
      int m=nums1.size();
      int n=nums2.size();
      int low=0;
      int high=m;
      int half=(m+n+1)/2;
      while(low<=high)
      {
            int i=(low+high)/2;
            int j=half-i;
            
            int al=(i==0)?INT_MIN:nums1[i-1];
            int ar=(i==m)?INT_MAX:nums1[i];
            int bl=(j==0)?INT_MIN:nums2[j-1];
            int br=(j==n)?INT_MAX:nums2[j];
            if(al<=br&&bl<=ar)
            {
                if((m+n)%2)return max(al,bl);
                return (max(al,bl)+min(ar,br))/2.0;
            }
            else if(al>br)
            high=i-1;
            else
            low=i+1;

        }
      return 0.0;

    }
};
