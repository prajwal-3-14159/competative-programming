# -*- coding: utf-8 -*-
"""
Created on Mon Jan 17 01:09:32 2022

@author: prajw
"""

import numpy as np

n = int(input())

def answer(arr1, arr2):
    sum = 0
    n = 0
    for i in arr:
        n += 1
        sum += i
        if (sum >= arr1[1]):
            return n
    return -1
    
    

for i in range(n):
    str1 = input()
    str2 = input()
    arr1 = np.array(list(map(int, str1.split())))
    arr2 = np.sort(np.array(list(map(int, str2.split()))))[::-1]
    print(answer(arr1, arr2))
    
    