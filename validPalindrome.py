class Solution:
    def isPalindrome(self, s: str) -> bool:
        str=""
        rev = ""
        for c in s:
            if c.isalnum():
                str+= c.lower()
                
        i = len(str)-1
        while(i>=0):
            rev+=str[i]
            i=i-1
            
            
        if str==rev:
            return True
        else:
            return False
            
                
