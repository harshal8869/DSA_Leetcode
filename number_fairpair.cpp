class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long len = nums.size();
        long long ans = 0;
        sort(nums.begin(),nums.end());
  for (int i=0;i<len;i++)
  {
       int high = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - nums.begin();
      int higher = high - 1;
    int low = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) - nums.begin();
    if (low<=higher){
      ans = ans + 1 - low + higher;
    }
  }
            return ans;
                            }
};