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
// Description    : Function to transpose [4][5] into [5][4] matrix
// Concepts       : 2D matrix manipulation. With row unconstrained and column
//                :     known.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

// In exercise_8.12a the dimensions are known.
void transposeMatrix (int a[][5], int b[][4])
{
    int row, column;
    int b_column = 4;
    int b_row = 5;
    // nested loop to cycle elements
    for (row = 0; row < b_column; ++row)
        for (column = 0; column < b_row; ++column)
            b[column][row] = a[row][column];
}

// // prog_8.13a, with known var length dimensions 
// // visual studio doesn't like variable lengths like this
// // void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols])
// // {
// //     int row, column;
// // 
// //     for (row=0; row<nRows; ++row)
// //     {
// //         for (column=0; column<nCols; ++column)
// //             printf("%5i", matrix[row][column]);
// //         printf("\n");
// //     }
// // }

// A seperate matrix is called for displaying each unique matrix 
// because of dimension issues.
void displayMatrix1 (int matrix[][5])
{
    int row, column;

    for (row=0; row<4; ++row)
    {
        for (column=0; column<5; ++column)
            printf("%5i", matrix[row][column]);
        printf("\n");
    }
}
void displayMatrix2 (int matrix[][4])
{
    int row, column;

    for (row=0; row<5; ++row)
    {
        for (column=0; column<4; ++column)
            printf("%5i", matrix[row][column]);
        printf("\n");
    }
}

int main(void)
{
    const int j = 5;
    const int i = 4;
    // int M[i][j] = {  // use Tabularise /, in vim
    int M[4][5] = { 
                    { 2 , 3  , 5  , 7  , 11} ,
                    {13 , 17 , 19 , 23 , 31} ,
                    {37 , 41 , 43 , 47 , 53} ,
                    {59 , 61 , 67 , 71 , 73}
    };
    int N[5][4];

    transposeMatrix(M, N);
    displayMatrix1(M);
    printf("\n");
    displayMatrix2(N);
    return 0;
}
