#include <stdio.h>

int main()
{
    
    char op;
    int a, b;
    printf("Choose any operator you want : \n");
    scanf("%c", &op);
   
    
    printf("Enter the value of a : \n");
    scanf("%d", &a);
    
    printf("Enter the value of b : \n");
    scanf("%d", &b);
    
    
    
    switch(op){
        
        case '+' :
            printf("%d + %d = %d", a, b, a+b);
            break;
        
        case '-' :
            printf("%d - %d = %d", a, b, a-b);
            break;
        
        case '*' :
            printf("%d * %d = %d", a, b, a*b);
            break;
        
        case '/' :
            printf("%d / %d = %d", a, b, a/b);
            break;
        
        default :
            printf("Enter valid operator");
        
    }
    return 0;
}


