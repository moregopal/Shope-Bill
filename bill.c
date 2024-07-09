#include<stdio.h>
int main()
{
    int n,f;
    int q;
    float bill;
    printf("Welcome to Shop\n");

    printf("Display the following main menu\n");
    printf("Press 1 for Fruits\n");
    printf("Press 2 For Vegetable\n");
    printf("press 3 for Exit \n");
     printf("Enter Your Choice\n\n");
    scanf("%d",&n);

    if(n==1)
    {
        printf("folowing friutes menu\n");
        printf("Press 1 for Apple \n");
        printf("Press 2 For Banana\n");
        printf("press 3 for Orange\n");
        printf("Enter your Choies\n");
        scanf("%d",&f);

       switch(f)
       {
        case 1:
        {
           printf("You Select Apple\n");
           printf("Enter Apple Quntity\n");
           scanf("%d",&q);
           bill=q*15;
           printf("Your Bill is=%.2f",bill);
           break;
        }
        case 2:
        {
           printf("You Select Banana\n");
           printf("Enter Banana Quntity\n");
           scanf("%d",&q);
           float bill=q*10;
           printf("Your Bill is=%.2f",bill);
           break;
        }
        case 3:
        {
           printf("You Select Orange\n"); 
           printf("Enter Orange Quntity\n");
           scanf("%d",&q);
           float bill=q*20;
           printf("Your Bill is=%.2f",bill);
           break;
        }
        default :
        {
            printf("Invalid input\n");
        }
       }
    }

       if(n==2)
       {
         
        printf("folowing Vegetables menu\n");
        printf("Press 1 for carrot \n");
        printf("Press 2 For Broccoli\n");
        printf("press 3 for Spinach\n\n");
        printf("Enter Your Choies\n");
        scanf("%d",&f);


        switch(f)
        {
            case 1:
            {
            printf("You Select Carrot\n");
            printf("Enter your carrot quntity\n");
            scanf("%d",&q);
            bill=q*5;
            printf("Your bill=%.2f",bill);
            break;
            }
            case 2:
            {
            printf("You Select Broccoli\n");
            printf("Enter your Broccoli quntity\n");
            scanf("%d",&q);
            bill=q*10;
            printf("Your bill=%.2f",bill);
            break;
            }
            case 3:
            {
            printf("You Select Spinach\n");    
            printf("Enter your Spinach quntity\n");
            scanf("%d",&q);
            bill=q*15;
            printf("Your bill=%.2f",bill);
            break;
            }
            default :
            {
                printf("Invalid input\n");
                break;
            }  
        }
       }    
        if(n==3)
        {
            printf("Sorry there is Not avalebale\n");
        }

}
