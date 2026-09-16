# Goal
Horse game yipee

# Variables
```
horses --> array of all horses
horseNum --> represents one horse, helps point to a scpecific part of the horses array
```
# Functions
```
advance() --> moves the horse forward one spot
printLane() --> prints one horse's lane
isWinner() --> checks to see if the horse won or not
```
# Algorithm
```
#include <cstdlib>
#include <ctime>
#include <iostream>

void advance(int horseNum, int* horses)
void printLane(int horseNum, int *horses)
bool isWinner(int horseNum, int *horses)

main(){
    horses = array of 5 0 values
    keepGoing = true
    
    while keepGoing:
        run through each horse in array with for loop
            advance the horse
            print its lane
            check if it won
                set keepGoing to false if won = true
            ask user for input to start next turn
}

advance(int horseNum, int* horses){
    roll a 0 or 1 value at random, assign to coin
    add coint to horse position value in array horses using horseNum
}

printLane(int horseNum, int* horses){
    int postion = horse's position value from array
    int beforeHorse = position - 1
    int afterHorse = 15 - position
    cout srting(beforeHorse, "."), horseNum, string(afterHorse, "."), endl
}

isWinner(int horseNum, int* horses){
    bool result
    int position = horse's position value from array
    if position > 15:
        result = true
    return result
}
```
