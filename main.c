#include <stdio.h>
#include "my_mat.h"


int main()
{
    char func;
    int i,j ;

    if(scanf("%c", &func)!=EOF)
    {
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
            if(scanf("%c", &func)==EOF)
            {
                break;
            }
        }
    }

    return 0;
}