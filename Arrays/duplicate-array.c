//duplicate array
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
        printf("The original array is:\n");
        for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
        printf("The duplicate array is:\n");//find duplicate array
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                        if(arr[i]==arr[j]){
                                printf("%d ",arr[i]);
                                break;
                        }
                }
        }
        //remove the array
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                        if(arr[i]==arr[j]){
                                for(int k=j;k<n;k++){
                                        arr[k]=arr[k+1];
                                }
                                n--;
                                j--;
                        }
                }
        }
        printf("\n");
        printf("The array after removing duplicates is:\n");
        for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        return 0;
}