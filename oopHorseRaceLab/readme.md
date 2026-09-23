```mermaid
class Horse {
    int position
    int index
    int trackLength
    Horse()
    init(int index, int tracklength)
    advance()
    printLane()
    bool isWinner()
}

class Race {
    int NUM_HORSES
    int TRACK_LENGTH
    Horse horses[NUM_HORSES]
    Race()
    start()
}
```

## Horse::Horse()
```
set position to 0
set indxex to 0
set trackLength to 0
```

## void Horse::init(int index, int trackLength)
```
set position to 0
set Horse::index to index
set Horse::trackLength to trackLength
```

## void Horse::advance()
```
assume random generator is seeded
store random gen num % 1 in coin
add coin to position, put result back in position
```

## void Horse::printLane()
```
for loop from 0 to trackLength
    if i = Horse::position:
        print HOrse::index
    else:
        print "."
after loop, print new line
```

## bool Horse::isWinner()
```
bool result = false
if position >= trackLength:
    result = true
    print commentary
return result
```

## Race::Race()
```
const static int NUM_HORSES = 5
const int TRACK_LENGTH = 15

seed random number generator

initialize the horses array
for each horse:
    initialize with index and trackLength
```

## Race::start()
```
bool keepGoing = true
while keepGoing:
    for each horse:
        advance the horse
        print its lane
        if isWinner == true:
            keepGoing = false 
```
