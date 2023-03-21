class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
     int j=0;
        int i = 1;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int ans = 0;
     
        while(i<len){
            if(nums[i]  <= nums[j]){
                i++;
              
            }
            else
            {
                i++;
                j++;
                ans++;
            }
        }
        return ans;
    }
};