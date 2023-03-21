class Solution {
public:
    vector<int> evenOddBit(int n) {
        int ans = 0;
        int cnt1=0;
           int cnt2=0;
        while(n>=1){
            if(n%2!=0){
                if(ans%2==1){
                   cnt1++;
                } 
                else{
                    cnt2++;
                }
            }
            n = n / 2;
            ans++;
        }
        return {cnt2,cnt1};
    }
};