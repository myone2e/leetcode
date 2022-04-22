class Solution:
    
    def generate(self, numRows):
        result = [[1], [1,1]]
        if numRows == 1:
            result.pop()
            return result
        elif numRows == 2:
            return result

        for _ in range(numRows-2):
            lastLen = len(result[-1])
            temp = []
            for i in range(lastLen-1):
                temp.append(result[-1][i] + result[-1][i+1])
            temp.append(1)
            temp.insert(0, 1)
            result.append(temp)
        return result

    
            
    