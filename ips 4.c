/*Bob has "n" bags full of playing coins.
Get the count of the coins in each bag and store it on an array.
From the array, sum all the items and display the total coins with him.
input will contain:
i) value of n
ii) count of coins in each bag (one below the other)
output should contain the following:
i) count of the coins separated by comma in each bag
ii) sum of all the coins*/
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    int count[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&count[i]);
        sum=sum+count[i];
    }
    for(int i=0;i<n-1;i=i+1){
        printf("%d, ",count[i]);
    }
    printf("%d",count[n-1]);
    printf("\n%d",sum);
    return 0;
}
