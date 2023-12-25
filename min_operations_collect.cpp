class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt=0;
        set<int>st;
          reverse(nums.begin(),nums.end());
        int f = 0; 
        for(auto it:nums){ 
            if(k>=it){ 
                st.insert(it); 
            } 
            cnt++; 
            if(k - st.size()==0){ 
                f = 1; 
                break; 
            } 
        } 
         
        if(f==1){ 
            return cnt; 
        } 
         
        return -1; 
    }
};
