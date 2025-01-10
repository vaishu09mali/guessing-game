#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));
    printf("welcome to gaming world of guessing number\n");
    random= rand()%100+1;//generating 0 to 100
    do{
      printf("\nplease enter your guess between(1 to 100):\n");
       scanf("%d",&guess);
       no_of_guess++;
       if(guess<random)
       {
           printf("\nguess a large number.");
       }
       else
        if(guess>random)
       {
           printf("\nguess a small number.");
       }
       else{
        printf("\ncongratulations!!!! you have successfully guessed the number in %d attempts.",no_of_guess);
       }

    }
    while(guess != random);

        printf("\nBye Bye, Thanks for playing");
        printf("\ndeveloped by: Vaishnavi Mali");

}
