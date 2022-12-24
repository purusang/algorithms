def subsetsum(arr, subset, startIndex, target, elementIndex):
    # input()
    if(sum(subset) == target):
        print("Solution:", subset)
        return True
    if startIndex >= len(arr) or sum(subset) > target:
        return False
    # print(subset, sum(subset), arr[startIndex], startIndex)
    
        # del subset[elementIndex]
    subset.append(arr[startIndex])
    subsetsum(arr, subset, startIndex+1, target, elementIndex)
    subset.pop()
    subsetsum(arr, subset , startIndex+1, target, elementIndex)

arr = [1, 3, 5, 2]
target = 6
subset = list()
subsetsum(arr, subset, 0, target, 0)




