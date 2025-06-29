class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        map = {}
        for index, char in enumerate(t):
            map[char] = index

        list = []
        for char in s:
            if char not in map:
                return False
            list.append(map[char])
        
        return len(list) == 1
        
                  


solution = Solution()
s = "aaaaaa"
t = "bbaaaa"
print(solution.isSubsequence(s, t)) # should be false
# find positions of all chars of s in t, then check if increasing list