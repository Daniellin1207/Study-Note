dic=\
{
    1:[2,3,4,5,6,7,8,9],
    5:[1,2,3,4,6,7,8,9],
    2:[1,3,4,6,7,8,9,10]
}

import random

def double_mat(user):
    mat_usr=dic[user]
    # print(list(dic.keys()))
    for m in mat_usr:
        if m not in list(dic.keys()):
            continue
            print(user,"对象",m,"未在统计库")
        else:
            if user in dic[m]:
                print(user,"match",m)
    
def single_mat(user):
    pass
if __name__ == "__main__":
    for i in list(dic.keys()):
        double_mat(i)
    
    print(random.random())