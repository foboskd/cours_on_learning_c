#include <stdio.h>
#include <stdlib.h>
#include "prntfunc.h"


int main(){

    int counter = 0;
    int array_element = 0;

    int *dinamic_array = NULL;

    printf("Insert integer row: ");

    while(scanf("%d", &array_element) != 0){

        if(array_element == '.'){
            break;
        }

        dinamic_array = (int*)realloc(dinamic_array, (counter + 1) * sizeof(int));

        dinamic_array[counter] = array_element;

        counter++;

    }


    int i = 0;
    int j = 0;
    int temp = 0;
    int maxindex = 0;

    while (i < counter - 1){
        j = i + 1;
        maxindex = i;

        while (j < counter){
                       
            if(dinamic_array[maxindex] < dinamic_array[j]){
                maxindex = j; 
            }
            j++;
        }
            
        if(maxindex != i){
            temp = dinamic_array[maxindex];
            dinamic_array[maxindex] = dinamic_array[i];
            dinamic_array[i] = temp;
        }
        i++;
    
    }

    prntfunc(dinamic_array, counter);


    free(dinamic_array);



}