/*******************
*coding assignment 08: Binary tree
*Name: Adrian Lopez
*Date: 07/13/23
*Status:in progress
*Language: C++
*File: bintree.cpp
*******************/


#include "bintree.h"

// Constructor
BinTree::BinTree() 
{
    root = nullptr;
    
}

// Destructor
BinTree::~BinTree() 
{
    clear();
}

// Public method: isEmpty
bool BinTree::isEmpty() 
{
    return (count == 0);
}

