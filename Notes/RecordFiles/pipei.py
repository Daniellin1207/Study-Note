dic=\
{
    1:[2,3,4,5,6,7,8,9],
    5:[1,2,3,4,6,7,8,9],
    2:[1,3,4,6,7,8,9,10]
}

dic_match_nums={
    
}

dic_match={
    
}

max_match_num=8
match_list=[]

import random
from pprint import pprint
import xlrd
import traceback
import sys

def get_dict(excel_name):
    workbook = xlrd.open_workbook(u'pipei.xlsx')
    sheet_names= workbook.sheet_names()
    # print(sheet_names)
    # for sheet_name in sheet_names[:1]:
    sheet_name=sheet_names[0]
    sheet2 = workbook.sheet_by_name(sheet_name)
    # print(sheet_name)
    i,adi=1,0
    try:
        while(i<400):
            row=sheet2.row_values(i)
            if row[0]=='男':
                adi=200
            elif row[0]=='女':
                adi=0
            else:
                adi=10000
                print(i,"性别有问题")
            # print(row[2:])
            for k in row[2:]:
                if type(k)==type('str'):
                    if k=='(空)':
                        break
                    k.replace('-','')
                dic[adi+int(row[1].replace('-',''))%200].append(int(k))
            i+=1
    except:
        print(sys.exc_info()[0])
        print(row)
        print(i,"hi")
    # i+=1
    # try:
    #     row=sheet2.row_values(i)
    #     if row[0]=='男':
    #         adi=200
    #     else:
    #         adi=0
    #     dic[adi+row[1]%200]=[k for k in row[2:]]
    #     i+=1
    # except:
    #     print(i,"行出现错误")
    #     return 
        
    # print(sheet2.row_values(100))
    # rows = sheet2.row_values(3)# 获取第四行内容
    # cols = sheet2.col_values(1) # 获取第二列内容
    # print(rows)
    # print(cols)
    pprint(dic)
    print(len(dic.keys()))

def double_mat(user):
    mat_usrs=dic[user]
    # print(list(dic.keys()))
    for m in mat_usrs:
        if m not in dic.keys():
            continue
            print(user,"对象",m,"未在统计库")
        else:
            if user in dic[m]:
                print(user,"match",m)
                if user not in dic_match_nums.keys():
                    dic_match_nums[user]=1
                else:
                    dic_match_nums[user]+=1
                if (min(m,user),max(m,user)) in match_list:
                    return
                else:
                    match_list.append((min(m,user),max(m,user)))
    
def single_mat(n): # 匹配相同人数
    user=int(random.random()*400)+1
    if user not in dic.keys():
        return 
    if dic_match_nums[user]>=max_match_num: # 避免欧皇体质
        return 
    else:
        # if dic_match_nums[k]<cir_nums:

        mat_usrs=dic[user]
        for m in mat_usrs:
            if m not in dic.keys(): # 查无此人
                continue
            if dic_match_nums[m]>=max_match_num: # 如果对方多于平均数 # 也跳过？
                continue
            print(user,"match",m)
            dic_match_nums[user]+=1
            if m not in dic_match_nums.keys():
                dic_match_nums[m]=1
            else:
                dic_match_nums[m]+=1
            return # 换人福利时间？
    n+=1
    
def random_match():
    
    pass

if __name__ == "__main__":
    # for i in list(dic.keys()):
    #     double_mat(i)
    
    # n=0
    # while(True):
    #     single_mat(n)
    #     if n>5000:
    #         break
    # pprint(dic)
    # pprint(dic_match_nums)
    # print(random.random())
    
    get_dict("pipei.xlsx")