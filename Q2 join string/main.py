def join(str1, str2, p):
    if p == 0:
        return print(str1+str2)
    elif p == 1:
        return print(str2+str1)
    else:
        return print("wrong number, only type 0 or 1")

join("ABC", "CDE", 0)
join("ABC", "CDE", 1)
join("ABC", "CDE", 2)

"""
result:

ABCDEF
DEFABC
wrong number, only type 0 or 1
"""
