#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) (P)->info
#define left(P) (P)->left
#define right(P) (P)->right
#define nil NULL

typedef int infotype;
typedef struct node *adrnode;

struct node{
    infotype info;
    adrnode left;
    adrnode right;
};

adrnode newNode_1301213541(infotype X);
adrnode findNode_1301213541(adrnode root, infotype X);
void insertNode_1301213541(adrnode &root, adrnode P);
void printPreOrder_1301213541(adrnode root);
void printDescendant_1301213541(adrnode root, infotype X);
int sumNode_1301213541(adrnode root);
int countLeaves_1301213541(adrnode root);
int heightTree_1301213541(adrnode root);

#endif // TREE_H_INCLUDED
