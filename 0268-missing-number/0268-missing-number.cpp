class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int esum=(n*(n+1))/2;
        int tsum=0;
        
        for(int i=0;i<n;i++){
            tsum=tsum+nums[i];
            }
            int result=esum-tsum;
        
return result;
        
    }
};