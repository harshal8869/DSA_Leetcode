class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        int m = words.size();
        int k = groups.size();
        int cnt=0;
        
          vector<int>v(n, 1);
    vector<int>v2(n, 1);
        int ans=0;
        unordered_map<int,int>mp;
    vector<vector<int>>vec(n + 2 , vector<int>(n + 2));
for(int i=0;i<n;i++){
    int a=0;
    a = max(ans,cnt);
}
    for(int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            int sub = 0;
            if (words[i].size() == words[j].size()) {
                for(int k=0;k<words[i].size();k++) {
                    sub = sub + (words[j][k] != words[i][k]);
                }
                vec[i][j] = sub;
            }
        }
    }
        int c=-1;
        int res=-1;

    for (int i=0;i<n;i++) {
        v2[i] = i; 
        for (int j=0;j<i;j++) {
            if ((groups[i] != groups[j] && words[i].size() == words[j].size() && vec[i][j] == 1 ) &&  v[j] > v[i] - 1) {
               v2[i] = j;
                 v[i] = v[j] + 1;
            }
        }
    }

    for (int i=0;i<n;i++) {
        if (v[i] > res) {
            c=i;
            res = v[i];
          //  li = i;
        }
    }

    vector<string>vecc;
    vecc.push_back(words[c]);

    while(v2[c] != c) { 
        c = v2[c];
        vecc.push_back(words[c]);
    }

    reverse(vecc.begin(),vecc.end());

    return vecc;
    }
};



