//#include "QuadraticProbing.h"
#include <iostream>
using namespace std;

/**
 * Internal method to test if a positive number is prime.
 * Not an efficient algorithm.
 */
bool isPrime( int n ){
    if( n == 2 || n == 3 )
        return true;
    if( n == 1 || n % 2 == 0 )
        return false;
    for( int i = 3; i * i <= n; i += 2 )
        if( n % i == 0 )
            return false;
    return true;
}

/**
 * Internal method to return a prime number at least as large as n.
 * Assumes n > 0.
 */
int nextPrime( int n ){
    if( n % 2 == 0 )
        ++n;
    for( ; !isPrime( n ); n += 2 )
        ;
    return n;
}

/*
template <typename HashedObj, typename HashedPtr>
explicit HashTable::HashTable( int size = 101 ) : array( nextPrime( size ) )
{ makeEmpty( ); }

template <typename HashedObj, typename HashedPtr>
bool HashTable::contains( const HashedObj & x ) const
{
    return isActive( findPos( x ) );
}

template <typename HashedObj, typename HashedPtr>
void HashTable::makeEmpty( )
{
    currentSize = 0;
    for( auto & entry : array )
        entry.info = EMPTY;
}

template <typename HashedObj, typename HashedPtr>
bool HashTable::insert( const HashedObj & x, HashedPtr *ptrNode )
{
    // Insert x as active
    int currentPos = findPos( x );
    if( isActive( currentPos ) )
        return false;
    
    array[ currentPos ].element = x;
    array[ currentPos ].info = ACTIVE;
    array[ currentPos ].nodePtr = ptrNode;
    
    // Rehash; see Section 5.5
    if( ++currentSize > array.size( ) / 2 )
        rehash( );
    
    return true;
}

template <typename HashedObj, typename HashedPtr>
bool HashTable::remove( const HashedObj & x )
{
    int currentPos = findPos( x );
    if( !isActive( currentPos ) )
        return false;
    
    array[ currentPos ].info = DELETED;
    return true;
}

template <typename HashedObj, typename HashedPtr>
HashedPtr * HashTable::find(const HashedObj & key) const{
    return getHashedPtr(key);
}

template <typename HashedObj, typename HashedPtr>
enum HashTable::EntryType { ACTIVE, EMPTY, DELETED };*/
