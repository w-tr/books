//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//    ____ ___   __    _               
//   / __// o |,'_/  .' \              
//  / _/ / _,'/ /_n / o /   _   __  _    ___  _   _  __
// /_/  /_/   |__,'/_n_/   / \,' /.' \ ,' _/,' \ / |/ /
//                        / \,' // o /_\ `./ o // || / 
//                       /_/ /_//_n_//___,'|_,'/_/|_/ 
//  
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Author         : Wesley Taylor-Rendal (WTR)
// Design history : Review git logs.
// Description    : Using Multidimensional Arrays and Functions
// Concepts       : Multidimensional array must have column specified but not 
//                :     row.  
//                : Indexing element within can be used for funct that doens't 
//                :     take array for example sqrt(matrix[i][j])
//                : The functional prototype declaration is NEEDed in this 
//                :     example because of order. This enables writing out the 
//                :     skeleton on the code before even looking at the 
//                :     funtion.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    void scalarMultiply (int matrix[3][5], int scalar);
    void displayMatrix (int matrix[3][5]);

    int sampleMatrix[3][5] =
    {
        {7, 16, 55, 13, 12},
        {12, 10, 52, 0, 7},
        {-2, 1, 2, 4, 9}
    };

    printf("Original matrix\n");
    displayMatrix(sampleMatrix);


    printf("\n");
    printf("Multiplied by 2 : \n");
    scalarMultiply(sampleMatrix, 2);
    displayMatrix(sampleMatrix);


    printf("Then multiplied by -1 : \n");
    scalarMultiply(sampleMatrix, -1); // yes i changed the order, sue me
    displayMatrix(sampleMatrix);

}

// Funct to mult
void scalarMultiply (int matrix[3][5], int scalar)
{
    int row, column;

    for (row=0; row<3; ++row)
        for (column=0; column<5; ++column)
            matrix[row][column] *= scalar;

}

void displayMatrix (int matrix[3][5])
{
    int row, column;

    for (row=0; row<3; ++row)
    {
        for (column=0; column<5; ++column)
            printf("%5i", matrix[row][column]);
        printf("\n");
    }
}
