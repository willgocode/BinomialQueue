#include "BinQueuePlusPlus.h"
#include <iostream>

using namespace std;

//Most of these functions will pass to the QuadraticProbing.h and BinomialQueue.
//The ones that are commented are the slightly more code heavy ones in comparison.h

BinQueuePlusPlus::BinQueuePlusPlus() : theQueue(NULL), theHash(){};

BinQueuePlusPlus::BinQueuePlusPlus(BinomialNode * node){theQueue.insert(node);}

BinQueuePlusPlus::BinQueuePlusPlus(string key, BinomialNode *node){
	theHash.insert(key, node);
}

bool BinQueuePlusPlus::hashInsert(string key, BinomialNode *node){return theHash.insert(key,node);}

bool BinQueuePlusPlus::hashContains(const string key) const{return theHash.contains(key);}

bool BinQueuePlusPlus::hashRemove(const string key){return theHash.remove(key);}

void BinQueuePlusPlus::deleteHash(){theHash.makeEmpty();}

BinomialNode * BinQueuePlusPlus::find(const string key) const {return theHash.find(key);}

void BinQueuePlusPlus::binInsert(BinomialNode *key){theQueue.insert(key);}

//This function will findMin in the queue and then remove it from the hash table
//then it will deleteMin from the queue.
void BinQueuePlusPlus::binDeleteMin(){
	string key = theQueue.findMin();
	theHash.remove(key);
	theQueue.deleteMin();
}

bool BinQueuePlusPlus::isEmpty() const{return theQueue.isEmpty();}

void BinQueuePlusPlus::deleteBin(){theQueue.makeEmpty();}

void BinQueuePlusPlus::minBin(){cout << "The minimum element in the queue is: " << theQueue.findMin() <<endl;}

//This function will run the decreaseKey function in BinomialQueue and then delete it from the queue
//as well a the hash table.
void BinQueuePlusPlus::remove(string key){
	if(theHash.contains(key) == 1){
		BinomialNode * tempNode = theHash.find(key);
		theHash.remove(key);
		theQueue.decreaseKey(tempNode);
		theQueue.deleteMin();
	}
	else{
		cout << "Key is not found." <<endl;
	}
}

