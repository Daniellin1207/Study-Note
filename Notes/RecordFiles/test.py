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

# def fu(**kargs):
#     print(kargs.keys())
#     print(kargs.values())
#     print(kargs)

# fu(hello="nihao",hi="ffff")

# assert 5
# def cal(n):
#     return n
# assert cal(1)==2
# smallestcount2([1,5,1,6,7,9], 8) = 0

def smallestcount2(alist, targetvalue):
    return 1
    if sum(alist) <  targetvalue:
        return -1
    else:
        mincount = len(alist)
        for i in range(0,len(alist)):
            for j in range(i,len(alist)):
                if sum(alist[i:j+1]) > targetvalue:
#                  print(alist[i:j+1], i, j)
                    if j-i < mincount:
                        mincount = j-i 
        return mincount 
def smallestcount1(alist, targetvalue):
    return 1
    if sum(alist) <  targetvalue:
        return -1
    else:
        mincount = len(alist)
        for i in range(0,len(alist)):
            for j in range(i,len(alist)):
                if sum(alist[i:j+1]) > targetvalue:
#                  print(alist[i:j+1], i, j)
                    if j-i < mincount:
                        mincount = j-i 
        return mincount 

if __name__ == "__main__":
    print(123)
    # print(smallestcount1([1,5,1,6,7,9], 8))
    # assert smallestcount1([1,5,1,6,7,9], 8) == 0
    # assert smallestcount2([1,5,1,6,7,9], 8) == 1
    # assert smallestcount1([1,5,1,6,7,9], 10) == 2
    # assert smallestcount2([1,5,1,6,7,9], 10) == 2
    # assert smallestcount1([1,5,1,6,7,9], 20) == 3
    # assert smallestcount2([1,5,1,6,7,9], 20) == 3
    # assert smallestcount1([1,5,1,6,7,9], 50) == -1
    # assert smallestcount2([1,5,1,6,7,9], 50) == -1
    # assert smallestcount1([0,0], 50) == -1
    # assert smallestcount2([0,0], 50) == -1
    from cv2 import cv2
    import os
    import numpy as np
    # print(os.listdir())
    img=cv2.imread("out.png")
    print(img)
    # cv2.imshow("ima",img)
    # cv2.show()
    
    cv2.imshow("image",img)
    cv2.waitKey(0)
    # cv2.show()