class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        prefix = ""
        for i in range(len(strs[0])):
            prefix += strs[0][i]
            for word in strs:
                if not word.startswith(prefix):
                    return prefix[:-1]
        
        return prefix
                
