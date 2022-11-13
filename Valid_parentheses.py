class Solution(object):
    def isValid(self, s)-> bool:
        stack = []
        CloseOpen = {")":"(","}":"{","]":"["} 
        #hashmap 
        for c in s: 
            if c in CloseOpen:
                # the char is in the hashmap 
                if stack and stack[-1] == CloseOpen[c]:
                # stack not empty
                # stack[-1] is the lattest added char to the string
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
        return True if not stack else False
        #in the end if stack is emtpy return true
        #else return false

#some tests
Object = Solution()
S = "{{([])}}"
print(Object.isValid(S))

q = "{{(])}"
print(Object.isValid(q))
