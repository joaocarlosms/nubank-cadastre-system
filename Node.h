#ifndef NODE_H
#define NODE_H 

#include "Login.h"

using namespace std;

class Node {
private:
    Node* father;
    Node* esq;
    Login item;
    Node* dir;

    int factor;

public:
    Node();
    Node(Node* father, Node* esq, Node* dir, Login item);
    Node(const Node& orig);
    void setFather(Node* father);
    Node* getFather() const;
    void setEsq(Node* esq);
    Node* getEsq() const;
    void setDir(Node* dir);
    Node* getDir() const;
    void setItem(Login item);
    Login getItem() const;
    void setFactor(int factor);
    int getFactor() const;

    int getNumberChilds();
    Node* getOnlyChild();
};

#endif //NODE_H