#include<stdio.h>
int main(){
    int n;
    scanf("&d",&n);
    int p=0;
    int c=0;
    while(n!=-1){
        for(int i=2;i<n;i++){
            if(n%i==0){
                c=c+1;
                break;
            }
        }
        scanf("%d",&n);
        p=p+1;

    }
    printf("Prime number are:%d\n",p-c);
    printf("Composite number are:%d\n",c-1);
    return 0;

}
