#ifndef BINOMIAL_NODE_H
#define BINOMIAL_NODE_H
#include <string>
#include <iostream>

using namespace std;

//This contains the struct for BinomialNode to make it accessible for all files

struct BinomialNode{
    string element;
    BinomialNode *leftChild;
    BinomialNode *nextSibling;
   	BinomialNode *parent;           //since we need to percolate up we need parent of node

	BinomialNode( const string & e, BinomialNode *lt, BinomialNode *rt, BinomialNode *ptr )
    : element{ e }, leftChild{ lt }, nextSibling{ rt }, parent{ ptr } { }       //Modified constructor to take parent node
    
    //BinomialNode( Comparable && e, BinomialNode *lt, BinomialNode *rt )
    //: element{ std::move( e ) }, leftChild{ lt }, nextSibling{ rt } { }
};

#endif
