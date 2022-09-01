#include <stdio.h>
#include<string.h>
#include <ctype.h>
//int countVowels(char str[]);


int countVowels(char str[]){
    
    int i,count = 0;
    
    for(i = 0; str[i];i++){
        str[i] = tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
   
}
int main()
{
    char str[1000] = "Ello";
    printf("Vowels are : %d", countVowels(str));
    
    return 0;
}
