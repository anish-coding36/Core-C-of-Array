//marge, copy, compare array
#include<stdio.h>
#include<stdbool.h>
int main(){
        int arr1[100],arr2[100],arr3[200];
        int n1,n2;
        printf("Enter the size of the first array:\n");
        scanf("%d",&n1);
        printf("Enter the numbers for the first array:\n");
        for(int i=0;i<n1;i++){
                scanf("%d",&arr1[i]);
        }
        printf("Enter the size of the second array:\n");
        scanf("%d",&n2);
        printf("Enter the numbers for the second array:\n");
        for(int i=0;i<n2;i++){
                scanf("%d",&arr2[i]);
        }
        printf("The first array is:\n");
        for(int i=0;i<n1;i++){
                printf("%d ",arr1[i]);
        }
        printf("\n");
        printf("The second array is:\n");
        for(int i=0;i<n2;i++){
                printf("%d ",arr2[i]);
        }
        printf("\n");
        //merging the arrays
        for(int i=0;i<n1;i++){
                arr3[i]=arr1[i];
        }
        for(int i=0;i<n2;i++){
                arr3[n1+i]=arr2[i];
        }
        printf("The merged array is:\n");
        for(int i=0;i<n1+n2;i++){
                printf("%d ",arr3[i]);
        }
        printf("\n");
        return 0;
}