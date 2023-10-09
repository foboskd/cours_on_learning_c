#include <stdio.h>

int main(){
    int x, y, result = 0;
    char math;

    printf("input x = ");
    scanf("%d", &x);

    printf("input y = ");
    scanf("%d", &y);

    printf("input math operation = ");
    scanf(" %c", &math);
    /* Добавление пробела перед %c в scanf(" %c", &math); является необходимым для пропуска символа
 * новой строки или пробела, который может остаться во входном потоке после предыдущего вызова scanf или других функций ввода.
 * Добавление пробела перед %c в scanf(" %c", &math); позволяет пропустить любые символы пробела или новой строки,
 * которые могут находиться во входном потоке перед символом операции. Таким образом, гарантируется корректное
 * считывание символа операции.*/

    if(math == '+'){
        result = x + y;
    }
    else if(math == '-') {
        result = x - y;
    }
    else if(math == '/'){
        result = x / y;
    }
    else if(math == '*'){
        result = x * y;
    }
    else{
        printf("invalid symbol");
        return 0;
    }

    printf("Result = %d", result);
    return 0;
}
