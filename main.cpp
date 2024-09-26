//
//  main.cpp
//  OptimalTireUsage
//
//  Created by Arpa Hakopian on 12/6/23.
//

#include <iostream>
#include "BinaryTree.h"

 
int main()
{
    BinaryTree<std::string> decisionTree;
    decisionTree.insert("Will it be cold?");
    decisionTree.insert("Will it rain?");
    decisionTree.insert("Is the tarmac prone to degredation?");
    decisionTree.insert("Heavy Rain?");
    decisionTree.insert("Is the tarmac prone to degredation?");
    decisionTree.insert(">2 stints?");
    decisionTree.insert(">2 stints?");
    decisionTree.insert("Full Wets");
    decisionTree.insert(">2 stints?");
    decisionTree.insert("Mediums");
    decisionTree.insert(">2 stints?");
    decisionTree.insert("Mediums");
    decisionTree.insert("Hards");
    decisionTree.insert("Softs");
    decisionTree.insert("Mediums");
    decisionTree.insert("Final race?");
    decisionTree.insert("Good result?");
    decisionTree.insert("Inters");
    decisionTree.insert("Full Wets");
    decisionTree.insert("Final race?");
    decisionTree.insert("Good result?");
    decisionTree.insert("Softs");
    decisionTree.insert("Mediums");
    decisionTree.insert("Final race?");
    decisionTree.insert("Good result?");
    decisionTree.insert("Final race?");
    decisionTree.insert("Good result?");
    decisionTree.insert("Final race?");
    decisionTree.insert("Good result?");
    decisionTree.insert("Final race?");
    decisionTree.insert("Good result?");

        // Ask questions and navigate the decision
        decisionTree.askQuestions();
    return 0;
 
 }
