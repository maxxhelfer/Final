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
    int n = 349900;
    //int n = sTree.lineNum();
    string* data = new string[n];
    string strWords[n];

    char * fileName = "dictionary.txt";
    ifstream instream;


    string word2,word3;
    wordItem tmp;

    cout << "Welcome to Document search" << endl;
     while (quit != true){

        cout << "1. Read file" << endl;
        cout << "2. Search Word" << endl;
        cout << "3. Print Document" << endl;
        cout << "4. Number of lines in Document" << endl;
        cout << "5. Quit" << endl;

        cin >> input;
        if (input ==1){
            sTree.read(n,data);
        }
        else if(input == 2){
            /*
            instream.open(fileName);
            bool found = false;
            cout << "Enter a word:" << endl;
            cin>>word2;
            word2 = sTree.lower(word2);
            while (!instream.eof()){
                instream>>word3;
                //for(int i = 0; i < 349900; i++){
                    if(word2==word3){
                        cout<<word2<<" Was Found"<<endl;
                        found = true;
                        break;
                    }
                    else if (word2!=word3){
                        continue;
                    }

                //}
            }
            if (found == false){
            cout<<word2<<" Was Not Found"<<endl;
            }
            instream.close();

            */
            if(sTree.compare(word2) == true){
                cout<<"yeet"<<endl;
            }
            else{
                cout<<"neet"<<endl;
            }
        }
        else if (input == 3){
           sTree.printWords(data);
        }
        else if (input == 4){
           sTree.lineNum();
        }
        else if(input == 5){
            sTree.quit(quit);
            return 0;
        }
        else{
            cout<<"Error: Select input available"<<endl;

        }
    }
    return 0;
}
