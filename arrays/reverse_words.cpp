// Write a function reverseWords() that takes a message as a string and reverses the order of the words in place.

#include <iostream>
#include <algorithm>
#include <string>

void reverseWords(std::string& message)
{
    int i = 0;
    int j = message.length() - 1;
    int len = message.length();
    
    while (i < j) {
        std::swap(message[i++], message[j--]);
    }
    
    int start = 0;
    int end = 0;
    
    while (start < len) {
        if (message[end] == ' ' || end == len) {
            int i = start;
            int j = end - 1;
            
            while (i < j) {
                std::swap(message[i++], message[j--]);
            }
            start = end + 1;
            end = end + 1;
        } else {
            end++;
        }
    }
}
