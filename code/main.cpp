#include <iostream>
#include <fstream>
#include "QuadraticProbing.h"
#include "BinomialQueue.h"
#include <vector>

using namespace std;

struct KeyPointer{
	int * ptr;
	string key;
};

int main(){
	string line;
	HashTable<string> myHash;
	BinomialQueue<string> myQueue;

	ifstream textFile("words.txt");

	if(textFile.is_open()){
		for(int i = 0;textFile.is_open(); i++){
			while(getline(textFile, line)){	
				myQueue.insert(line);
			}
			cout<< myQueue.isEmpty() << endl;
			textFile.close();
		}	
	}
	else{
		cout << "File not found." <<endl;
	}

	return 0;
}


