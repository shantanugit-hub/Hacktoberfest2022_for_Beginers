class Solution(object):
    def partitionString(self, s):
        
        mp = set()
        count=0
        for i in s:
            if i not in mp:
                mp.add(i)
            else:
                count+=1
                mp.clear()
                mp.add(i)
        if mp:
            count+=1
            
        return count
