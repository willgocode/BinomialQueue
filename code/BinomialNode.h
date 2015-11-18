#ifndef BINOMIAL_NODE_H
#define BINOMIAL_NODE_H
#include <string>
#include <iostream>

using namespace std;


struct BinomialNode{
    string element;
    BinomialNode *leftChild;
    BinomialNode *nextSibling;
   	BinomialNode *parent; 

	BinomialNode( const string & e, BinomialNode *lt, BinomialNode *rt, BinomialNode *ptr )
    : element{ e }, leftChild{ lt }, nextSibling{ rt }, parent{ ptr } { }
    
    //BinomialNode( Comparable && e, BinomialNode *lt, BinomialNode *rt )
    //: element{ std::move( e ) }, leftChild{ lt }, nextSibling{ rt } { }
};

#endif
