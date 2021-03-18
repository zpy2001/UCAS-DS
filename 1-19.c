//这个题目十分阴间，首先根据about中的judge， return的值不得为0
//其次应该考虑到溢出问题，这点在溢出判断上有坑
//最后还有输出格式问题
#include <stdio.h>
#define MAX 34359738367
int fact(int n);
int exp(int n);
int main(void){
    unsigned int n, a;
    scanf("%d %d",&n, &a);
    unsigned int arry[a];
    if (n > a){
        printf("-1\n");
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        if (fact(i) > MAX/exp(i)){
            printf("-1\n");
            return 0;
        }else
            arry[i] = fact(i) * exp(i);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", arry[i]);
    }

    return 0;
}
int fact(int n){
    int sum = 1;
    if (n == 0)
        sum = 1;
    else
        for (int i = 1; i <= n; ++i) {
            sum *= i;
        }
    return sum;
}
int exp(int n){
    int sum = 1;
    if (n == 0)
        sum = 1;
    else
        for (int i = 1; i <= n; ++i) {
            sum *= 2;
        }
    return sum;
}


