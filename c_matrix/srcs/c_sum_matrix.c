#include "c_matrix.h"

/*
**
**
**
*/


static int is_correct(matrix_t *A)
{
    return (A && A->rows > 0 && A->columns > 0);
}

int c_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result)
{
    if (!is_correct(A) || !is_correct(B))
        return (INCORRECT_MATRIX);

    if (A->rows != B->rows || A->columns != B->columns)
        return (CALC_ERROR);

    if (s21_create_matrix(A->rows, A->columns, result) != OK)
        return (MALLOC_FAILED);

    for (int i = 0; i < A->rows; i++)
    {
        for (int j = 0; j < A->columns; j++)
        {
            result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
        }
    }
    return (OK);
}