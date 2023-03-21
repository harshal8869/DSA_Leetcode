class Solution {
    int arr[8] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int brr[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
  int cnt=0;
         queue<pair<int,int>>pq;
        pq.push({0, 0});
        int n=grid.size();
        int n2 = grid[0].size();
       // int ans = 0;
        while(!pq.empty())
        {
                  int ans = 0;
          int sec = pq.front().second;
            int one = pq.front().first;
           
        pq.pop();
            int len = 8;
            for(int i=0;i<len;i++)
            {
                int cnt2 = one + arr[i];
                int cnt3 = sec + brr[i];
                if(cnt2>=0 && cnt3>=0 && n > cnt2  && n2 > cnt3 && grid[cnt2][cnt3]==cnt+1)
                {
                    one = cnt2, sec = cnt3;
                    ans = 1;
                    break;
                }
            }
            if(ans!=0)
                pq.push({one,sec});
            cnt++;
        }
        if(cnt==(n*n2))
            return 1;
        else
            return 0;
    }
};

