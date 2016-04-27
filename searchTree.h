#ifndef SEARCHTREE_H
#define SEARCHTREE_H
#include <iostream>
/*
struct searchNode{
    std::string word;
    searchNode *parent;
    searchNode *leftChild;
    searchNode *rightChild;

    searchNode(){};

    searchNode(std::string in_word)
    {
        word = in_word;
        parent = NULL;
        leftChild = NULL;
        rightChild = NULL;
    }

};
*/

class searchTree
{
    public:
        searchTree();
        bool compare(std::string word, std::string*& data);
        void lower(std::string word);
        void lineNum();
        void numberoflines(int numOfLines);
        void addSearchNode(std::string word);
        void printWords(std::string*& data
        );
        virtual ~searchTree();
    protected:
    private:
//    searchNode *root;
//    void printWords(searchNode * node);
};

#endif // SEARCHTREE_H
