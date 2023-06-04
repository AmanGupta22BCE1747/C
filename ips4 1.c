/*Get an array of integers display them.
Then, remove duplicates from the array and display:
i).the removed elements that comes after the first occurance (one below the other).
ii). the revised array after removal*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i=i+1){
        printf("%d, ",arr[i]);
    }
    printf("%d\n",arr[n-1]);
    for(int i=0;i<n;i=i+1){
        for(int u=1;u<n;u=u+1){
            if(arr[i]==arr[u+i]){
                printf("%d\n",arr[i]);
                count+=1;
            }
            else{
                continue;
            }
        }
    }
    int d=n-count;
    int arrn[d];
    for(int i=0;i<n;i=i+1){
        for(int u=1;u<n;u=u+1){
            if(arr[i]==arr[u+i]){
                arrn[i]=arr[i];
            }
            else{
                arrn[i]=arr[i];
            }
        }
    }
    for(int i=0;i<d-1;i=i+1){
        printf("%d, ",arrn[i]);
    }
    printf("%d",arrn[d-1]);


    return 0;
}
