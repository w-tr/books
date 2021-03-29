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
// Description    : Revised version of Program 8.13 using Variable-Length
// Concepts       : Same as Program 8.13, however introducing variable lengths 
//                :     to make the functions more generic
//                :     Recall c99 errors issues
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int main(void)
{
    //void scalarMultiply (int matrix[3][5], int scalar);
    //Adding var length (hard coded generics)
    void scalarMultiply (int nRows, int nCols, int matrix[nRows][nCols], int scalar);
    void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]);

    int sampleMatrix[3][5] =
    {
        {7, 16, 55, 13, 12},
        {12, 10, 52, 0, 7},
        {-2, 1, 2, 4, 9}
    };

    printf("Original matrix\n");
    displayMatrix(3, 5, sampleMatrix);


    printf("\n");
    printf("Multiplied by 2 : \n");
    scalarMultiply(3, 5, sampleMatrix, 2);
    displayMatrix(3, 5, sampleMatrix);


    printf("Then multiplied by -1 : \n");
    scalarMultiply(3, 5, sampleMatrix, -1); // yes i changed the order, sue me
    displayMatrix(3, 5, sampleMatrix);

}

// Funct to mult
void scalarMultiply (int nRows, int nCols, int matrix[nRows][nCols], int scalar)
{
    int row, column;

    for (row=0; row<nRows; ++row)
        for (column=0; column<nCols; ++column)
            matrix[row][column] *= scalar;

}

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols])
{
    int row, column;

    for (row=0; row<nRows; ++row)
    {
        for (column=0; column<nCols; ++column)
            printf("%5i", matrix[row][column]);
        printf("\n");
    }
}
