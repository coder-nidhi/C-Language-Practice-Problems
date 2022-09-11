#include <stdio.h>

typedef struct BankAccount
{
    int accountNo;
    char name[100];
}acc;


int main()
{
    acc acc1 = {123, "Nidhi"};
    acc acc2 = {124, "Tulsi"};
    acc acc3 = {125, "Ishan"};
    
    printf("Account number is %d\n",acc1.accountNo);
    printf("Name is %s\n\n",acc1.name);
    
    printf("Account number is %d\n",acc2.accountNo);
    printf("Name is %s\n\n",acc2.name);
    
    printf("Account number is %d\n",acc3.accountNo);
    printf("Name is %s",acc3.name);
    
    return 0;
}
