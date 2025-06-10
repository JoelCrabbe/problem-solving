class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}
        for i in range(len(nums)):
            need = target - nums[i]
            if need in seen:
                return [i,seen[need]]
            seen[nums[i]] = i




solution = Solution()
answer = solution.twoSum([2,7,11,15],9)
print(answer)

        
