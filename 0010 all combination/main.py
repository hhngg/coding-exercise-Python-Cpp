def f(item, s=""):
    if len(s) < len(item):
        for i in item:
            f(item, s+i)
    else:
        print(s)

f("123")
