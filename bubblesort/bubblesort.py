arr = [1, 7, 3, 2, 4, 11, 10]
for i in range(len(arr)-1):
    control = True
    for j in range(len(arr)-i-1):
        if arr[j] > arr[j+1]:
            temp = arr[j]
            arr[j] = arr[j+1]
            arr[j+1] = temp
            control = False
    if control:
        break
for val in arr:
    print(val)

