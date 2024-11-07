//arrays in c - 3d arrays
/*
author:moses
reg no:CT101/G/22682/24
date:7/11/2024
*/
#include <stdio.h>

int main() {
    // 
01. Declare and initialize the 3D array
    int scores[2][2][2] = {
        {
            {65, 92},
            {84, 72}
        },
        {
            {35, 70},
            {59, 67}
        }
    };

    // 
02. Print the elements of the array using nested for loops
    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
                printf("scores[%d][%d][%d] = %d\n", i, j, k, scores[i][j][k]);
            }
        }
    }

    return 0;
}
