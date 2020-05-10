import os

print("hello")
a=5
print(a)
a=9+10
print(a)

def func(a,b):
    c=a*b
    return c

# print(func())

class mem():
    def hello(self):
        print("hello")
        

price=10
num=7
total=func(price,num)
print("总价",total)

print(os.listdir())
# peo=mem()
# peo.hello()

import numpy as np
import matplotlib.pyplot as plt
 
x=[0,1]
y=[0,1]
plt.figure()
plt.plot(x,y)
plt.show()
# plt.savefig("easyplot.jpg")