#include <stdio.h>

void namaste();
void bonjour();

int main()
{
    printf("Enter f for French and i for Indian : \n");
    char ch;
    scanf("%c",&ch);
    
    if(ch=='i' || ch=='I')
    {
        namaste();
    }
    else if(ch=='f' || ch=='F')
    {
        bonjour();
    }
    else{
        printf("Please enter valid choice! \n");
    }
    
 return 0;
}

void namaste(){
    
    printf("Namaste\n");
}

void bonjour(){
    
    printf("Bonjour\n");
}





