/**
 * Author: 
 * Date: 
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main()
  {
    int i=1;
    for( ;i<=10;i++)
    {
      for(int j=1;j<=10;j++)
      {
        printf("%d * %d = %d ", i , j,i*j);

      }
      printf("***********\n");
    }
  }