class Solution {
public:

    long long int putMarbles(vector<int>&weights, int k) {
        long long n = weights.size();
        vector<long long int>v;
        vector<long long int>v1;
          long long cnt=0;
        long long cnt1=0;
          if(n==k || k==1) 
              return 0;
           k--;
        for(int i = 0;i<n-1;i++){
              v.push_back(weights[i+1]+weights[i]);
          }
        sort(v.begin(),v.end());
        for(int i = 0;i<n-1;i++){
            v1.push_back(weights[i+1] + weights[i]);
        }
         sort(v1.begin(),v1.end(),greater<long long int>());
 for(int i=0;i<k;i++) {
     cnt+= v[i];
 }
        
for(int i=0;i<k;i++){ 
    cnt1 += v1[i];
                  }
       
        
        
        long long ans = cnt1 - cnt;
        return ans;
        
                 
        
    }
};