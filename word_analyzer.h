#ifndef WORD_ANALYZER_H
#define WORD_ANALYZER_H//SHOULD INCLUDE GUARDS TO PREVENT LOADING IN MORE THAN ONCE
#include <string>

int countLetters(std::string word);  
int countLettersInRange(std::string word, char upper, char lower);
int countUpperCaseLetters(std::string word);

#endif