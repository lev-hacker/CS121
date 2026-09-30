#include <sstream>
#include <iostream>
#include <fstream>

int main(){
	std::ifstream inFile;
	std::stringstream ss;
	std::string currentLine;
	int intA;
	int intB;
	std::string text;
	std::string sIntA;
	std::string sIntB;
	inFile.open("data.csv");

	while(getline(inFile, currentLine)){
		ss.clear();
		ss.str("");

		ss.str(currentLine);
		getline(ss, sIntA, ',');
		getline(ss, sIntB, ',');
		getline(ss, text);
		
		ss.clear();
		ss.str("");
		ss << sIntA << " " << sIntB;
		ss >> intA >> intB;

		int sum = intA + intB;
		for (int i = 0; i < sum; i++){
			std::cout << text;
		} //ends for
		std::cout << std::endl;
	} //ends while
	inFile.close();
} //ends main
/*
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
*/
