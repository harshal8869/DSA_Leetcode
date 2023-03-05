class Solution {
public:
    int splitNum(int num) {
        string s = to_string(num);
        int n = s.size();
        string ans1="";
        string ans2="";
        sort(s.begin(), s.end());
         for(int i=0;i<n;i+=2){
             ans1 = ans1 + s[i];
            
    }
           int res = stoi(ans1);
        for(int i=1;i<n;i+=2){
        ans2 = ans2 + s[i];
        }
        int cnt = stoi(ans2);
     
        
        int ans = cnt + res;
        
        return ans;
    }
};