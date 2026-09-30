# Algorithm
```
import sstream and iostream
```
## main()
```
create fstream
create stringstream ss
create variable for data
create temporary variables for ints
create string for currentLine

open data.csv
while being able to read a line into currentLine:
    clear stringstream
    
    read to first comma, store in sIntA
    read to next comma, store in sIntB
    read to end of line, store in text
    
    clear stringstream
    convert int strings to ints using stringstream
    
    sum = add the two ints
    print text 
```
