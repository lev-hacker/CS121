#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

int main(){
	// ***Variables
	char userName[20];
	int turnCount = 0;
	int guess = -999;
	int keepGoing = true;
	
	//Random Number Generation
	srand(time(NULL)); //seed
	int correct = (rand() % 100) + 1;

	// ***Greeting
	printf("What is your name? ");
	scanf("%s", userName);
	printf("Hello, %s! Let's play a game!\n", userName);
	printf("I'm thinking of a number between 1 and 100\n");

	// ***Guessing
	while(keepGoing){
		turnCount++;//incrament count
		printf("Turn %d) Please enter a number ", turnCount);
		scanf("%d", &guess);

		//check guess
		if (guess < correct){
			printf("Too low!\n");
		}//end if
		if (guess > correct){
			printf ("Too high!\n");
		}//end if
		if (guess == correct){
			printf("Correct!\n");
			keepGoing = false;
		}//end if
	} //end while
	
	// ***Evalueate Performance
	if (turnCount < 7){
		printf("Awesome! Great job, %s!\n", userName);
	}//end if
	if (turnCount > 7){
		printf("Could be better...\n");
	}//end if
	if (turnCount == 7){
		printf("Good job, %s.\n", userName);
	}//end if

	return 0;
}

/*
 * Comments:
 * I tried using else statements instead of another if and it didn't work?? I'm unsure of what that means, but it works the way it is.
 * Other than that and me messing up some syntax, this wasn't as impossible as it looked to me at the beginning of the week.
 * 8/10 not bad
 */
