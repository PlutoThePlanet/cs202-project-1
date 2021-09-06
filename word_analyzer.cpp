#include <iostream>
#include <string>

using namespace std;

int countLetters(string word){ //iterate over the string and count how many characters are letters (_not punctuation_)
    int count = 0;

    for(int i=0; i < word.length(); i++){
        if(((word[i] >= 'a') && (word[i] <= 'z')) || ((word[i] >= 'A') && (word[i] <= 'Z'))){
            count++;
        }
    }
    return count;
}  

int countUpperCaseLetters(string word){ //iterate over the string and return the number of characters that are upper-case letters
    int count = 0;

    for(int i=0; i < word.length(); i++){
        if((word[i] >= 'A') && (word[i] <= 'Z')){
            count++;
        }
    }
    return count;
}

int countLettersInRange(string word, char upper, char lower){ // can always use the a - f range
    int count = 0;

    for(int i=0; i < word.length(); i++){
        if((word[i] >= upper) && (word[i] <= lower)){
            count++;
        }
    }
    return count;
}