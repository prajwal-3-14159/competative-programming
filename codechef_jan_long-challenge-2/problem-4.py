# -*- coding: utf-8 -*-
"""
Created on Mon Jan 17 14:43:29 2022

@author: prajw
"""

n = int(input())

pow_2 = []

for i in range(22):
    np2 = 2**i
    pow_2.append(np2)
    
    
def answer(list1):
    n1 = sum(list1)
    if (n1 in pow_2):
        print(0)
    else:
        print(1)
        for i in pow_2:
            if (i>n1):
                n2 = i
                break
        n3 = n2 - n1
        n4 = min(list1)
        n5 = n3 / n4
        print(1," ",n5)
        for j in range(len(list1)):
            if (list1[j] == n4):
                n6 = j
                break
        print(n6)
        


for i in range(n):
    X = int(input())
    list1 = list(map(int, input().split()))
    
     
