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
                if(scanf("%d %d", &i, &j)!=EOF){
                     B(i,j);
                }
            }
            if(func == 'C')
            {
                if(scanf("%d %d", &i, &j)!=EOF){
                     C(i,j);
                }
            }
            if(scanf("%c", &func)==EOF)
            {
                break;
            }
        }
    }

    return 0;
}