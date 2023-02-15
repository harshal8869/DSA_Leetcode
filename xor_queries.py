
class Solution:
    def substringXorQueries(self, s: str, queries: List[List[int]]) -> List[List[int]]:
        v = []
        i = 0
        for x,y in queries:
            cnt = y ^ x
            dec = bin(cnt)[2:]
            if dec not in s:
                v.append([-1,-1])
            else:
                v.append([s.index(dec) , len(dec) + s.index(dec) -1])
        if v:
            return v
        else:
            return [[-1,-1]]
           
