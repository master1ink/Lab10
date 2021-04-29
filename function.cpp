#include "function.h"
#include <iostream>

using namespace std;

void biSearchTree() {
    pBiTree biTree = nullptr;
    int number, size;

    cout << "\nEnter the number of numbers: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "\nInput " <<  i + 1 << " number = ";
        cin >> number;
        biTree = addNumber(biTree, number);
    }
    cout << "\nBinary tree:\n";
    printBeTree(biTree);
    freeMemoryBi(biTree);
    cout << "\n\nMemory free\n";
}

pBiTree addNumber(pBiTree biTree, int number) {
    if (biTree == nullptr) {
        biTree = new biTreeSearch;
        biTree->number = number;
        biTree->left = nullptr;
        biTree->right = nullptr;
    } else if (number < biTree->number)
        biTree->left = addNumber(biTree->left, number);
    else
        biTree->right = addNumber(biTree->right, number);
    return(biTree);
}

void printBeTree(pBiTree biTree) {
    if (biTree != nullptr) {
        printBeTree(biTree->left);
        cout << biTree->number << " ";
        printBeTree(biTree->right);
    }
}

void freeMemoryBi(pBiTree biTree) {
    if (biTree != nullptr) {
        freeMemoryBi(biTree->left);
        freeMemoryBi(biTree->right);
        delete biTree;
    }
}