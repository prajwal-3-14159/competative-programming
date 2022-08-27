# -*- coding: utf-8 -*-
"""
Created on Mon Jan 17 10:25:24 2022

@author: prajw
"""

n = int(input())

for i in range(n):
    X = int(input())
    list1 = list(map(int, input().split()))
    list2 = list(map(int, input().split()))
    list3 = list(map(int, input().split()))
    n1 = list2[0] + list3[0] + list3[1]
    n2 = list1[1] + list1[2] + list2[2]
    if (n1>n2):
        print(n1)
    else:
        print(n2)
     
