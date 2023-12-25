class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n = nums.size();
        long long maxi=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k= j + 1;k<n;k++){
                  long long ans = (static_cast<long long>(nums[i])-nums[j])*nums[k];
                    maxi = max(ans,maxi);
            }
               }   
        }
        return maxi;
    }
};
