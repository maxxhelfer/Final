#include "searchTree.h"
#include <fstream>
#include <string>
#include <algorithm>

searchTree sTree;
//searchNode data;

searchTree::searchTree()
{
//    root = NULL;
    //ctor
}

searchTree::~searchTree()
{
    //dtor
}
/*
void searchTree::printWords(std::string){

//    printWords(root);
}
*/
void searchTree::printWords(std::string*& data)   {
    for(int j = 0; j<349900; j++){
                std::cout<<data[j]<<std::endl;
            }
}
/*
void searchTree::addSearchNode(std::string word){
    int counter=0;
    searchNode *temp = new searchNode;
    searchNode *data = new searchNode(word);
    temp = root;
    data->word = word;
    data->parent = NULL;
    data->leftChild = NULL;
    data->rightChild = NULL;

    while(temp !=NULL){
        data->parent = temp;
        if(data->word.compare(temp->word)<0){
            temp = temp->leftChild;
            counter++;
        }
        else {
            temp = temp->rightChild;
            counter++;
        }
    }
    if(data->parent == NULL){
        root = data;
    }
    else if(data->word.compare(data->parent->word)<0){
        data->parent->leftChild = data;
        data->parent = data->parent;
    }
    else{
        data->parent->rightChild = data;
        data->parent = data->parent;
    }
}
*/

bool searchTree::compare(std::string word, std::string*& data){
    //for(int i=0;i<349900;i++){
        /*
        if (std::end(strWords) != std::find(std::begin(strWords), std::end(strWords), word)) {
            return false;
        }
        else{
            return true;
        }

        auto it = std::find(std::begin(strWords), std::end(strWords), word);

        if (it != std::end(strWords))
        {
        return true;
    // found *it
        }
        else
        {
        return false;
    // not found
        }

/*
        else if(word.compare(strWords[i]) == 0){
            return true;
        }
        else if(i=349900){
            return false;
        }
        else{
            return false;
        }
*/
/*
if(data[i].find(search, 0) != std::string::npos);
{
    cout << data[i]<< endl;
}
*/
std::string matchString = word;
    for(int x = 0; x < 349900; x++){
        if (data[x].find(matchString, 0) != std::string::npos){
            std::cout << data[x] << std::endl;
            return true;
        }
        else
            return false;
    }
}
/*
found=data.find(word);
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';
   */



 void searchTree::lineNum(){
                int numOfLines=0;
                std::string line;
                std::ifstream myfile("dictionary.txt");
                if(myfile.is_open()){
                    while(!myfile.eof()){
                        getline(myfile,line);
                        std::cout<< line << std::endl;
                        numOfLines++;
                    }
                myfile.close();
                }
            searchTree::numberoflines(numOfLines);
            }

void searchTree::numberoflines(int numOfLines){
    numOfLines--;
        std::cout<<"number of lines in text file: " << numOfLines << std::endl;
}

void searchTree::lower(std::string word)
{
     /*
     for(unsigned int i = 0; i < word.length(); ++i) {
                  word[i] = tolower(word[i]);
                  }
                  std::cout<<word<<std::endl;
                  */
    std::transform(word.begin(), word.end(), word.begin(), tolower);
    //std::cout << word << std::endl;
}
