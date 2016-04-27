#include <iostream>
#include <fstream>
#include <sstream>
#include "searchTree.h"

using namespace std;

int main()
{
    searchTree sTree;
    bool quit = false;
    int input;
    string word,sea,words;
    string* data = new string[349900];
    string strWords[349900];
    ifstream file("dictionary.txt");
                if(file.good()){
                while(!file.eof()){
                    for(int i = 0; i<349900; i++){
                        file>>data[i];
                    }}
                    //cout<<"read"<<endl;

            }

    cout << "Welcome to Document search" << endl;
     while (quit != true){

        cout << "1. Search Word" << endl;
        cout << "2. Print Document" << endl;
        cout << "3. Number of lines in Document" << endl;
        cout << "4. Quit" << endl;

        cin >> input;
        if(input == 1){
            cout << "Enter a word:" << endl;
            cin>>word;
            //getline(cin,word);
            sTree.lower(word);
            sTree.compare(word,data);
        }
        else if(input == 2){
            sTree.printWords(data);
            //sTree.printWords();
        }
        else if (input == 3){
           sTree.lineNum();
        }
        else if(input == 4){
            cout<<"Thank You For Playing"<<endl;
            quit = true;
        }
        else{
            cout<<"Error: Select input available"<<endl;

        }
    }
    return 0;
}
