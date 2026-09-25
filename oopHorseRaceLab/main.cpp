#include <iostream>
#include "horse.h"
#include <cstdlib>
#include <ctime>

void testHorse();

int main(){
	srand(time(NULL));
	std::cout << "Race Game" << std::endl;
	testHorse();
	return 0;
} // end main

void testHorse(){
	Horse h;
	bool keepGoing = true;
	while (keepGoing){
		h.advance();
		h.printLane();
		if (h.isWinner() == true){
			keepGoing = false;
		} // end if
	} // end while
} // end testHorse
