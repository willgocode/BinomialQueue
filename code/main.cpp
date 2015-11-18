#include <iostream>
#include <fstream>
#include "QuadraticProbing.h"
#include "BinomialQueue.h"
#include "BinomialNode.h"
#include <vector>

using namespace std;

int main(){
	string line;			
	HashTable<string, BinomialNode> myHash;
	BinomialQueue<string> myQueue;

	ifstream textFile("words.txt");

	if(textFile.is_open()){
		int counter = 0;
		while(getline(textFile, line)){	
			BinomialNode * tempNode;
			tempNode = new BinomialNode(line, nullptr, nullptr, nullptr);
			myQueue.insert(tempNode);
			counter++;
			myHash.insert(line, tempNode);
		}
		cout << "Total number of insertions into the binomial queue: " << counter <<endl;
		textFile.close();
	}
	else{
		cout << "File not found." <<endl;
	}

	for(int i = 0; i < 11; ++i){
		cout << myQueue.findMin() << endl;
		myQueue.deleteMin();
	}

	cout << "Please enter a string to search for: ";
	cin >> line;
	myHash.find(line);


	return 0;
}


