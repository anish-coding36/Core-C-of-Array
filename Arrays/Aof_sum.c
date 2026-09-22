#include<stdio.h>
#include<stdbool.h>
int main(){
        int arr[5];
        int sum=0;
        int avg,largest,smallest;
        int rev[5];
        printf("Enter 5 numbers:\n");
        for(int i=0;i<5;i++){
                scanf("%d",&arr[i]);
                sum+=arr[i];
        }
        printf("The numbers entered are:\n");
        for(int i=0;i<5;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
        printf("Sum of the numbers is: %d\n",sum);
        avg=sum/5;
        printf("Average of the numbers is: %d\n",avg);
        largest=arr[0];
        smallest=arr[0];
        for(int i=0;i<5;i++){
                if(arr[i]>largest){
                        largest=arr[i];
                }
                if(arr[i]<smallest){
                        smallest=arr[i];
                }
        }
        printf("Largest number is: %d\n",largest);
        printf("Smallest number is: %d\n",smallest);
        printf("Reversed array is:\n");
        for(int i=4;i>=0;i--){
                printf("%d ",arr[i]);
        }
        printf("\n");
        int s;
        s=arr[0];
        printf("Enter a number to search in the array:\n");
        scanf("%d",&s);
        bool found=false;
        for(int i=0;i<5;i++){
                if(arr[i]==s){
                        found=true;
                        break;
                }
        }
        if(found){
                printf("Number found in the array:%d\n",s);
        }
        else{
                printf("Number not found in the array.\n");
        }
        int even,odd;
        even=0;
        odd=0;
        for(int i=0;i<5;i++){
                if(arr[i]%2==0){
                        even++;
                }
                else{
                        odd++;
                }
        }
        printf("Number of even numbers: %d\n",even);
        printf("The Even numbers:\n");
        for(int i=0;i<5;i++){
                if(arr[i]%2==0){
                        printf("%d ",arr[i]);
                }
        }
        printf("\n");
        printf("Number of odd numbers: %d\n",odd);
        printf("The Odd numbers:\n");
        for(int i=0;i<5;i++){
                if(arr[i]%2!=0){
                        printf("%d ",arr[i]);
                }
        }
        printf("\n");
        return 0;
}