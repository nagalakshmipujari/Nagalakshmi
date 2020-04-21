/*Program: finding square and adding the squares of 'n' numbers.
filename:squares.cpp
date:10-04-2020
Author:P.Nagalakshmi
*/

#include <iostream>
#include<string.h>
using namespace std;

/*function name:SquareSum
input parameter:int
output parameter:int
*/

int SquareSum(int Number) // function for square & sum
{
        int i= 0, Sum = 0 ;

        if(Number>0 )
        {
                for ( i = 1; i <= Number; i ++)
                {
                // to square and add the squares
                        Sum += (i*i) ;
                }
                cout <<"sum :" << Sum ;
        }
        else
        {
                cout<<"enter a positive number" ;
        }
}

int main(int argc, char* argv[])
{
    // checking arguments to display -h
        if((argc == 2)&&(strcmp(argv[1],"-h")==0))
        {
                cout << "usage of square" << endl <<argv[0] ;
        }
        else
        {
                int Num=0 ;
                cout << "enter number:" ;
                cin >> Num;
                SquareSum(Num) ;
        }
}
