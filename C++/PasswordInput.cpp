// C++ program to take the input
// invisibly
#include <iostream>
#include <windows.h>
using namespace std;
 
// Function take password and
// reset to console mode
std::string takePasswdFromUser()
{
    HANDLE hStdInput
        = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode = 0;
 
    // Create a restore point Mode
    // is know 503
    GetConsoleMode(hStdInput, &mode);
 
    // Enable echo input
    // set to 499
    SetConsoleMode(
        hStdInput,
        mode & (~ENABLE_ECHO_INPUT));
 
    // Take input
    string ipt;
    getline(cin, ipt);
 
    // Otherwise next cout will print
    // into the same line
    cout << endl;
 
    // Restore the mode
    SetConsoleMode(hStdInput, mode);
 
    return ipt;
}
 
// Driver Code
int main()
{
    string input;
    cout << "@root>>> ";
 
    // Function Call
    input = takePasswdFromUser();
 
    // Print the input
    cout << input << endl;
}
