class Allocator {
public:
    int arr[1001];
    int n;
    Allocator(int n) {
        memset(arr,0,sizeof arr);
        this->n=n;
    }
    int dp[100001][2][2];
    int solve(string &s,int i,int prv,int final)
    {
        int mini = INT_MAX;
        if(i==s.size())
            return 0;
        
        if(dp[i][prv][final]!=-1)
            return dp[i][prv][final];
        

        if(prv!=s[i]-'0') 
            return dp[i][prv][final]=solve(s,i+1,s[i]-'0',final);
        
        if(final!=s[i]-'0')     
            mini=min(mini,solve(s,i+1,prv,s[i]-'0')); 
        
        mini=min(mini,1+solve(s,i+1,1-(s[i]-'0'),final));   
        return dp[i][prv][final]=mini;
    }
    
    int solve(string s,int i,int prv) 
    {
        int len = s.size();
        int cnt=0;
        for(int j=i;j<len;j++)
        {
            if(s[j]-'0'==prv)
            {
            
                prv=1-prv; 
                cnt++;
            }
            else
                prv=s[j]-'0';
        }
        return cnt;
    }
    
    int allocate(int size, int mID) {
        
        int begin=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                begin=i;
                while(i<n && arr[i]==0)
                    i++;
                
                if(i-begin>=size)
                   break;
                else
                    begin=-1;
                
                i--;
            }
        }
        
        if(begin==-1)
            return -1;
        
        for(int i=begin;i<begin + size;i++)
            arr[i]=mID;
        
        return begin;
    }
    
    int minFlips(string s) {
        

        
        
        int n=s.size();
        int mini = INT_MAX;
        int i=0;
        char ch=s[n-1];
        
        mini=min(solve(s,0,0),solve(s,0,1));
        while(i<n && ch!=s[i])
        {
          ch=s[i];
          i++;
        }
        
        if(i==n)
            return 0;
        
        int ans=min(solve(s,i,0),solve(s,i,1));        
        return min(mini,ans);
    }
    
    int free(int mID) {
        
        int begin = 0;
        int cnt = 0;
        while(n > begin)
        {
            if(arr[begin]==mID)
            {
                cnt++;
                arr[begin]=0;
            }
            begin++;
        }
        return cnt;
    }
};
/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->free(mID);
 */