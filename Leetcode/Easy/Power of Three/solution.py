class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        i = 0
        while (pow(3,i) <= n and n != 0):
            if (pow(3,i) == n):
                return True
            i+=1
        return False