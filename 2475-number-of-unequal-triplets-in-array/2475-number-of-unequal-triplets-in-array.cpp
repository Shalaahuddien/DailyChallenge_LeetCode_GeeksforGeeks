class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {   
                for(int k=0;k<n;++k)
                {
                    if(i<j&&j<k&&nums[i]!=nums[j]&&nums[j]!=nums[k]&&nums[i]!=nums[k])
                      ans++;
                }
            }
            
        }
        return ans;
    }
};