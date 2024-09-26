//
//  BinaryTree.h
//  OptimalTireUsage
//
//  Created by Arpa Hakopian on 12/6/23.
//

#ifndef BinaryTree_h
#define BinaryTree_h
#include "BinaryNode.h"
#include <string>
using namespace std;
// Binary tree class
template<class ItemType>
class BinaryTree
{
private:
    BinaryNode<ItemType>* root;

public:
    // Constructor
    BinaryTree() : root(nullptr) {}

    // Destructor
    ~BinaryTree() { destroyTree(root); }

    // Function to recursively destroy the tree
    void destroyTree(BinaryNode<ItemType>* node);
    void clearTree();


    // Public member functions
    bool isEmpty() const;
    void insert(const ItemType& newData);
    void askQuestions();
};

// Implementations

template<class ItemType>
void BinaryTree<ItemType>::destroyTree(BinaryNode<ItemType>* node)
{
    if (node != nullptr)
    {
        destroyTree(node->getLeft());   // Pass the left child pointer
        destroyTree(node->getRight());  // Pass the right child pointer
        delete node;
    }
}

// Public member function to call destroyTree with the root
template<class ItemType>
void BinaryTree<ItemType>::clearTree()
{
    destroyTree(root);
    root = nullptr;
}

// Check if the tree is empty
template<class ItemType>
bool BinaryTree<ItemType>::isEmpty() const
{
    return root == nullptr;
}

#include <queue>

template<class ItemType>
void BinaryTree<ItemType>::insert(const ItemType& newData)
{
    BinaryNode<ItemType>* newNode = new BinaryNode<ItemType>(newData);

    if (isEmpty())
    {
        root = newNode;
        return;
    }

    queue<BinaryNode<ItemType>*> nodeQueue;
    nodeQueue.push(root);

    while (!nodeQueue.empty())
    {
        BinaryNode<ItemType>* current = nodeQueue.front();
        nodeQueue.pop();

        if (current->getLeft() == nullptr)
        {
            current->setLeft(newNode);
            break; // Inserted, so exit the loop
        }
        else if (current->getRight() == nullptr)
        {
            current->setRight(newNode);
            break; // Inserted, so exit the loop
        }
        else
        {
            // Both left and right children are present, so enqueue them for further exploration
            nodeQueue.push(current->getLeft());
            nodeQueue.push(current->getRight());
        }
    }
}

// Function to ask questions and navigate the tree
template<class ItemType>
void BinaryTree<ItemType>::askQuestions()
{
    BinaryNode<ItemType>* current = root;

    while (current != nullptr)
    {
        cout << current->getData() << " (yes/no): " << endl;
        string answer;
        cin >> answer;

        if (answer == "yes")
        {
            current = current->getLeft();
        }
        else if (answer == "no")
        {
            current = current->getRight();
        }
        else
        {
            cout << "Invalid input. Please enter 'yes' or 'no'.\n\n";
        }
        if (current==nullptr && answer == "no"){
            cout << "Starting over..." << endl;
            current = root;
        }
    }
}

#endif /* BinaryTree_h */
