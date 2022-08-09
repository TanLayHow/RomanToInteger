// RomanToInteger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    int total = 0;
    int j = 0;
    for (int i = 0; i + j < s.length(); i++)

        if (s[i + j] == 'I')
        {
            if (s[i + j + 1] == 'V')
            {
                total += 4;
                j++;
            }
            else if (s[i + j + 1] == 'X')
            {
                total += 9;
                j++;
            }
            else
            {
                total += 1;
            }
        }


        else if (s[i + j] == 'V')
            total += 5;

        else if (s[i + j] == 'X')
            if (s[i + j + 1] == 'L')
            {
                total += 40;
                j++;
            }
            else if (s[i + j + 1] == 'C')
            {
                total += 90;
                j++;
            }
            else
            {
                total += 10;
            }

        else if (s[i + j] == 'L')
            total += 50;

        else if (s[i + j] == 'C')
            if (s[i + j + 1] == 'D')
            {
                total += 400;
                j++;
            }
            else if (s[i + j + 1] == 'M')
            {
                total += 900;
                j++;
            }
            else
            {
                total += 100;
            }

        else if (s[i + j] == 'D')
            total += 500;

        else if (s[i + j] == 'M')
            total += 1000;

    return total;
}

int main()
{
    string roman;
    cout << "Test cases" << endl;
    cout << "MCMXCIV = 1994" << endl;
    cout << "XVIII = 18" << endl;
    cout << "MMXXI = 2021" << endl;
    cout << "---------------" << endl;

    cout << "Please enter roman numeral: ";
    cin >> roman;
    cout << "Result: " << roman << " :" << romanToInt(roman) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
