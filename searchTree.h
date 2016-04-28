#ifndef SEARCHTREE_H
#define SEARCHTREE_H
#include <iostream>

struct wordItem{
    std::string word;
};

class searchTree
{
    public:
        searchTree();
        void read(int n, std::string*& data);
        bool compare(std::string word);
        std::string lower(std::string word);
        int lineNum();
        void numberoflines(int numOfLines);
        void addSearchNode(std::string word);
        void printWords(std::string*& data);
        bool quit(bool quit);
        virtual ~searchTree();
    protected:
    private:
//    searchNode *root;
//    void printWords(searchNode * node);
};

#endif // SEARCHTREE_H
