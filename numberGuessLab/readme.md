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

correct --> random int the user is trying to guess  
userName --> string storing user's name from input  
turnCount --> int of how many turns taken - initialize to 0  
guess --> int of user's guess from input  
keepGoing --> boolean for while loop that tells it to keep going if true  

# Algorithm

main():  
    make 20 character array for userName  
    make int guess - initialize to 0  
    make int correct - random generated  
    make int (boolean) keepGoing for while loop --> initialize to true  
      
    seed random number generator  
    generate random into between 1 and 100 --> store to correct  

### Greeting
    ask user name --> store to userName
    greet user with name

### Guessing
    while keepGoing is true:
        increment turns
        ask user for int --> store in guess
        if guess < correct:
            tell user "too low"
        if guess > correct:
            tell user "too high"
        if guess == correct:
            tell user "You win!"
            set keepGoing to false

### Evaluate Performance

    if turnCount < 7:
        tell user "Awesome!"
    if turnCount > 7:
        tell user "Could be better"
    if turnCount == 7:
        tell user "Good job!"

    return 0
end main
