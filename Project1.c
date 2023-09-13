#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 +1; // Generate Random number between 1 and 100
    //keep running the loop until the number guess
    do{
        printf("Guess the number betwen 1 to 100 \n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower Number Please ! \n");
        }
        else if(guess<number){
            printf("Higher number please ! \n");
        }
        else{
            printf("You Guess it in %d Attempt \n",nguesses);
        }
        nguesses++;
    }
    while (guess !=number);{
        return 0;
    }
}
        