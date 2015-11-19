#ifndef BIN_QUEUE_PLUS_PLUS
#define BIN_QUEUE_PLUS_PLUS

#include <iostream>
#include "QuadraticProbing.h"
#include "BinomialQueue.h"
#include "BinomialNode.h"

using namespace std;

//Header file for BinQueuePlusPlus. Nothing really interesting here?
class BinQueuePlusPlus{
	public:
	BinQueuePlusPlus();
	BinQueuePlusPlus(BinomialNode * node);
	BinQueuePlusPlus(string key, BinomialNode * node);

	//begin hash functions
	bool hashInsert(string key, BinomialNode * node);

	bool hashContains(const string key) const;
	
	bool hashRemove(const string key);

	void deleteHash();
	
	BinomialNode * find(const string key) const;
	//begin bin functions
	void binInsert(BinomialNode * key);

	void binDeleteMin();

	bool isEmpty() const;

	void deleteBin();

	void minBin();
	//begin remove function;

	void remove(string key);

	private:    //Private data memebers. They're pretty interesting I guess.
	BinomialQueue<string> theQueue;
	HashTable<string, BinomialNode> theHash;
};

#endif
