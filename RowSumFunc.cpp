#include "SumFunc.h"

void row_sum(int** m, unsigned rows, unsigned cols)
{
  for (unsigned i = 0; i < rows; i++)
  {
    int sum = 0;
    for (unsigned j = 0; j < cols; j++)
    {
      sum += m[i][j];
    }
  }
}
