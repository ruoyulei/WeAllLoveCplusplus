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
int main(int argc,char *argv[]){
    multiplesof3and5();
    return EXIT_SUCCESS;
}


