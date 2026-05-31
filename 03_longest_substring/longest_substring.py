"""
    Given a string 's' find the length of the longest substring without duplicate characters
"""
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        window = set()
        left = 0
        length: int = 0
        for right in range(len(s)):
            while s[right] in window:
                window.remove(s[left])
                left+=1
            window.add(s[right])
            length = max(length, right-left+1)
        return length

    
s: str = input("Ingresa cadena:\n")
solver = Solution()
length = solver.lengthOfLongestSubstring(s)
print(length)
