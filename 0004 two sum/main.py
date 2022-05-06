def number(array, target):
    for i in array:
        for j in array:
            if i + j == target:
                return [i, j]
            else:
                continue

def findplace(array, target_array, place):
    for i in range(len(array)):
        if array[i] == target_array[place]:
            return i
        else:
            continue

def twosum(array, target):
    try:
        target_array = number(array, target)
        first_element = findplace(array, target_array, 0)
        second_element = findplace(array, target_array, 1)
        print("Input: num =", array, ", target = ",target)
        print("Output: ",[first_element, second_element])
    except:
        print("sum error, place type correct sum number")

if __name__ == "__main__":
    twosum([1, 4, 7, 10, 11, 12], 17)

    
#####################################################
#Input: num = [1, 4, 7, 10, 11, 12] , target =  17  #
#Output:  [2, 3]                                    #
#####################################################
