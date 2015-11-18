#include <iostream>
#include <fstream>
#include "BinQueuePlusPlus.h"

using namespace std;

int main(){
	string line;			
	BinQueuePlusPlus coolBin;
	
	//HashTable<string, BinomialNode> myHash;
	//BinomialQueue<string> myQueue;

	ifstream textFile("words.txt");

	if(textFile.is_open()){
		int counter = 0;
		while(getline(textFile, line)){	
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

	for(int i = 0; i < 11; ++i){
		coolBin.minBin();
		coolBin.binDeleteMin();
	}

	//cout << "Please enter a string to search for: ";
	//cin >> line;
	//coolBin.find(line);	
	cout << "Enter a string to remove: ";
	cin >> line;
	coolBin.remove(line);

	return 0;
}


