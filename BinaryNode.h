//
//  BinaryNode.h
//  OptimalTireUsage
//
//  Created by Arpa Hakopian on 12/6/23.
//

#include <iostream>
#include <string>

// Node class for the linked binary tree
template<class ItemType>
class BinaryNode
{
private:
    ItemType data;
    BinaryNode<ItemType>* left;
    BinaryNode<ItemType>* right;

public:
    // Constructors
    BinaryNode(const ItemType& newData, BinaryNode<ItemType>* newLeft = nullptr, BinaryNode<ItemType>* newRight = nullptr)
        : data(newData), left(newLeft), right(newRight) {}

    // Accessor methods
    ItemType getData() const { return data;

    }
    BinaryNode<ItemType>* getLeft() const {
        return left;
    }

    BinaryNode<ItemType>* getRight() const {
        return right;
    }

    // Mutator methods
    void setLeft(BinaryNode<ItemType>* newLeft) {
        left = newLeft;
    }
    void setRight(BinaryNode<ItemType>* newRight) {
        right = newRight;
    }
};

