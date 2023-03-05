class Solution {
public:
    long long coloredCells(long long n) {
        long long ans = n * n;
        long long ans2 = (n-1) * (n-1);
        return ans + ans2;
    }
};