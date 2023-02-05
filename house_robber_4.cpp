class Solution {
public:
    int func(vector<int> &v, int k, int i, vector<int>&vec){
        int n = v.size();
        int add = 0;
        if(i>=n){
            return 0;
        }
    if(vec[i]!=-1){
        return vec[i];
    }
       
        int val = func(v, k, i+1, vec);
        
        if(k>=v[i]){
            int v1 = func(v, k, i+2, vec);
        vec[i]= max(val,v1+1);
            return vec[i];
        }
         vec[i]= val;
        return vec[i];
    }
    
    bool bcheck (vector<int>&v, int k, int cnt){
        int n = v.size();
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            vec[i]=-1;
        }
        int maxi = func(v, k, 0, vec);
        if(maxi>=cnt){
            return true;
        }
        else{
            return false;
        }
    }
    
    int minCapability(vector<int>& nums, int k) {
       int low=0;
        int high=1e9;
        while(high - 1>low){
            int mid  = low +(high-low)/2;
            if(bcheck(nums,mid,k)==0){
                low = mid;
            }
            else{
                high = mid;
            }
            
        }
        
        return high;
    }
};