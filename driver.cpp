//Paige Mortensen
//2/7/21
//Project 2
//C++ intro/practice

#include <iostream>
#include <fstream>
#include <string>
#include "word_analyzer.h"
#define MIN_ARGS 2
#define ARRAY_LENGTH 100
#define UPPER_CHAR 'a'
#define LOWER_CHAR 'f'

using namespace std;

int getWords(int length, string words[], string filename);
string findLongestWord(int size, string words[]);

int main(int argc, const char* argv[]){
    //Call `getWords` to open the file and retrieve the words. 
    //If it returns an error code of -1, print the appropriate
    //error message (see above) and exit the program. If it 
    //succeeds, call the functions required to analyze the words in the array.
    string arrayOfWords[ARRAY_LENGTH];
    int letters = 0;
    int upperLetters = 0;
    int lettersInRange = 0;
    string longestWord;
    int arrayLength = 0;

    if(argc < MIN_ARGS){
        cout << "Correct usage:\n./text_analyzer filename" << endl;
        return 0;
    }

    arrayLength = getWords(ARRAY_LENGTH, arrayOfWords, argv[1]);

    if(arrayLength < 0){
        cout << "The file " << argv[1] << " could not be opened" << endl;
        return 0;
    }else{
        for(int i=0; i < arrayLength/* 10 */; i++){
            letters += countLetters(arrayOfWords[i]);
        }
        for(int i=0; i < arrayLength; i++){
            upperLetters += countUpperCaseLetters(arrayOfWords[i]);
        }
        for(int i=0; i < arrayLength; i++){
            lettersInRange += countLettersInRange(arrayOfWords[i], UPPER_CHAR, LOWER_CHAR);
        }
        //for(int i=0; i < arrayLength; i++){
            longestWord = findLongestWord(arrayLength, arrayOfWords);
        //}
    }

    cout << "There are " << letters << " letters in your file." << endl;
    cout << "There are " << upperLetters << " upper case letters in your file." << endl;
    cout << "There are " << lettersInRange << " letters between '" << UPPER_CHAR << "' and '" << LOWER_CHAR << "'." << endl;
    cout << "The longest word in this file is \"" << longestWord << "\"." << endl;
    return 0;
}

int getWords(int length, string words[], string filename){ //CORRECT
    int count = 0;
    string tempString;

    ifstream fin;
    fin.open(filename); //(filename.c_str()); // [___.c_str()] convert to a C style string

    if(fin.is_open()){
        while(fin >> tempString){ // NEVER USE FILENAME ONCE ITS BEEN OPENED IN STREAM
            words[count] = tempString;
            count++;
        }
        fin.close();
        return count;
    }else{
        return -1;
    }
}

string findLongestWord(int size, string words[]){ //return the longest word in the array
    string longest = "a";
    int i = 0;
    while(i < size){
        if(words[i].length() >= longest.length()){
            longest = words[i];
        }
        i++;
    }
    //longest.find_first_of(".!?-@#$%^&*()")
    if(ispunct(longest[longest.length()-1])){ // LOOK AT 
        longest.erase(longest.length()-1, 1);
    }

    return longest;
}

//if(ispunct(longest(longest.length()-1))