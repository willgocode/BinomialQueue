//Writted by William Wu.
//This is a program to find a key in a hash table and delete the element in a BinomialQueue in constant time.

#include <iostream>
#include <fstream>
#include "BinQueuePlusPlus.h"

using namespace std;

int main(){
	string line;			
	BinQueuePlusPlus coolBin;
	
	ifstream textFile("words.txt");							//open textfile

	if(textFile.is_open()){
		int counter = 0;
		while(getline(textFile, line)){						//populate queue and hash table
			BinomialNode * tempNode;
			tempNode = new BinomialNode(line, nullptr, nullptr, nullptr);
			coolBin.binInsert(tempNode);
			counter++;
			coolBin.hashInsert(line, tempNode);
		}
		cout << "Total number of insertions into the binomial queue: " << counter <<endl;
		textFile.close();
	}
	else{
		cout << "File not found." <<endl;					
	}

	for(int i = 0; i < 10; ++i){							//deleting 10 times, find the min in Queue then
		coolBin.minBin();                                   //then delete it
		coolBin.binDeleteMin();
	}

	cout << "Please enter a string to search for: ";		//finding in hash table through user input
	cin >> line;
	coolBin.find(line);	
	
	for(int i = 0; i < 5; ++i){
		cout << "Enter a string to remove: ";					//removing 5 times by user input
		cin >> line;
		coolBin.remove(line);
		coolBin.find(line);
	}
	return 0;
}


