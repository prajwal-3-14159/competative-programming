# -*- coding: utf-8 -*-
"""
Created on Sun Jan 16 14:05:05 2022

@author: prajw
"""

n = int(input())

def results(inp1, inp2):
    s1 = sum(inp1)
    s2 = sum(inp2)
    if (s1 > s2):
        print("DRAGON")
    elif (s2 > s1):
        print("SLOTH")
    elif (s1 == s2):
        if (inp1[0] > inp2[0]):
            print("DRAGON")
        elif (inp1[0] < inp2[0]):
            print('SLOTH')
        elif (inp1[0] == inp2[0]):
            if (inp1[1] > inp2[1]):
                print("DRAGON")
            elif (inp1[1] < inp2[1]):
                print('SLOTH')
            elif (inp1[1] == inp2[1]):
                print('TIE')
    

for  i in range(n):
    in_line1 = input()
    in_line2 = input()
    inp1 = list(map(int, in_line1.split()))
    inp2 = list(map(int, in_line2.split()))
    results(inp1, inp2)