#include<stdio.h>
int main(){
        int arr[100];
        int n;
        printf("Enter the size of the array:\n");
        scanf("%d",&n);
        printf("Enter the numbers:\n");
        for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }
        printf("The numbers entered are:\n");
        for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
        //find second largest element
        int largest=arr[0];
        int second_largest=arr[0];
        for(int i=1;i<n;i++){
                if(arr[i]>largest){
                        second_largest=largest;
                        largest=arr[i];
                }
                else if(arr[i]>second_largest && arr[i]!=largest){
                        second_largest=arr[i];
                }
        }
        printf("The second largest element is %d\n",second_largest);
        return 0;
}