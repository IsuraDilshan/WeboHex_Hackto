#include <stdio.h>

int integerPower(int base,int exponent)

{

    int i,ans=1;

    for(i=0; i<exponent ;i++)

    {

        ans =ans * base;

    }

   return ans;

}

int main()

{

     int exponent,base;

     printf("Please Input Base value : ");
     scanf(" %d",&base);

     printf("Please Input Exponent value : ");
     scanf(" %d",&exponent);


     printf("Answer is : %d\n",integerPower(base,exponent));

}
