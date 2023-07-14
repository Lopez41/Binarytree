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

// Public method: clear
void BinTree::clear() 
{
    clear(root);
    root = nullptr;
    count = 0;
}

// Private recursive method: clear
void BinTree::clear(DataNode* node) 
{
    if (node != nullptr) {
        clear(node->left);
        clear(node->right);
        delete node;
    }
}

// Public method: addNode
bool BinTree::addNode(int id, const string* information)
 {
    DataNode* newNode = new DataNode;
    newNode->data.id = id;
    newNode->data.information = *information;
    newNode->left = nullptr;
    newNode->right = nullptr;

    bool nodeAdded = addNode(newNode, &root);
    if (nodeAdded) 
    {
        count++;
    }
    return nodeAdded;
}

// Private recursive method: addNode
bool BinTree::addNode(DataNode* newNode, DataNode** node) 
{
   bool success = false;

    if (*node == nullptr) 
    {
        *node = newNode;
        success = true;
    } 
    else 
    {
        if (newNode->data.id < (*node)->data.id) 
        {
            success = addNode(newNode, &((*node)->left));
        } 
        else 
        {
            success = addNode(newNode, &((*node)->right));
        }
    }

    return success;
}
// Public method: removeNode
bool BinTree::removeNode(int id) 
{
   bool success = false;

    if (isEmpty()) 
    {
        success = false;
    } 
    else 
    {
        if (contains(id)) 
        {
            root = removeNode(id, root);
            count--;
            success = true;
        } 
        else
        {
            success = false;
        }
    }

    return success;
}

// Private recursive method: removeNode
DataNode* BinTree::removeNode(int id, DataNode* node) {
     if (node == nullptr)
      {
        return nullptr;
    } else if (id < node->data.id) {
        node->left = removeNode(id, node->left);
        return node;
    } else if (id > node->data.id) {
        node->right = removeNode(id, node->right);
        return node;
    } else {
        if (node->left == nullptr) {
            DataNode* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            DataNode* temp = node->left;
            delete node;
            return temp;
        } else {
            DataNode* temp = node->right;
            while (temp->left != nullptr) {
                temp = temp->left;
            }
            node->data = temp->data;
            node->right = removeNode(temp->data.id, node->right);
            return node;
        }
    }
}
