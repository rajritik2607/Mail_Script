#include<omp.h>
#include<stdio.h>
void main()
{
    #pragma parallel
    {
        int i,j;
        #pragma omp parallel for schedule(static,5)
        for ( i=0; i<5; i++)
        {
            for(j=0; j<6; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n\n19BCE0133\n\n");
    }
}
