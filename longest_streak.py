class Solution:
    def longestSquareStreak(self, nums: List[int]) -> int:
        grid=sorted(nums,reverse=True)
        m=defaultdict(int)
        ans=0
        for i in grid:
            if i**2 in m:
                m[i]=m[i**2]+1
            else:
                m[i]=1
        ans = 0
        for i in m:
            ans=max(ans,m[i])
        return -1 if ans == 1 else ans
