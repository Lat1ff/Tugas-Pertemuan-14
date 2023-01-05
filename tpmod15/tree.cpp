#include "tree.h"

adrnode newNode_1301213541(infotype X){
    adrnode P = new node;
    info(P) = X;
    left(P) = nil;
    right(P) = nil;
    return P;
}

adrnode findNode_1301213541(adrnode root, infotype X){
    adrnode P = root;
    while(left(P) != nil){
        if(info(P) == X){
            return P;
        }
        P = left(P);
    }
    return P;
}

void insertNode_1301213541(adrnode &root, adrnode P){
    if(root == nil){
        root = P;
    }else if(info(P) <= info(root)){
        insertNode_1301213541(left(root),P);
    }else if(info(P) > info(root)){
        insertNode_1301213541(right(root), P);
    }else if(info(P) == info(root)){
        cout << "data teridenfikasi";
    }
}

void printPreOrder_1301213541(adrnode root){
    if(root != nil){
        cout << info(root) << " ";
        printPreOrder_1301213541(left(root));
        printPreOrder_1301213541(right(root));
    }
}

void printDescendant_1301213541(adrnode root, infotype X){
    if(root != nil){
        printDescendant_1301213541(left(root),X);
        printDescendant_1301213541(right(root),X);
        if(info(root) == X){
            printPreOrder_1301213541(left(root));
            printPreOrder_1301213541(right(root));
        }
    }
}

int sumNode_1301213541(adrnode root){
    if(root != nil){
        return (info(root) + sumNode_1301213541(left(root)) + sumNode_1301213541(right(root)));
    }
    return 0;
}

int countLeaves_1301213541(adrnode root){
    if(root == nil){
        return 0;
    }
    if(left(root) == nil && right(root) == nil){
        return 1;
    }else{
        return countLeaves_1301213541(left(root)) + countLeaves_1301213541(right(root));
    }
}

int heightTree_1301213541(adrnode root){
    int tinggi = 0;
    if(root != nil){
        int left = heightTree_1301213541(left(root));
        int tinggiMax = left;
        tinggi = tinggiMax + 1;
    }
    return tinggi;
}
