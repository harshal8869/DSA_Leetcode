class Solution { 
public: 
    int minimizeSum(vector<int>& nums) {  
         sort(nums.begin(),nums.end()); 
        int m = nums.size();
          int sub = nums[m-3] - nums[0];
          int diff1 = nums[m-1] - nums[0];
        int sub2 = nums[m-2] - nums[1];
       
        int diff2=nums[m-1] - nums[2];
      
        int m1= min(sub,sub2);
        int m2=min(m1,diff2);
        int m3 = min(m2,diff1);
        return m3;
         
    } 
};