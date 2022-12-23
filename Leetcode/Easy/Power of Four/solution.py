class Solution(object):
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        i = 0
        while (pow(4,i) <= n and n != 0):
            if (pow(4,i) == n):
                return True
            i+=1
        return False