#include<stdio.h>

int main()
{

int age,shoesize,Result,Ans;

printf("Press 1 to play the game & press any other key to leave\n");

printf("\nDo you want to play this game:\n");
scanf("%d",&Ans);

if(Ans == 1)
{
do{
printf("Mind-blowing math trick can tell your age and shoe size\n");

printf("Enter the year you were born in:\n");
scanf("%d",&age);

printf("Enter your shoe size:\n");
scanf("%d",&shoesize);




printf("\nProcedure:\n");

printf("\nMultiply your shoe size by 5,then add 50,then take the total and multiply it by 20\n");

printf("\nThen add 1021 and subtract the year you were born in\n");

printf("\n(You can do this yourself in a notebook if you want to)\n");



Result = 100 * shoesize + 1000 + 1021 - age;

printf("\n %d \n",Result);

printf("\nVOILA, THE FIRST TWO NUMBERS OR FIRST NUMBER OF THE FOUR/THREE-DIGIT NUMBER YOU GET ARE YOUR SHOE SIZE, AND THE NEXT TWO NUMBERS ARE YOUR AGE\n");

printf("\nNOTE:If your birthday has not passed yet then subtract 1!\n");


printf("Do you want to play this game again? ");
scanf("%d",&Ans);
}while(Ans == 1);


}
else
{printf("Thank You For Coming");
}




return 1;
}
