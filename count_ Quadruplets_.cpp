class Solution {
public:
    long long countQuadruplets(vector<int>& nums) {
        long long n = nums.size();
        long long ans = 0;
        vector<vector<int>>v(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(j>0){
                v[i][j] = v[i][j-1];
                }
                if(nums[i] > nums[j]){
                    v[i][j]+=1;
                }
            }
        }
        for(int j=0;j<n-2;j++){
            long long cnt = 0;
            for(int k = j+1;k<n;k++){
                if(nums[k] > nums[j]){
                    ans+=cnt;
                }
                if(nums[j] > nums[k]){
                    cnt+=v[k][j];
                }
            }
        }
        return ans;
    }
};