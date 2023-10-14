#include <stdio.h>

int main(){

    int array[5] = {1, 19, 3, 8, 4};

    int i = 0;
    int temp = 0;

    while(i < 5){
        int j = 0;

        while(j < 5){

            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

            j++;

        }

        i++;
    }


    int k = 0;

    while(k < 5){
        printf("%d ", array[k]);
        k++;
    }

    return 0;
}
