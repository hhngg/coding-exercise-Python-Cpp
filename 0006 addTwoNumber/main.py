def combine_link(num):
    sum = 0
    link_order = 0
    for i in num:
        i = i*(10**link_order)
        link_order = link_order + 1
        sum = sum + i
    return sum

def addTwoNumbers(num1, num2):
    num1 = combine_link(num1)
    num2 = combine_link(num2)
    sum = num1 + num2
    result_number = str(sum)[::-1]
    result = []
    for i in result_number:
        i = int(i)
        result.append(i)
    return print(result)

addTwoNumbers([9,9,9,9,9,9,9],[9,9,9,9])
