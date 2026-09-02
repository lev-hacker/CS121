# Goal:
Have a user guess a number and keep guessing until it is correct

# Inputs:
User's name
An int for every guess

# Outputs:
A greeting using the user's name
Number of turns, if the user is above, below, or correct
If correct, congradulate

# Variables
randomNumber --> random int the user is trying to guess
userName --> string storing user's name from input
turnCount --> int of how many turns taken
guess --> int of user's guess from input
keepGoing --> boolean for while loop that tells it to keep going if true (define TRUE as -1 and FALSE as 0 to make it work)

# Algorithm

### Greeting
Ask user's name --> store to userName as string
Greet the user using userName

### Random number
Generate a random integer --> store to randomNumber as int

### Guessing
Ask for a guess
while the guess != randomNumber
    decide if the number is high or low
    output if the number is high or low
        add 1 to turn count
        ask for a guess

### Correct guess
Congradulate the user
