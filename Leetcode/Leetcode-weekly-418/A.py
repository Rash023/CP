from itertools import permutations

class Solution(object):
    def maxGoodNumber(self, nums):
        max_val = 0
        for perm in permutations(nums):
            binary_concat = ''.join(bin(num)[2:] for num in perm)
            decimal_val = int(binary_concat, 2)
            max_val = max(max_val, decimal_val)
        return max_val

if __name__ == "__main__":
    nums = list(map(int, input().split()))
    sol = Solution()
    result = sol.maxGoodNumber(nums)
    print(result)
