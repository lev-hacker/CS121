#include <iostream>
#include <cstdlib>
#include "horse.h"
#include "race.h"

Race::Race(){
	NUM_HORSES = 5;
	TRACK_LENGTH = 15;
	horses[Race::NUM_HORSES];
	for (int i = 0; i < Race::NUM_HORSES; i++){
		Horse::init(i, TRACK_LENGTH);
	} // ends for
} // ends Race

int Race::start(){
	bool keepGoing = true;
	while (keepGoing){
		for (int i = 0; i < Race::NUM_HORSES; i++){
			Horse::advance();
			Horse::printLane();
			if (Horse::isWinner == true){
				keepGoing = false;
			} // ends if
		} // ends for
	} // ends while
	return 0;
}
