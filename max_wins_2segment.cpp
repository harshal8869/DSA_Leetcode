class Solution {
public:
    int maximizeWin(vector<int>&vec, int k) {
        int cnt = 0;
           int n = vec.size();
        vector<int>v(n);
        for (int i=0;i<n;i++)
        {
            int op = lower_bound(vec.begin(), vec.end(), vec[i] - k) - vec.begin();
        v[i] = 1 + i - op;
        }
        vector<int>v2 = v;
        for (int i=1;i<n;i++){
            v2[i] = max(v2[i-1],v2[i]);
        }
    
        for (int i=0;i<n;i++)
        {
            int op = lower_bound(vec.begin(), vec.end(), vec[i] - k) - vec.begin();
       
            if(op!=0){
                v[i] = v[i] +  v2[op- 1];
            }
            cnt = max(v[i],cnt);
        }
        return cnt;

    }
};