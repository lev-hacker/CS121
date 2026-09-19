#include <cstdlib>
#include <ctime>
#include <iostream>

int advance(int horseNum, int* horses); //moves the horse forward one spot
void printLane(int horseNum, int *horses); //prints one horse's lane
bool isWinner(int horseNum, int *horses); //checks to see if horse won or not, returns boolean

int advance(int horseNum, int* horses){
    int newPosition = 0;
    int coin = rand() % 2;
    newPosition = horses[horseNum] + coin;
    return newPosition;
} //ends advance

void printLane(int horseNum, int* horses){
    int position = horses[horseNum];
    int i = 0;
    for (i = 0; i<=15; i++){
	    if (i == position){
		    std::cout << horseNum;
	    }else{
		    std::cout << ".";
	    }
    }
    std::cout << std::endl;
} //ends printLane

bool isWinner(int horseNum, int* horses){
    bool result;
    int position = horses[horseNum];
    if (position >= 15){
        result = true;
    };
    return result;
} //ends isWinner

int main(){
	srand(time(NULL));
	int horses[5] = {0};
	bool keepGoing = true;
	while (keepGoing){
		int i = 0;
		for (i=0; i<=4; i++){
			int horseNum = i;
			horses[horseNum] = advance(horseNum, horses);
			printLane(horseNum, horses);
			if (isWinner(horseNum, horses) == true){
				keepGoing = false;
				std::cout << "Horse " << horseNum << " wins!" << std::endl;
			} //ends if
		} //ends for
		std::cout << "Press enter to continue" << std:: endl;
		std::cin.get();
	} //ends while
} //ends main
