#include <stdio.h>

struct Customer {
    char name[50];
    int acc;
    int bal;
};

int main(){
    int c;
    scanf("%d", &c);
    struct Customer arry[c];
    for(int i = 0; i < c; i++){
        scanf("%s", &arry[i].name);
        scanf("%d", &arry[i].acc);
        scanf("%d", &arry[i].bal);
    }
    for (int i=0;i<c;i++){
        if (arry[i].bal>10000){
            arry[i].bal=1.05*arry[i].bal;
            printf("%s\n%d\n%d\n",arry[i].name,arry[i].acc,arry[i].bal);
        }
        else if (arry[i].bal<2000){
            printf("%s ",arry[i].name);
        }
    }
    return 0;
}
