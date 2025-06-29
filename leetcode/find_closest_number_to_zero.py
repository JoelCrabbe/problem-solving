class Solution:
    def findClosestNumber(self, nums: list[int]) -> int:
        closest = nums[0]
        for i in range(1, len(nums)):
            distance = abs(nums[i])
            if distance == abs(closest):
                closest = max(closest, nums[i])
            elif distance < abs(closest):
                closest = nums[i]

        return closest
