
#include <iostream>
using namespace std;


bool palindromeChecker(string word) {
    // base casde
    if (word.length() <= 1)
            return true;

    else
        if (word.at(0) != word.at(word.length() - 1))
            return false;
        else
            return palindromeChecker(word.substr(1, word.length() - 2));
    return true;
    
}


int main()
{
    string word;
    cout << "Enter a word to check if it is a palindrome: ";
    cin >> word;

    if (palindromeChecker(word) == 1)
        cout << word << " IS a palindrome" << endl;
    else
        cout << word << " is NOT a palindrome" << endl;

    system("pause");
    return 0;
}