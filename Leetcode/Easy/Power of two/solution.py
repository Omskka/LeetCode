class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        i = 0
        while (pow(2,i) <= n and n != 0):
            if (pow(2,i) == n):
                return True
            i+=1
        return False