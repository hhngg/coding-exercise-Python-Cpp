"""
Write a recursive function called AddPos that take in an array of integers intarr
and an integer parameter size that holds the number of values in intarr.
The function sums up all positive values in intarr and return it.
For example AddPos ({-1, 1, -1, 1, -1}, 5) returns 2 (1+1).
"""

def addpos(x):
    a = 0
    n = list(x)
    for i in n:
        if i > 0:
            a = a + i
        else:
            continue
    return print(a)

addpos([1, 10, -1, 1, 0])
#return 12
