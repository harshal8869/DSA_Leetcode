class Solution {
public:
    int maxCount(vector<int>&vec, int n, int maxSum) {
        int ans = 0;
    set<int>st (vec.begin(),vec.end());
      for (int i=0;i<n;i++) {
             if (st.count(i+1)){
                continue;
            }
            if (maxSum - 1 >=i){
                maxSum = maxSum - i - 1;
                ans++;
            } 
           
            else {
                break;
            }
        }
        return ans;
    
    }
};