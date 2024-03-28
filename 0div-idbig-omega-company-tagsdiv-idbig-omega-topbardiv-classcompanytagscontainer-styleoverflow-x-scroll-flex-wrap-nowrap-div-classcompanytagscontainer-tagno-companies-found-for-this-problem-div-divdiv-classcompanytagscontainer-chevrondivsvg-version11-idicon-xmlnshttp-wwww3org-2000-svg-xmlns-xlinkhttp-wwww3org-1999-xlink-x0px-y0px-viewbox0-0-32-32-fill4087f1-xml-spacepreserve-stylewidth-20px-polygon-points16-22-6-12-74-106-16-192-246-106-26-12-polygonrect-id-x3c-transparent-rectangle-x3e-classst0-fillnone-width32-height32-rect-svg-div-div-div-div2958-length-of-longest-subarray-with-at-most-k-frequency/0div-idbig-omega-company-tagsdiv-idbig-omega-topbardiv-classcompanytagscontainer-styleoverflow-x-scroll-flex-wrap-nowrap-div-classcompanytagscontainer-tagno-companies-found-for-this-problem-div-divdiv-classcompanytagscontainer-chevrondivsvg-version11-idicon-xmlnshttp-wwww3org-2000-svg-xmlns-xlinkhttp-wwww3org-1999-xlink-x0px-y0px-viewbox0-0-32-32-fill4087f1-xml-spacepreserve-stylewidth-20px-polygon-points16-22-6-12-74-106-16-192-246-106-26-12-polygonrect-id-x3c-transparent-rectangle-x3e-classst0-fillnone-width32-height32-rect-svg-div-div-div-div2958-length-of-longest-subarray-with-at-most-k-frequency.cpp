class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();  
        int cnt=0;  
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>k){
                while((mp[nums[i]]>k && cnt == i) || (mp[nums[i]]>k && i>cnt)){
                    mp[nums[cnt]]--;
                    cnt++;
                }
            }
            int val = i + 1 - cnt;
            ans=max(val,ans);
        }
        return ans;
    }
};