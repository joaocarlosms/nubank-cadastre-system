#ifndef BINARYTREEAVL_H
#define BINARYTREEAVL_H

#include "Login.h"
#include "Node.h"
#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;

class BinaryTreeAVL {
private:
    int quant;
    Node* root;

    string saveText = " ";

    Node* inputLocal(Node* subtree, const Login& user);
    Node* smallerDownward(Node* no);
    Node* higherDownward(Node* no);
public:
    BinaryTreeAVL();
    BinaryTreeAVL(int quant, Node* root);
    BinaryTreeAVL(const BinaryTreeAVL& orig);
    void setQuant(int quant);
    int getQuant() const;
    void setRoot(Node* root);
    Node* getRoot() const;

    Node* find(Node* subtree, const Login& user);
    void insert(Login &user);
    Node* getSuccessor(Node* no);
    Node* getPrevious(Node* no);

    void removeZeroChilds(Node* left);
    void removeOneChild(Node* left);
    void removeNchilds(Node* left);
    void remove(Login& user);

    int getHeight(Node* no);
    int getFactorBalancing(Node* no);
    Node* getP(Node* no);
    Node* getQ(Node* P);
    Node* getR(Node* R);
    void onlyRotationLeftLeft(Node* P, Node* Q);
    void onlyRotationRightRight(Node* P, Node* Q);
    void doubleRotationLeftRight(Node* P, Node* Q, Node* R);
    void doubleRotationRightLeft(Node* P, Node* Q, Node* R);
    void executeBalancing(Node* join);
    void updateBalancingFactors(Node* no);
    void print2DUtil(Node* root, int space);
    void print2D(Node* root);

    void preOrder(Node* no);
    void inOrder(Node* no);
    void posOrder(Node* no);
    void visitItems(Node* no);

    void preOrderFile(Node* no);
    void saveDataInFileText();
    void loadLogin();
};  

#endif //BINARYTREEAVL_H