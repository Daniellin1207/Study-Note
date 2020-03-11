# class Node:
#     def __init__(self,val):
#         self.val=val
#         self.next=None

# if __name__ == "__main__":
#     # new List
#     inList=[1,4,2,5,8,9]
#     targetNum=2
#     # 新建ListNode
#     head=Node(None)
#     tmp=head
#     for i in inList:
#         tmp.next=Node(i)
#         tmp=tmp.next
        
#     # 打印ListNode
#     tmp=head
#     while(tmp.next!=None):
#         print(tmp.val)
#         tmp=tmp.next
#     print(tmp.val)
#     print()
    
#     # 找到删除点 删除
#     tmp=head
#     while(tmp.next!=None):
#         print("tmp",tmp.val)
        
#         if(tmp.next.val==targetNum):
#             tmp.next=tmp.next.next
#             print("tmp",tmp.val)
#         tmp=tmp.next
#     print()
    
#     # 打印删除后的ListNode
#     tmp=head
#     while(tmp.next!=None):
#         print(tmp.val)
#         tmp=tmp.next
#     print(tmp.val) 

def use_logging(func):
    # print("helo")
    def wrappe(*args):
        print("{}".format(func.__name__))
        print(*args)
        return func()
    # print("hi")
    return wrappe

@use_logging
def foo(*args):
    print("i am foo")
    # print(*args)

# foo(1,2,3)

def fu(**kargs):
    print(kargs.keys())
    print(kargs.values())
    print(kargs)

fu(hello="nihao",hi="ffff")