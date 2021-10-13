#include <stdio.h>
#include <omp.h>
void main()
{
    int x=50,y=60;
     #pragma omp parallel
     {
         #pragma omp sections
         {
             #pragma omp section
             printf("Sum : %d\n",x+y);
             #pragma omp section
             printf("Difference : %d\n",x-y);
             #pragma omp section
             printf("Product : %d\n",x*y);
         }
     }
     printf("\n\nShruti Shreya, 19BCE0133\n\n");
}
