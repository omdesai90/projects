#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int first,second,third,forth,ans=0;

    printf("0. Black\n");
    printf("1. Brown\n");
    printf("2. Red\n");
    printf("3. Orange\n");
    printf("4. Yello\n");
    printf("5. Green\n");
    printf("6. Blue\n");
    printf("7. Violet\n");
    printf("8. Grey\n");
    printf("9. White\n");



// code for first band color select -------------------------------------------------
   printf("Enter color digit of 1st band from above table : ");
   scanf("%d",&first);

   while(first<0 || first>9) {
   printf("please enter correct value of 1st band : ");
   scanf("%d",&first);
}



// code for second band color select ------------------------------------------
   printf("\nEnter color digit of 2nd band from above table : ");
   scanf("%d",&second);

   while(second<0 || second>9) {
   printf("please enter correct value of 2nd band : ");
   scanf("%d",&second);
}



// code for multiplier color select ------------------------------------------------
   printf("\nEnter color digit of multiplier from above table : ");
   scanf("%d",&third);

   while(third<0 || third>9) {
   printf("please enter correct value of multiplier : ");
   scanf("%d",&third);
}



// code for tolerance color select ------------------------------------------------
    printf("\n\n");
    printf("0. Gold\n");
    printf("1. Silver\n");
    printf("2. No color\n");


   printf("Enter color digit of multiplier from above table : ");
   scanf("%d",&forth);

   while(forth<0 || forth>2) {
   printf("please enter correct value of multiplier : ");
   scanf("%d",&forth);
}

    if(forth == 0) forth = 5;
    else if(forth == 1) forth = 10;
    else forth = 20;

    ans = ((first * 10) + second) * pow(10, third);

    printf("\n\nResistor value: %d Ω -+%d%%",ans,forth);
  //  printf("-+ %d ",forth);
  //  printf("%")


    return 0;
}