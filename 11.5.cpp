//Symmetry
#include<stdio.h>
int main()
{
  int m, n, i, j;
  
  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d", &m, &n);
  
   int matrix[m][n], transpose[m][n];
  printf("Enter elements of the matrix\n");

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &matrix[i][j]);
      
      printf("Entered matrix: \n");
  for (int i = 0; i < m; ++i)
  for (int j = 0; j < n; ++j) 
  {
    printf("%d  ", matrix[i][j]);
    if (j == n - 1)
    printf("\n");
  }

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      transpose[j][i] = matrix[i][j];

  if (m == n) 
  {
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < m; j++)
      {
        if (matrix[i][j] != transpose[i][j])
          break;
      }
      if (j != m)
        break;
    }
    if (i == m)
      printf("The matrix is symmetric.\n");
    else
      printf("The matrix isn't symmetric.\n");
  }
  else
    printf("The matrix isn't symmetric.\n");

  return 0;
}
