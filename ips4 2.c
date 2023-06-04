/*Get the size "N" and the "N" elements of a array.
Find the largest number from the array.
input will contain:
i) value of n
ii) n elements of the array (one below the other)

Output:
i)n elements of the array (one below the other)
ii) The largest number:
the answer for the largest number*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    printf("The array:");
    for(int i=0;i<n;i=i+1){
        printf("\n%d",arr[i]);
        if(arr[0]>arr[i+1]){
            arr[0]=arr[0];
        }
        else{
            arr[0]=arr[i+1];
        }
    }
    printf("\nThe largest number:");
    printf("\n%d",arr[0]);
    return 0;
}
