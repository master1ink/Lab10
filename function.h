#include <cstdlib>
#include <cstring>

struct biTreeSearch {
    int number;
    biTreeSearch *left, *right;
} typedef *pBiTree;

void biSearchTree();
pBiTree addNumber(pBiTree biTree, int number);
void printBeTree(pBiTree biTree);
void freeMemoryBi(pBiTree biTree);