# https://cses.fi/problemset/task/1621
 
n = int(input())
 
arr = [int(x) for x in input().split()]
 
arr = set(arr)
 
print(len(arr))