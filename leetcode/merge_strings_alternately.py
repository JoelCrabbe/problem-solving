class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans = ""
        rest = ""
        if len(word1) > len(word2):
            rest = word1[len(word2):]
        elif len(word2) > len(word1):
            rest = word2[len(word1):]
        for item in zip(word1, word2):
            ans += item[0]
            ans += item[1]
        ans += rest
        return ans