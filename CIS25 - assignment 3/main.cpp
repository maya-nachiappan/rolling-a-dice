
//  CIS25 - assignment 3
//
//  Created by maya nachiappan on 9/14/24.
//
// a program to roll a dice and get a random value between 1 and 6 each time

#include <iostream>
#include <cstdlib> // header file for rand and srand
#include <ctime> // for time function
using namespace std;

int main()
{
    const int minValue = 1; // minimum dice value
    const int maxValue =6; // maximum dice value
    int random1, random2; // random dice variable values
    
    unsigned seed = time(0); // gets system time
    srand(seed); // gets new seed for random number generator every time the sytem time changes
    
    random1 = (rand()% (maxValue-minValue + 1)) + minValue; // gets the first random value
    random2 = (rand()% (maxValue-minValue +1)) + minValue; // gets the second random value
    
    cout << random1 << endl;
    cout << random2 << endl;
}
