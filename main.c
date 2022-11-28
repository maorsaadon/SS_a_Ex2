#include <stdio.h>
#include "my_mat.h"


int main()
{
    char func = 0;
    int i = 0;
    int j = 0;
    scanf("%c", &func);
    while(func != 'D')
    {
        if(func == 'A')
        {
            A();
        }
        if(func == 'B')
        {
            scanf("%d %d", &i, &j);
            B(i,j);
        }
        if(func == 'C')
        {
            scanf("%d %d", &i, &j);
            C(i,j);
        }
        scanf("%c", &func);
    }
    return 0;
}