class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n = nums.size();
        int maxi=1;
        int cnt=1;
        for(int i=1;i<n;i++)
            if(nums[i]==nums[i-1]){
                cnt++;
                maxi = max(cnt,maxi);
            }
            else
                cnt = 1;
      
        int ans = 2 * maxi - n;
        int quo = n%2;
        if(quo > ans){
        return quo;
    }
        else if(ans == quo){
            return ans;
        }
        else
            return ans;
    }
};
