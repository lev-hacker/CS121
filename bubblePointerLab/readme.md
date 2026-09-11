# Goal
Make a sorting algorithm

# Variables
```
values --> array of integers to sort  
MAX --> length of array, 9
```
# Functions
```
printValues --> prints all chars within values  
sort --> sorts values array using bubble sorting algorithm
```
# Algorithm
Summary of main: define these 3 functions, test the swap with x and y variables, sort the array, then print the sorted array
```
sort(values)
    create i and j --> both get 0
    for i from 0 to MAX - 1, i++:
        for j from 0 to MAX - 1:
            if values[j] > values[j+1]:
                swap(values[j], values[j+1])
                printValues(values) // this is for testing, will delete when done

swap(*a, *b)
    temp = value at a
    value at a = value at b
    value at b = temp

printValues(values)
    printf("[")
    for i from 0 to MAX, i++:
        printf("%d", values[i])
    printf("]")
    printf("\n")
```
