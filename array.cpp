class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
             int len = nums.size();
        while(len){
             int end = nums[len - 1];
            int beg = nums[0];
            if (len!=1) {
                 long long cnt = pow(10, (int)log10(end) + 1);
                ans =ans + end +  beg * cnt;
                len -= 2;
                nums.erase(nums.end() - 1);
                nums.erase(nums.begin());
                
            } 
            else {
                ans = ans + beg;
                len--;
                nums.erase(nums.begin());
            }
        }
        return ans;
    }
};