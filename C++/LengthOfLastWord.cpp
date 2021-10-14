/*

Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

*/

#include <iostream>
#include <string>



int lengthOfLastWord(std::string s) {
    int count = 0;
    int n = s.size();
    int i = 0;

    while (i < n) {
        if (s[i] != ' ') {
            count++;
            i++;
        }
        else {
            while (i < n && s[i] == ' ') {
                i++;
            }
            if (i == n) {
                return count;
            }
            else {
                count = 0;
            }
        }
    }
    return count;
}

//Driver code
int main()
{
    std::string testString = "   fly me   to   the moon  ";
	std::cout << lengthOfLastWord(testString);
	return 0;
}