/* question set from project euler */
#include<stdio.h>
#include<stdlib.h>

/*sum of multiples of 3 or 5 below 1000*/
void multiplesof3and5(){
    int count;
    int sum = 0;
    for(count = 0;count < 1000;count++){
        if(count%3 == 0 || count%5 == 0){
            sum += count;
        }
    }
    printf("%d\n",sum);
}

/*Fibonacci*/
void Fibonacci(){
    int termOne = 1,termTwo = 1;
    int sum = 0;
    int count = 0;
    while(termOne < 4000000){
        printf("%d %d ",termOne,termTwo);
        termOne = termOne+termTwo;
        termTwo = termOne+termTwo;
        if((termOne & 1) && termOne < 4000000){
            sum += termOne;
            count++;
        }
        if((termTwo & 1) && termTwo < 4000000){
            sum += termTwo;
            count++;
        }
    }
    putchar('\n');
    printf("number of even terms in the Fibonacci sequence = %d\n",count);
    printf("the sum of the numbers is %d\n",sum);
}

/*Fibonacci 2*/
int main(int argc,char *argv[]){
    multiplesof3and5();
    Fibonacci();
    return EXIT_SUCCESS;
}


