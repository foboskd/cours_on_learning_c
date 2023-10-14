#include <stdio.h>
#include <stdlib.h>

int printier(int *array, int counter){
    int k = 0;
    while(k < counter){
        printf("%d ", array[k]);
        k++;
    }
}

int main(){
    
    int array_element = 0;
    int counter = 0;
    
    int *temp_array = NULL;

    char logic;
    scanf("%c", &logic);

    while(scanf("%d", &array_element) != 0){

        if(array_element == '.'){
            break;
        }

        temp_array = (int *)realloc(temp_array, (counter + 1) * sizeof(int));

        temp_array[counter] = array_element;
        
        counter++;

    }

    int i = 0;
    int temp = 0;

    while(i < counter){
        
        int j = 0;

        while(j < counter){
            
            if (logic == '>'){

                if(temp_array[i] > temp_array[j]){
                    temp = temp_array[i];
                    temp_array[i] = temp_array[j];
                    temp_array[j] = temp;
                }
            }
            else if(logic == '<'){
                
                if(temp_array[i] < temp_array[j]){
                    temp = temp_array[i];
                    temp_array[i] = temp_array[j];
                    temp_array[j] = temp;
                }
            }

            j++;

        }

        i++;
    }

    int printier(temp_array, counter);
    
    return 0;
}
