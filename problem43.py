"""
Implement a stack that has the following methods: 
push(val), which pushes an element onto the stack
pop(), which pops off and returns the topmost element of the stack. If there are no elements in the stack,
        then it should throw an error or return null.
max(), which returns the maximum value in the stack currently.
 If there are no elements in the stack, then it should throw an error or return null.
Each method should run in constant time.
"""
class Stack:
    def __init__(self) -> None:
        self.stack=[]
        self.top = None

    def isEmpty(self) -> bool: # method to check if the stack is empty or not
        if self.stack==[]:
            return True
        else:
            return False

    def push(self,val) -> None: # push method to push elements to stack
        self.stack.append(val)
        self.top = len(self.stack)-1

    def pop(self) -> int: # pop to return the topmost element of the stack
        if self.isEmpty(): # if stack is empty return none
            return 
        else:
            i=self.stack[self.top] 
            del self.stack[self.top]
            self.top-=1
        return i  # return the top element

    def max(self) -> int: 
        if self.isEmpty():
            return
        return max(self.stack)
#driver code
stk=Stack()
stk.push(5)
stk.push(3)
stk.push(2)
print(stk.pop())
print(stk.max())
print(stk.pop())
print(stk.pop())
print(stk.pop())


