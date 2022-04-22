class Solution:           
    def searchInsert(self, nums, target):
        start = 0
        end = len(nums)-1 ## len is total length!

        while start <= end:
            mid = (start + end)//2
            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                end = mid - 1
            else:
                start = mid + 1
        return start