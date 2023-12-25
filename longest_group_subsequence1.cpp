class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        int m = words.size();
        int k = groups.size();
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(i!=0){
    
                 if(groups[i]!=groups[i-1]){
                    v.push_back(i);
                }
                else{
                    continue;
                }
            }
            else{
               v.push_back(i);
            }
        }
        vector<string>vec;
        int sz=v.size();
        stack<int>st;
        int cnt=0;
        for(int i=0;i<sz;i++){
            vec.push_back(words[v[i]]);
        }
        return vec;

    }
};
