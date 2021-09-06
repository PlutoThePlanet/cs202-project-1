# ProgrammingAssignment1

## Project Goals
The goal of this project is to:
1.	Familiarize students with developing projects which contain multiple files.
2.	Introduce students to using makefiles.
3.	Provide practice with new C++ skills, such as File IO, Standard IO, and the string library.
### Important Notes:
1.	Formatting: Make sure that you follow the precise recommendations for the output content and formatting. For example, do not change the text from 
“Correct usage: ” to “correct”.
**Your assignment will be auto-graded and any changes in formatting will result in a loss in the grade.**
2.	Comments: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
## Program
Your finished project should include the following files:
- driver.cpp
- word_analyzer.cpp
- word_analyzer.h
- makefile
## Programming Problem
Write a program for analyzing text loaded from a file. 
- The name of the text file should be provided as a command line argument. 
- If a filename is not provided, an error message should be displayed to the user. 
- If the file cannot be opened for reading, an error message should be displayed to the user.

Assuming that the file is successfully opened, the following metrics must be determined:

* The total number of letters in the file. Numbers, spaces, and punctuation should be excluded. Example: "abd'd" contains 4 letters, not 5 (ignoring the " characters of course...)
* The longest word in the file
* The total number of lowercase letters between 'a' and 'f' (inclusive) in the file.
* The total number of upper case letters in the file


Here is an example of how the program could function using the following `poem.txt` file as input:

> Haikus are Easy.  
But sometimes they don't make sense.  
Refrigerator.

**Program Output**

```
> ./text_analyzer 
Correct usage:
./text_analyzer filename

> ./text_analyzer badfile.txt
The file badfile.txt could not be opened

> ./text_analyzer poem.txt 
There are 54 letters in your file.
There are 4 upper case letters in your file.
There are 16 letters between 'a' and 'f'.
The longest word in this file is "Refrigerator".
```
## Coding Requirements

Here are the detailed descriptions of the files and functions to be created.

#### File `driver.cpp`
*main()*  
Functionality: The main function should check for the correct number of command line arguments and display an error message (including the file name) if necessary. It should then call the appropriate functions (defined below) to calculate metrics for the input file. Finally, it should print the results of the analysis.

Call `getWords` to open the file and retrieve the words. If it returns an error code of -1, print the appropriate error message (see above) and exit the program. If it succeeds, call the functions required to analyze the words in the array. Do *not* print inside these functions. Output to the user should *only* occur in the `main`.


*getWords()*  
Input Parameters: integer size of string array, array of strings, string filename
Returned Output: integer number of words stored
Functionality: This function should accept a filename, an array of strings for storing each of the words, and a size parameter for the array. It should attempt to open the input file for reading. If it cannot open the input file for reading, it should return -1. If it can open the input file for reading, it should get each of the words from the file and store them into the array of strings that was passed in. Finally, it should return the number of words it successfully pulled from the file.

*findLongestWord()*  
Input Parameters: integer size, array of strings
Returned Output: string
Functionality: This function should accept an array of strings containing all the words (one word per string. The function should return the longest word in the array.


#### File `word_analyzer.h`

This file should contain the function prototypes for the following functions:  
```
int countLetters(string word);  
int countLettersInRange(string word, char lower, char upper);
int countUpperCaseLetters(string word);  
```

#### File `word_analyzer.cpp`
Functionality: This file should contain the function definitions for the following functions:


*countLetters()*  
Input Parameters: a single string
Returned Output: integer number of letters in that word
Functionality: This function should accept as a parameter a single string which stores one word. It should iterate over the string and count how many characters are letters (_not punctuation_). 

*countUpperCaseLetters()*  
Input Parameters: a single string
Returned Output: integer number of upper-case letters in the input word
Functionality: This function should accept as a parameter a single string which stores one word. It should iterate over the string and return the number of characters that are upper-case letters. 

*countLettersInRange()*  
Input Parameters: a single string, a character as the lower bound, and a character as the upper bound
Returned Output: the number of characters that are within the range between the lower and upper bound characters, inclusive
Functionality: This function should accept as a parameter a single string which stores one word. It should iterate over the string and count how many characters are within the Finally, it should return the number of upper-case letters found. 

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type ```git clone <clone URL>```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “your commit message”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:

* Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.

* Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official. 

Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic dishonesty according to the code of this university. Academic dishonesty will not be tolerated and penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
