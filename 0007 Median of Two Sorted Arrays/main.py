def findMedianSortedArrays(list1, list2):
    list = sorted(list1 + list2)
    n = len(list)
    if n%2 == 0:
        median1 = list[n//2]
        median2 = list[(n-1)//2]
        median = (median1+median2)/2
    else:
        median = list[n//2]

    return print(f" List: {list}\n Median: {median:.5f}")

findMedianSortedArrays([1,3],[2])
findMedianSortedArrays([1,3],[2,4])
