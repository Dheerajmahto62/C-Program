#include<stdio.h>

int main(){
    printf("Welcome to ATM \n");
    int Pin , Choice, Pin_Change, Mini_Statement, Balance_Enqary , Amount = 100000, withdrawal; 

    printf("Enter your Pin : ");
    scanf("%d" , &Pin);
    // scanf("%d" , &Amount);
    // scanf("%d" , &Mini_Statement);
    // scanf("%d" , &Withdrawal);
    // scanf("%d" , &Balance_Enqary);
    // scanf("%d" , &Pin_Change);
    
    // if(Pin > 999){
    //     printf("hello");
    // }
    if(Pin > 999){
        int Amount = 100000;
        printf("Enter your Choice \n ");
        printf("1. Balance Enquary \n ");
        printf("2. Withdrawal \n ");
        printf("3.Mini Statement \n ");
        printf("4. Pin Change \n ");

        scanf("%d", &Choice);
        switch (Choice)
        {
        case 1:
            printf("Balance is %d", Amount);
            break;
        case 2:
            if(withdrawal <=10000){
                printf(" Collect your Money");
            }
            else{
                printf("Insuficient Money");
            }
            break;
        case 3:
            printf("Take your Mini Statement");
            break;
        case 4:
            printf("Enter your Old Pin--");
            scanf("%d", &Pin);
            printf("Enter your New Pin--");
            scanf("%d", &Pin);
            printf("Your Pin is sucessfully change ");
            break;
        
        default:
            break;
        }
        
        
    }
    
    
}