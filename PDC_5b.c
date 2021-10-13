#include<omp.h>
#include<stdio.h>
void main()
{
    #pragma parallel
    {
        int x,y;
        #pragma omp parallel for schedule(dynamic,5)
        for ( x = 0; x < 5; x++)
        {
            for(y=0; y<6; y++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n\n19BCE0133\n\n");
    }
}
