#include <stdio.h>
int main() {
    char ch;
    int cupsize;
    int choice;
    printf("Enter Your Coffee Type: \n");
    scanf("%c",&ch);
    printf("\nEnter CupSize\n(Double Or Single): \n");
    scanf("%d",&cupsize);
    printf("\nEnter Your Choice:\n1 for Manual\n2 Not Manual\n.........\n");
    scanf("%d",&choice);
    
    if(ch == 'B'){
        printf("\nBlack Coffee\n");
        printf("Wait till 1.25hrs untill your coffee will be ready");
        if(cupsize == 2){
           if(choice == 1){
        printf("\nIts manual and double cup!!\n");
    }
        else{
            printf("\nIts Not Manual");
        }
        }
        else{
            printf("\nIts a single cup");
        }
    }
    else if(ch == 'W'){
        printf("\nWhite Coffee\n");
        printf("Wait till 1.75hrs untill your coffee will be ready");
        if(cupsize == 2){
           if(choice == 1){
        printf("\nIts manual and double cup!!\n");
    }
        else{
            printf("\nIts Not Manual");
        }
        }
        else{
            printf("\nIts a single cup");
        }
    }
    
    
    
    
    return 0;
}
