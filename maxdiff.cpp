class Solution {
public:
    int minMaxDifference(int num) {
         int mini= num;
    int maxi= num;
        int n = 10;
    string num_s = to_string(num);
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            string new_num_s = num_s;
            replace(new_num_s.begin(), new_num_s.end(), '0' + j, '0' + i);
            int m = stoi(new_num_s);
               if ((i > 0 || j > 0) && mini > m) {
                mini = m;
            }
            if (m > maxi) {
                maxi = m;
            }
   
        }
    }
        int ans = maxi - mini;
    return ans;
    }
};