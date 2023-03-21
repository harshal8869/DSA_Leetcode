#define ll long long int
class Solution {
public:
    long long findScore(vector<int>& nums) {
        ll cnt=0;
   //    ll n = nums.size();
        map<ll, set<ll>>mps;
        for(ll i=0;i<nums.size();i++){
            mps[nums[i]].insert(i);
        }
        
         while(mps.size()!= 0){
            auto itr = mps.begin();
              ll fr = itr->first;
             
            ll ps = *(itr->second.begin());
                itr->second.erase(ps);
             
            if( mps[fr].size() == 0){
                mps.erase(fr);
            }
               
            cnt = cnt + fr;
            
            if(nums.size() - 1 > ps){
                 ll x = nums[ps+1];
     
                mps[x].erase(ps+1);
                
                   if(mps[x].size() == 0){
                    mps.erase(x);
                }
            }
         
            
            if(ps > 0){
                   ll x = nums[ps-1];
                  
                mps[x].erase(ps-1);
                
                if(mps[x].size() == 0){
                    mps.erase(x);
                }
            }
        }
        
        return cnt;
    }
};