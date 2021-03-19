#include <stdio.h>
#define MAXSIZE 100
typedef struct va{
    char data[MAXSIZE];
    int length;
}va;

int main(void){
    struct va list_1;
    struct va list_2;
    int i;
    char t;
    for (i = 0; i < MAXSIZE && (t = getc(stdin)) != '\n'; ++i){
        if (t == ','){
            i -= 1;
        }else{
            list_1.data[i] = t;
        }
    };
    list_1.length = i - 1;

    i = 0;
    for (i = 0; i < MAXSIZE && (t = getc(stdin)) != '\n'; ++i){
        if (t == ','){
            i -= 1;
        }else{
            list_2.data[i] = t;
        }
    };
    list_2.length = i - 1;
    if (list_1.length == 0 && list_2.length ==0){
        printf("0\n");
        return 0;}
    for (int j = 0; j < list_1.length && j < list_2.length; ++j) {
        if (list_1.data[j] < list_2.data[j]){
            printf("1\n");
            return 0;
        }else if (list_2.data[j] < list_1.data[j]){
            printf("2\n");
            return 0;
        }
    }
    if (list_1.length == list_2.length){
        printf("0\n");
    } else if (list_1.length > list_2.length){
        printf("2\n");
    } else if(list_1.length < list_2.length){
        printf("1\n");
    }
    return 0;
    }
