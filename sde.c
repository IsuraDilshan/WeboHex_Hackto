#include <stdio.h>

int main()
{
           int A[4]={15,23,8,9};
           int B[4]={12,5,32,4};
           int C[4]={3,18,1,28};
           int i,SUM[4],EVEN[4];

           printf("\n\n     A :- \t");

           for(i=0;i<4;i++)
           {

              printf("%d\t",A[i]);

           }

           printf("\n\n     B :- \t");

           for(i=0;i<4;i++)
           {

              printf("%d\t",B[i]);

           }

           printf("\n\n     C :- \t");

           for(i=0;i<4;i++)
           {

               printf("%d\t",C[i]);

           }

           printf("\n\n   SUM :- \t");

           for(i=0;i<4;i++)
           {

               SUM[i] = A[i] + B[i] + C[i];

               printf("%d\t",SUM[i]);

           }

           printf("\n\n  EVEN :- \t");

           for(i=0;i<4;i++)
           {

               if(SUM[i]%2==0)
                {

                   EVEN[i]= SUM[i];

                   printf("%d\t",EVEN[i]);

                 }

           }

         printf("\n\n");

return 0;

}



