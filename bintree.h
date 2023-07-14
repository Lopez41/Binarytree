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
#include <iostream>
using std:: cout;
using std:: endl;

class BinTree
{
public:

    //constructor
    BinTree();

    //destructor
    ~BinTree();

    //public methods
    
    bool isEmpty();
    int getCount();
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
    
private:
    DataNode *root; // Pointer to the root node of the binary search tree
    int count;      // Number of nodes in the binary search tree

    // Private recursive methods
    void clear(DataNode*);
    bool addNode(DataNode*, DataNode**);
    DataNode* removeNode(int, DataNode*);
    bool getNode(Data*, int, DataNode*);
    bool contains(int, DataNode*);
    int getHeight(DataNode*);
    void displayPreOrder(DataNode*);
    void displayPostOrder(DataNode*);
    void displayInOrder(DataNode*);
};

#endif /* BINTREE_BINTREE_H */

