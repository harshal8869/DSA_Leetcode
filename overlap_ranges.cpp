class Solution {
public:
     long long mod =1e9 + 7;
    int exponent(int a,int b,int c){
       
         if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
     long long cnt =exponent(a,b/2,c);
cnt = cnt * cnt;
        cnt = cnt % c;
   
    if(b%2!=0){
    cnt = cnt * a;
        cnt = cnt % c;
    }
    return cnt;
}
    int countWays(vector<vector<int>>& vec) {
       
        vector<vector<int>>v;
        int n = v.size();
        sort(vec.begin(),vec.end());
        for(auto &itr: vec){
            if(v.size()==0 || itr[0] > v.back()[1]){
                v.push_back(itr);
            }
            else{
                v.back()[1]=max(itr[1] , v.back()[1]);
            }
        }
        int len = v.size();
        return exponent(2,len,1e9 + 7);
        
    }
};
