/* build a code for developing structures of customers
take input from user as details of customers
print the name of customer less then 2000 bal
print the details of customer have more then 10000 balance*/
#include<stdio.h>
#include<string.h>
struct Customer{
    char name[50];
    int acc;
    int bal;
};
int getCustomerDetails(struct Customer *customer) {
    scanf("%s",&customer->name);
    scanf("%d",&customer->acc);
    scanf("%d",&customer->bal);
    return 0;
}
int main() {
    int c;
    scanf("%d",&c);
    struct Customer customers[c];
    for(int i = 0; i<c; i++) {
        getCustomerDetails(&customers[i]);
    }
    for(int i = 0; i<c; i++){
        if (customers[i].bal<2000) {
            printf("%s ",customers[i].name);
        }
        else if(customers[i].bal>10000){
            float interest = customers[i].bal* 0.05;
            customers[i].bal+=interest;
            printf("%s\n",customers[i].name);
            printf("%d\n",customers[i].acc);
            printf("%d\n",customers[i].bal);
        }
    }

    return 0;
}
