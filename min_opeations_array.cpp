class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
          unordered_map<int,int>mp;
        int ans=0;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second<=1){
                return -1;
        }
            ans = ans + (i.second + 2)/3;
            
        }
        return ans;
    
    }
};
