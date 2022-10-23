#ifndef C_MATRIX_H
# define C_MATRIX_H

#include <stdlib.h> // calloc
#include <math.h>   //fabs

#define SUCCESS 1
#define FAILURE 0



# define EPSILON 1e-07

enum
{
    OK = 0,
    INCORRECT_MATRIX = 1,
    CALC_ERROR = 2,
    MALLOC_FAILED = 3
};


typedef struct matrix_struct
{
    double  **matrix;
    int     rows;
    int     columns;
}               matrix_t;


int     c_create_matrix(const int rows, const int columns, matrix_t *result);
void    c_remove_matrix(matrix_t *A);
int     c_eq_matrix(matrix_t *A, matrix_t *B);




#endif 