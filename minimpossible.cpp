class Solution {
public:
    int minImpossibleOR(vector<int>& vec) {
        map<int, int> m;
             int n =31;
        for (auto& itr:vec) {
               m[itr]++;

        }

  for (int i = 0;i<n;i++) {

            if (!m[1 << i]) {

                int ans = 1 << i;
                           return ans;
            }

        }

        return -1;

    }
    
};