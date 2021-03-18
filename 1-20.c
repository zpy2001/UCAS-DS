#include <stdio.h>
#define MAXLEN 1000
typedef struct Polynomial{
    int coef[MAXLEN];
    int expn[MAXLEN];
}Polynomial;


int main(void ){
    int cn, len;
    scanf("%d %d", &cn, &len);
    struct Polynomial pop;
    for (int i = 0; i < len + 1; ++i) {
       scanf("%d",&(pop.coef[i]) );
    }
    int sum;
    sum = 0;
    int x;
    x = 1;
    for (int i = 0; i < len + 1; ++i) {
        pop.expn[i] = i;
    }
    for (int i = 0; i < len + 1; ++i) {
        for (int j = 0; j < pop.expn[i]; ++j) {
            x *= cn;
        }
        sum += pop.coef[i] * x;
        x = 1;
    }
    printf("%d\n", sum);
    return 0;
}



