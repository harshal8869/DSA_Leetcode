class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int i=0;
        int n=words.size();
        int m = queries.size();
        vector<int>v1(n);
        vector<int>v2(n);
         vector<int>vec(m,0);
        for(auto it : words){
            int idx =it.size()-1;
if((it[idx]=='a' || it[idx]=='e' || it[idx]=='i' || it[idx]=='o' || it[idx]=='u') && (it[0]=='a' || it[0]=='e' || it[0]=='i' || it[0]=='o'|| it[0]=='u')){
                v1[i++]=1;
}
            else{
                v1[i++]=0;
            }
        }
        v2[0] = v1[0];
        for(int i=1; i<n; i++){
            v2[i] = v1[i] + v2[i-1];
        }
       
        for(int i=0; i<m; i++){
            int first = queries[i][0];
            int last = queries[i][1];
            
            if(first!=0) {
                
                vec[i] = v2[last] - v2[first-1];
            }
            else {
                vec[i] = v2[last];
            }
        }
        return vec;
    }
    
};
