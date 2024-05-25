#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, gusses,ngusses = 0;
    srand(time(0));
    number = rand()%100 + 1;
    // printf("the random number is %d",number);
    do
    {
        printf("Gusse the number between 1 to 100 \n");
        scanf("%d", &gusses);
        if (gusses>number)
        {
            printf("Gusse a lower number please!\n");
        }
        else if (gusses<number)
        {
            printf("Gusse a higer number please!\n");
        }
        else{
            printf("you Gusse correct!!! in %d attempts \n", ngusses);
        }
        ngusses++;
        
    }while(gusses!=number);
    
    return 0;
}