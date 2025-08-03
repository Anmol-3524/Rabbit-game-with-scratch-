#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number, random_number;
    char name[50]; // character array to prevent the segmentation fault 
    printf(" Hello!\n");
    printf("\n Let's play a game\n");
    printf("\n I'll pick a random number from 1 to 5 and you have to guess that number\n");
    printf("\n You have to keep trying till the answer is correct\n");
    printf("\n Thinking randome number...\n");
    srand(time(NULL)); // srand (seed) is used to generate a new number everytime from the start, time(NULL) returns the current time in seconds, using it with seed make it choose a new value everysecond
    random_number = (rand() % 5) + 1; // rand: get pseudo random value ( 1,2,3,4,5 ) everytime you run it 
      printf("\n Guess a number from 1 to 5: \n\n");
    do
    {
      scanf("%d", &number);
          if (number == random_number) 
        {
            printf("\n Right answer!\n");
        }
        else 
        {
            printf("\n Incorrect answer!\n");
            printf("\n Guess the number again \n");
        } 
    }  
    while ( number != random_number);
    printf("\n May i know your name please?\n");
    scanf("%s", &name);
    printf("\n Thank you for the food, %s !:) \n",name);
    return 0;
}
