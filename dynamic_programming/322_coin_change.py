class Solution:
    def coinChange(self, coins, amount):
        if amount == 0:
            return 0
    
        d = [10001] * (amount+1) # input max = 10**4 = 10,000
        
        d[0] = 0
        
        for i in range(len(coins)):
            for j in range(coins[i], amount + 1): # ex) 500 ~ 10001 
                if d[j - coins[i]] != 10001:
                    d[j] = min(d[j], d[j - coins[i]] + 1) # (i - k)원을 만드는 방법이 존재하는 경우

        if d[amount] == 10001:
            return -1
        
        else:
            return d[amount]