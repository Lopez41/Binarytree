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
//start here
// Public method: getCount
int BinTree::getCount() 
{
    return count;
}

// Public method: getRootData
bool BinTree::getRootData(Data* outputData)
{ 
 bool success = false;

    if (root != nullptr) 
    {
        outputData->id = root->data.id;
        outputData->information = root->data.information;
        success = true;
    }
    else 
    {
        outputData->id = -1;
        outputData->information = "";
    }

    return success;
}

