#include "searchTree.h"
#include <fstream>
#include <sstream>
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

void searchTree::read(int n,std::string*& data){

        std::ifstream file("dictionary.txt");
                if(file.good()){
                while(!file.eof()){
                    for(int i = 0; i<n; i++){
                        file>>data[i];
                    }}
                    std::cout<<"read"<<std::endl;
            }

}

void searchTree::printWords(std::string*& data)   {
    for(int j = 0; j<349900; j++){
                std::cout<<data[j]<<std::endl;
            }
}

bool searchTree::compare(std::string word2){
    std::string word3;
    char * fileName = "dictionary.txt";
    std::ifstream instream;
    instream.open(fileName);
            bool found = false;
            std::cout << "Enter a word:" << std::endl;
            std::cin>>word2;
            word2 = sTree.lower(word2);
            while (!instream.eof()){
                instream>>word3;
                //for(int i = 0; i < 349900; i++){
                    if(word2==word3){
                        std::cout<<word2<<" Was Found"<<std::endl;
                        found = true;
                        return true;
                        break;
                    }
                    else if (word2!=word3){
                        continue;
                    }

                //}
            }
            if (found == false){
            std::cout<<word2<<" Was Not Found"<<std::endl;
            return false;
            }
            instream.close();

}

 int searchTree::lineNum(){
                int numOfLines=0;
                std::string line;
                std::ifstream myfile("dictionary.txt");
                if(myfile.is_open()){
                    while(!myfile.eof()){
                        getline(myfile,line);
                        //std::cout<< line << std::endl;
                        numOfLines++;
                    }
                myfile.close();
                }
            searchTree::numberoflines(numOfLines);
            return numOfLines;
            }

void searchTree::numberoflines(int numOfLines){
    numOfLines--;
        std::cout<<"number of lines in text file: " << numOfLines << std::endl;
        //return numOfLines;
}

std::string searchTree::lower(std::string word)
{
     /*
     for(unsigned int i = 0; i < word.length(); ++i) {
                  word[i] = tolower(word[i]);
                  }
                  std::cout<<word<<std::endl;
                  */
    std::transform(word.begin(), word.end(), word.begin(), tolower);
    return word;
    //std::cout << word << std::endl;
}

bool searchTree::quit(bool quit){
    quit = true;
    std::cout<<"Goodbye"<<std::endl;
    return 0;
}
