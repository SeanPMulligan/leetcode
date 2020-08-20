/*
https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/

Given a sentence that consists of some words separated by a single space, and a searchWord.

You have to check if searchWord is a prefix of any word in sentence.

Return the index of the word in sentence where searchWord is a prefix of this word (1-indexed).

If searchWord is a prefix of more than one word, return the index of the first word (minimum index).
If there is no such word return -1.

A prefix of a string S is any leading contiguous substring of S.

 

Input: sentence = "i love eating burger", searchWord = "burg"

Output: 4
*/

#include <sstream>

class Solution {
public:
  int isPrefixOfWord(std::string sentence, std::string searchWord) {
    std::istringstream ss(sentence);
    int len = searchWord.length();
    int wordCounter = 0;
  
    while (ss) { 
      std::string word;
      wordCounter++;
      int i = len;
      int j = 0;
    
      ss >> word; 
    
      for (char c : word) {
        if (searchWord[j] == c) {
          i--;
          j++;
        } else {
          break;
        }

        if (i == 0) return wordCounter;
      } 
    };      
    return -1;
  }
};
