class Solution { 
public: 
     
    int solve(int n){ 
         int i=1;
        int ans = 0; 
        for(int j=0;j<7;j++){ 
            if((n&i)==i){ 
                ans = ans + i;
            } 
            i = i * 2;
        } 
         return ans; 
    } 
      
     
    int thrill(vector<int> &vec,vector<vector<int>> &v,int k){ 
        long long cnt=0; 
        int len = vec.size();
        for(int i=0;i<k+1;i++){ 
            map<pair<int,int>,int>mp; 
             int a = i; 
            int b = k-i; 
             for(int i=0;i<len;i++){ 
                int c = v[vec[i]][0]; 
                int d = v[vec[i]][1]; 
                d = solve(d); 
                 c=solve(c);
                 
                v[vec[i]][1] = d; 
                v[vec[i]][0] = c;
                 
                mp[{c,d}]++; 
            } 
             for(int i=0;i<len;i++){ 
                int c = v[vec[i]][0]; 
                int d = v[vec[i]][1]; 
                 
                if(c==(c^a) && d==(d^b)){ 
                    cnt = cnt + (mp[{c,d}]-1); 
                } 
                else{ 
                    d = d ^ b; c = c ^ a;
                    cnt = cnt + (mp[{c,d}]); 
                } 
                 
                 
                 
            } 
             
        } 
         
         
        long long res = cnt/2; 
         return res;
    } 
     int solve2(int m){ 
         for(int i=0;i<=6;i++){ 
          m = m /2; 
        } 
         return m;
         } 
  
    int countPairs(vector<vector<int>>& v, int k) { 
        int sz = v.size();
    map<pair<int,int>,vector<int>>mp;
        long long ans=0;
        for(int i=0;i<sz;i++){ 
            int x = solve2(v[i][0]); 
            int y = solve2(v[i][1]); 
             
            mp[{x,y}].push_back(i); 
        } 
         
    
        for(auto it:mp){ 
            ans= ans + thrill(it.second,v,k); 
        } 
         
        return ans; 
         
    } 
};
