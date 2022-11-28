#include <stdio.h>
#include "my_mat.h"
#define size 10

int mat [10][10];

int min(int a, int b)
{
  return ((a < b) ? a : b);
}


void shortestPath()
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i != j && mat[i][j] == 0)
            {
                mat[i][j] = (__INT_MAX__);
            }
        }
    }

    for(int k = 0; k < size; k++)
    {
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                int temp = 0;
                if(mat[i][k] == __INT_MAX__ || mat[k][j] == __INT_MAX__)
                {
                    temp = __INT_MAX__;
                }
                else
                {
                    temp = mat[i][k] + mat[k][j];
                }
                mat[i][j] = min(mat[i][j], temp);
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(mat[i][j] >= (__INT_MAX__))
            {
                mat[i][j] = 0;
            }
        }
    }
}

void A()
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    shortestPath(); 
}


void B(int i, int j)
{
    if(mat[i][j] != 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void C(int i, int j)
{
    if(mat[i][j] != 0)
    {
        printf("%d\n", mat[i][j]);
    }
    else
    {
        printf("-1\n");
    }
}