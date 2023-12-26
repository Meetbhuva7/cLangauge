#include <stdio.h>
int main()
{
    int st, ed;

    printf("enter choice : \n");
    printf("press 1. for English \n");
    printf("press 2. for Gujrati \n");
    printf("press 3. for Hindi \n");
    printf("press 4. for exit \n");
    scanf("%d", &st);

    switch (st)
    {
    case 1:
        printf("press 1. for Recharge in success \n");
        printf("press 2. for Balance chack \n");
        printf("press 3. for help \n");
        printf("press 4. for exit \n");
        printf("enter choice : \n");
        scanf("%d", &ed);

        switch (ed)
        {
        case 1:
            printf("Recharge in successfully");
            break;
        case 2:
            printf("Balance in 150 Rs");
            break;
        case 3:
            printf("we can serve you well");
            break;
        case 4:
            printf("exit successfull");
            break;

        default:
            printf("In valide number");
            break;
        }
        break;

    case 2:
        printf("press 1. Recharge karva mate \n");
        printf("press 2. Belance check karva mate \n");
        printf("press 3. help mate \n");
        printf("press 4. exit thava mate \n");
        printf("enter choice : \n");
        scanf("%d", &ed);

        switch (ed)
        {
        case 1:
            printf("Recharge successfull thay gayu chhe");
            break;
        case 2:
            printf("Balance in 150 Rs");
            break;
        case 3:
            printf("ame tamara mate help kari sakie");
            break;
        case 4:
            printf("exit successfull");
            break;

        default:
            printf("In valide number");
            break;
        }
        break;

    case 3:
        printf("press 1. for Recharge ke liye \n");
        printf("press 2. for Balance chack karne ke liye \n");
        printf("press 3. for help ke liye \n");
        printf("press 4. for exit ke liye \n");
        printf("enter choice : \n");
        scanf("%d", &ed);

        switch (ed)
        {
        case 1:
            printf("Recharge successfully ho gaya he");
            break;
        case 2:
            printf(" Aapka Balance  150 Rs he");
            break;
        case 3:
            printf("aapke liye kya help kar sakte he");
            break;
        case 4:
            printf("exit successfull");
            break;

        default:
            printf("In valide number");
            break;
        }
        break;

    default:
        printf("In valide number");
        break;
    }

    return 0;
}