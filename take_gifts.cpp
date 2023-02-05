class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>p;
           long long n=gifts.size();
        long long cnt = 0;
        for(auto itr: gifts){
            p.push(itr);
        }
        for(int i=0;i<k;i++){
            long long t = sqrt(p.top());
            p.push(t);
            p.pop();  
        }
        while(p.empty()==0){
        cnt = cnt + p.top();
            p.pop();
        }
        return cnt;
    }
};