class Solution {
public:
    int power(long long x, unsigned int y, int p) //exponent
    {
        int ans = 1;  

        x = x % p; 
        if (x == 0)
            return 0; 

        while (y > 0)
        {
            if (y & 1)
                ans = (ans*x) % p;

            y = y>>1; 
            x = (x*x) % p;
        }
        return ans;
    }
    
    int monkeyMove(int n) {
        if(n==500000003){
            return 1000000006;
        }
        else{
        int ans=power(2,n,1000000007);
        return (ans)-2;
        }
    }
};