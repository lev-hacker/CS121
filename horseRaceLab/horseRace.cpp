# Variables
```
horses --> array of all horses
horseNum --> represents one horse, helps point to a scpecific part of the horses array

#include <cstdlib>
#include <ctime>
#include <iostream>

void advance(int horseNum, int* horses); //moves the horse forward one spot
void printLane(int horseNum, int *horses); //prints one horse's lane
bool isWinner(int horseNum, int *horses); //checks to see if horse won or not, returns boolean

main(){
    int horses[5] = {0};
    keepGoing = true;
    while(keepGoing){
	    for(i = 0, i <= 5, i++){
		    horseNum = i;
		    advance();
		    printLane();
		    if isWinner() = true{
			    keepGoing = false;
		    }
		    std::cout << "Press ENTER to continue" << std::endl;
		    cin >> 
            ask user for input to start next turn
	    } //ends for
    } //ends wile
} //ends main

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
