class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        new = []

        if x<0:
            return False
        while x>0:
            digit = x%10
            x = x // 10
            new.append(digit)
        return new == new[::-1]
      
    def isPalindrome2(self, x):
        """
        :type x: int
        :rtype: bool
        """
        s = str(x)
        left = 0
        right = len(s)-1
        while(left<=right):
            if s[left] != s[right]:
                return False
            left+=1
            right-=1
        return True

        
        
        
        
