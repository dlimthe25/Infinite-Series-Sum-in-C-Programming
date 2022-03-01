#include <stdio.h>

int main()
{
    int i,j;
    int array[50] = {1};
    int previous = 1;
    int global_sum = 0;
    for(i = 2; i<10; i++){
        global_sum = previous + i;
        for(j = 0; j<9; j++){
            if(array[j] != 0){
               printf("%d", array[j]);
                printf(" + "); 
            }
        }
        printf("%d = %d\n", i, global_sum);
        previous = global_sum;
        array[i-1] = i;
    }

    return 0;
}
