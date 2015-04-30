#include <stdio.h>   //C Standard Input and Output Library
#include <math.h>    // Math Library

#define a 3   //The constant value of a is 3
#define b 5   //The constant value of b is 5
#define c 10  //The constant value of c is 10

int main()
{
    printf("/**************************************************************************\n *                   Mureithi David Wachira                               *\n *                   P15/2204/2011                                        *\n *                                                                        *\n *                   University of Nairobi                                *\n *                   School of Computing & Informatics                    *\n *                                                                        *\n *                   Date: Tueday 12th February 2013                      *\n *                                                                        *\n *                   Develop a program that displays                      *\n *                   the computational result of an                       *\n *                   algebraic equation z=ax^5+by^2+c                     *\n *                                                                        *\n *                   CSC121 : Programming & Problem solving               *\n *                                                                        *\n *************************************************************************/\n\n");

    int x,y;
    double z;

    printf("Enter a value for x:\n");//prompts the user to enter a value for x
    scanf("%d", &x);

    printf("Enter a value for y:\n");//prompts the user to enter a value for y
    scanf("%d", &y);

    z=((a*pow(x,5))+(b*(y,z))+c);

    printf("The solution to the algebraic equation z=%d*%d^5+%d*%d^2+%d where a=3, b=5 and c=10 is : %.2lf\n", a,x,b,y,c,z);//Displays the solution to z

    return 0;


}//End of program

