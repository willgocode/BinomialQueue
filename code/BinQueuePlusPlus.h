#ifndef BIN_QUEUE_PLUS_PLUS
#define BIN_QUEUE_PLUS_PLUS

#include <iostream>
#include "QuadraticProbing.h"
#include "BinomialQueue.h"
#include "BinomialNode.h"

using namespace std;

class BinQueuePlusPlus{
	public:
	BinQueuePlusPlus() : theQueue(NULL), theHash(){};
	BinQueuePlusPlus(BinomialNode * node){
		theQueue.insert(node);
	}
	BinQueuePlusPlus(string key, BinomialNode * node){
		theHash.insert(key, node);
	}

	//begin hash functions
	bool hashInsert(string key, BinomialNode * node){return theHash.insert(key, node);}

	bool hashContains(const string key) const{return theHash.contains(key);}
	
	bool hashRemove(const string key){return theHash.remove(key);}

	void deleteHash(){theHash.makeEmpty();}
	
	BinomialNode * find(const string key) const{return theHash.find(key);}
	//begin bin functions
	void binInsert(BinomialNode * key){theQueue.insert(key);}

	void binDeleteMin(){theQueue.deleteMin();}

	bool isEmpty() const{return theQueue.isEmpty();}

	void deleteBin(){theQueue.makeEmpty();}

	void minBin(){cout<< "The minimum element in the queue is: " << theQueue.findMin() <<endl;}
	private:
	BinomialQueue<string> theQueue;
	HashTable<string, BinomialNode> theHash;
};

#endif
