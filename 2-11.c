#include <stdio.h>
#define MAXSIZE 100
typedef struct va{
    char data[MAXSIZE];
    int length;
}va;

int main(void){
    struct va list;
    int i, op;
    op = 0;
    char t;
    for (i = 0; i < MAXSIZE && (t = getc(stdin)) != '\n'; ++i){
        if (t == ' '){
            i -= 1;
            op = 0;
        }else if (op == 1 && t != ' '){
            list.data[i - 1] = 10 *list.data[i - 1] + t - '0';
            op = 1;
            i -= 1;
        }else if (op == 0 && t != ' '){
            list.data[i] = t - '0';
            op = 1;
        }
    };
    list.length = i - 1;
    int ins;
    scanf("%d", &ins);
    for (int j = 0; j < list.length; ++j) {
        if(ins > list.data[list.length]){
            list.length += 1;
            list.data[list.length] = ins;
            break;
        }else if (ins < list.data[0]){
            list.length += 1;
            for (int k = list.length; k > 0; --k) {
                list.data[k] = list.data[k - 1];
            }
            list.data[0] = ins;
            break;
        }else if(ins <= list.data[j]){
            list.length += 1;
            for (int k = list.length; k > j; --k) {
                list.data[k] = list.data[k - 1];
            }
            list.data[j] = ins;
            break;
        }
    }
    for (int j = 0; j <= list.length; ++j) {
        printf("%d ", list.data[j]);
    }
    return 0;
}


