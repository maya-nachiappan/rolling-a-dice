
//  CIS25 - assignment 3
//
//  Created by maya nachiappan on 9/14/24.
//
// a program to roll a dice and get a random value between 1 and 6 each time

#include <iostream>
#include <cstdlib> // header file for rand and srand
using namespace std;

int main()
{
    const int minValue = 1; // minimum dice value
    const int maxValue =6; // maximum dice value
    int random1, random2; // random dice variable values
    
    random1 = (rand()% (maxValue-minValue + 1)) + minValue;
    random2 = (rand()% (maxValue-minValue +1)) + minValue;
    
    cout << random1 << endl;
    cout << random2 << endl;
}
