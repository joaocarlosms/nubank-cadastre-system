#include "Node.h"

Node::Node()
{
    this->father = NULL;
    this->dir = NULL;
    this->esq = NULL;
    this->factor = 1;
}

Node::Node(Node* father, Node* esq, Node* dir, Login item)
{
    this->father = father;
    this->esq = esq;
    this->dir = dir;
    this->item = item;
}

Node::Node(const Node& orig)
{
    father = orig.getFather();
    esq = orig.getEsq();
    dir = orig.getDir();
    item = orig.getItem();
}

void Node::setFather(Node* father)
{
    this->father = father;
}

Node* Node::getFather() const 
{
    return father;
}

void Node::setDir(Node* dir)
{
    this->dir = dir;
}

Node* Node::getDir() const 
{
    return dir;
}

void Node:: setEsq(Node* esq)
{
    this->esq = esq;
}

Node* Node::getEsq() const 
{
    return esq;
}

void Node::setItem(Login item)
{
    this->item = item;
}

Login Node::getItem() const
{
    return item;
}

void Node::setFactor(int factor)
{
    this->factor = factor;
}

int Node::getFactor() const
{
    return factor;
}

int Node::getNumberChilds()
{
    if(dir == NULL && esq == NULL)
        return 0;
    else if((dir == NULL && esq != NULL) || (dir != NULL && esq == NULL))
        return 1;
    else
        return 2;
}

Node* Node::getOnlyChild()
{
    if(this->getNumberChilds() == 1)
    {
        if(this->esq != NULL)
            return this->esq;
        else
            return this->dir;
    } else {
        return NULL;
    }
}