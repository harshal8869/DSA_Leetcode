class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        int ans=0;
        int maxi = INT_MAX;
        int mini =INT_MAX;
        for(auto it: nums){
            mini = mini & it;
        }
        if(mini!=0){
            return 1;
    }
        
        
        for(auto it:nums){
            maxi = maxi & it;
            if(maxi==mini)
                ans++, maxi = INT_MAX;
        }
        return ans;
    }
};
