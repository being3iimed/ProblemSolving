class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        previousMap = {} # val : index

        for i, n in enumerate(nums):
            # check if the diff equals target minus n
            diff = target - n

            # if its in the HashMap the return a pairs of the indexes
            if diff in previousMap:
                return [previousMap[diff], i]

            # if we don't find the solution we are going to update the HashMap
            previousMap[n] = i
