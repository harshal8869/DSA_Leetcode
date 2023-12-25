class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        int cnt=0;
        stack<int>st;
        vector<int>v;
        int sz=st.size();
   map<int,int>mp;
    for(const auto &it : words) {
        if(it == "prev") {
            if(cnt >st.size() || cnt == st.size()) {
                v.push_back(-1);
            }
            else {
                vector<int>vec;
                while (!st.empty()) {
                    vec.push_back(st.top());
                    st.pop();
                }
                v.push_back(vec[cnt]);
                int len = vec.size();
                for (int i=len-1;i>=0;i--) {
                    st.push(vec[i]);
                }
            }
          cnt++;
        }
        else {
            int con =stoi(it);
            st.push(con);
            cnt = 0;
        }
    }

    return v;
    }
};
