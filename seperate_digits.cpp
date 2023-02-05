class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        vector<int>vec;
        for(int i=0; i<n; i++){
         while(nums[i]!=0){
             int rem = nums[i] % 10;
                vec.push_back(rem);
                nums[i] = nums[i] / 10;
            }
            int len = vec.size();
            for(int i = len - 1;i>=0;i--){
                v.push_back(vec[i]);
            }
            vec.clear();
        }
        return v;
    
    }
};