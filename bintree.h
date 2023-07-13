/*******************
*coding assignment 8: Binary tree
*Name: Adrian Lopez
*Date: 07/13/23
*Status:in progress
*Language: C++
*File: bintree.h
*******************/

#ifndef BINTREE_BINTREE_H
#define BINTREE_BINTREE_H

#include "data.h"

clas BinTree
{
public:

//constructor
 Bintree();

//destructor
 ~BinTree();

//public methods
 
 bool isEmpty();
 int getCount():
 bool getRootData(Data*);
 void displayTree();
 void clear();
 bool addNode(int,const string*);
 bool removeNode(int);
 bool getNode(Data*,int);
 bool contains(int);
 int getHeight();
 void displayPreOrder();
 void displayPostOrder();
 void displayInOrder();


}

#endif /* BINTREE_BINTREE_H */

