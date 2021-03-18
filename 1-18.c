#include <stdio.h>
#define NUM 100
int scM[NUM];
int scF[NUM];

int main() {
    char prj[NUM], sex[NUM], sch[NUM];
    int sc;
    while (scanf("%s %s %s %d",prj, sex, sch, &sc) == 4){
        (sex[0] == 'M' ? scM : scF)[sch[0] - 'A'] += sc;
    }
    for (int i = 0; i < 5; i++) {
        if (scM[i]){
            printf("%c M %d\n", i + 'A', scM[i]);
        }
        if (scF[i]){
            printf("%c F %d\n", i + 'A', scF[i]);
        }
        if (scM[i] + scF[i]){
            printf("%c %d\n", i + 'A', scM[i] + scF[i]);
        }
    }

    return 0;
}
