// IsPalindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>



int main()
{
    std::string str, revStr = "";


    std::cout << "Enter a single word: !\n";
    std::cin >> str;

    int len = (int)str.length();

    revStr.resize(len);

    for (int i = 0, j = len - 1; i < len; i++, j--) {
        revStr[i] = str[j];
    }
    revStr[len] = '\0';

    std::cout << str << " " << revStr << std::endl;

    if (str == revStr)
        std::cout << "is Palindrome";


    return 0;
}




