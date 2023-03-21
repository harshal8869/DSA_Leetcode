class Solution {
public:
    int ans = 0;
    void beautiful(int beg, vector<int>& vec, vector<int>& nums, unordered_map<int, int>& m, int cnt){
        if(beg == nums.size()){
            if(vec.size() > 0){
                ans++;
            }
            return;
        }
        
        
        int val = 0;
        if(!m[nums[beg] - cnt]){
            vec.push_back(nums[beg]);
            m[nums[beg]] = 1;
            beautiful(beg + 1, vec, nums, m, cnt);
            val = 1;
        }
        if(val){
            vec.pop_back();
            m[nums[beg]] = 0;
        }
        
        
        beautiful(beg + 1, vec, nums, m, cnt);
    }
    
    int beautifulSubsets(vector<int>& nums, int cnt) {
        sort(nums.begin(), nums.end());
        vector<int> vec;
        unordered_map<int, int> m;
        beautiful(0, vec, nums, m, cnt);
        return ans;
    }
};