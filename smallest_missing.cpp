#define ll long long
class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int v) {
         ll n = nums.size();
        ll ans = 0;
        unordered_map<ll,ll>mp;
       
        for(int i=0;i<n;i++){
            mp[(nums[i]%v + v) % v]++;
        }
        for(int i=0;i<n;i++){
            if(mp[i%v] > 0){
                ans++;
                mp[i%v]--;
                
            }
            else{
                break;
            }
        }
        return ans;
    }
};