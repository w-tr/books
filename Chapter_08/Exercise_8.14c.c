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
// Description    : Edited Exercise_8.12b to include global variables
// Concepts       : Global variables may have been an improvement over 8.12a, 
//                :     but they seem to limit and restrict 8.12b. The reduced
//                :     generality is becoming more noticable.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

int nRows;
int nCols;
// int M[i][j] = {  // use Tabularise /, in vim
int M[4][5] = {  
    { 2 , 3  , 5  , 7  , 11} ,
    {13 , 17 , 19 , 23 , 31} ,
    {37 , 41 , 43 , 47 , 53} ,
    {59 , 61 , 67 , 71 , 73}
};
int N[5][4];

void transposeMatrix (void)
{
    int row, column;
    int b_column = nRows;
    int b_row = nCols;
    // nested loop to cycle elements
    for (row = 0; row < b_column; ++row)
        for (column = 0; column < b_row; ++column)
            N[column][row] = M[row][column];
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

int main(void)
{
    const int j = 5;
    const int i = 4;
    // int M[i][j] = {  // use Tabularise /, in vim
    // int M[4][5] = {  
    //                 { 2 , 3  , 5  , 7  , 11} ,
    //                 {13 , 17 , 19 , 23 , 31} ,
    //                 {37 , 41 , 43 , 47 , 53} ,
    //                 {59 , 61 , 67 , 71 , 73}
    // };
    // int N[5][4];

    nRows = i;
    nCols = j;

    transposeMatrix();
    displayMatrix(i, j, M);
    printf("\n");
    displayMatrix(j, i, N);
    return 0;
}
