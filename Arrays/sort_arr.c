//sort array
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
        //sorting the array
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                        if(arr[i]>arr[j]){
                                int temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }
        printf("The sorted array is:\n");
        for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
        return 0;
}