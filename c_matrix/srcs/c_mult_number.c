#include "c_matrix.h"

/*
** matrix_t    *c_mult_number(matrix_t *A, double number)
** Умножение матрциы на число
**
**
*/

static int is_correct(matrix_t *A)
{
    return (A && A->rows > 0 && A->columns > 0);
}

matrix_t    *c_mult_number(matrix_t *A, double number)
{
    matrix_t    *result;

    if (!is_correct(A))
        return (NULL);

    result = c_create_matrix(A->rows, A->columns);
    if (result == NULL)
        return (NULL);

    for (int i = 0; i < A->rows; i++)
    {
        for (int j = 0; j < A->columns; j++)
        {
            result->matrix[i][j] = A->matrix[i][j] * number;
        }
    }
    return (result);
}