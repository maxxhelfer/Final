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

void searchTree::printWords(std::string*& data)   {
    for(int j = 0; j<349900; j++){
                std::cout<<data[j]<<std::endl;
            }
}

bool searchTree::compare(std::string word, std::string*& data){

   /*
found=data.find(word);
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';
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
