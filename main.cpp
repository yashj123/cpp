#include <iostream>
#include <stdlib.h>
#include <fstream>
#include<time.h>
using namespace std;
int main(){
    srand(time(0));
    int number = rand();
    ifstream fin("dict.txt");
    int numofwords;
    fin>>numofwords;
    string word;
    for (int i = rand()%numofwords; i>=0; i--){
        fin>>word;
    }
    fin.close();
    int num,mistakes = 0;
    num = word.length();
    char letter;
    cout<<"The word has been selected. Now it is your turn to guess a word."<<endl;
    string dashes;
    for (int i = 0; i < num; i++){
        dashes = dashes + "-";
    }
    cout<<dashes;
    cout<<" are the amount of letters."<<endl;
    cout<<endl;
    int duck = 0;
    string myArray="";
    for (int mistakes = 0; mistakes < 5;){
        cout<<"Please now type in the letter you would like to guess."<<endl;
        cin>>letter;
        int found = myArray.find(letter);
        if (found != -1 ){
            cout<<"Type a new letter as you already have said this letter. This will not be considered a deduction"<<endl;
            cin>>letter;
        }
        int numCorrect = 0;
        for (int i = 0; i <= num; i++ ){
                if(letter == word[i]){
                    cout<<"letter is correct"<<endl;
                    dashes[i] = word[i];
                    cout<<dashes<<endl;
                    numCorrect = 1;
                    myArray = myArray + letter;
                    cout<<"These are the letters used: "<< myArray<<","<<endl;
                    }
        }
        if(numCorrect==0){
            mistakes++;
            cout<<"You got the letter wrong!"<<endl;
            myArray = myArray + letter;
            cout<<"These are the letters used: "<<myArray<<endl;
}
if(mistakes == 1){
    cout<<"====="<<endl;
    cout<<"    |"<<endl;
    cout<<"    |"<<endl;
    cout<<"    O"<<endl;

}
if(mistakes == 2){
    cout<<"====="<<endl;
    cout<<"    |"<<endl;
    cout<<"    O"<<endl;
    cout<<"    |"<<endl;
}
if(mistakes == 3){
    cout<<"====="<<endl;
    cout<<"    |"<<endl;
    cout<<"    O"<<endl;
    cout<<"  --|--" <<endl;

}
if(mistakes == 4){
    cout<<"====="<<endl;
    cout<<"    |"<<endl;
    cout<<"    O"<<endl;
    cout<<"  --|--" <<endl;
    cout<<"    | "<<endl;


}
if(mistakes == 5){
    cout<<"====="<<endl;
    cout<<"    |"<<endl;
    cout<<"    O"<<endl;
    cout<<"  --|--" <<endl;
    cout<<"    | "<<endl;
    cout<<"   / \\" <<endl;
    cout<<word<<" was the word that caused you to lose."<<endl;
    cout<<"YOU LOST"<<endl;
    cout<<word<<endl;

}


if (dashes == word){
    cout<<"YOU WON!"<<endl;
    cout<<word<<endl;
break;
}
}
}

