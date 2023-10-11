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
    int limit ;
    printf("enetr the limit");
    scanf("%d",& limit);
    
    for( ;i<=limit;i++)
    {
      for(int j=1;j<=10;j++)
      {
        printf("%d * %d = %d\n ", i , j,i*j);

      }
      printf("***********\n");
    }
  }