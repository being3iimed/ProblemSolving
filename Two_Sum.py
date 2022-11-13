class Solution(object):
    def twoSum(self, nums, target):
        for idx, val in enumerate(nums):
            #  enumerate take the index and the value of nums
            if target - val in nums[idx + 1:]:
                arr = [idx, nums[idx + 1:].index(target - val) + (idx + 1)]
                # array contain the indexes of he values that make that target 
                print(arr)
                # print to shows the output 
                return arr

#some tests
Object = Solution()
n = [2,7,11,15]
t = 9
Object.twoSum(n, t)

n1 = [2,8,5,15]
t1 = 20
Object.twoSum(n1, t1)