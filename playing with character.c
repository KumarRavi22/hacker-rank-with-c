#include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    
    int main() 
    {
    char ch,w[60],s[100];
    
    scanf("%c",&ch);
    scanf("%s\n",&w);
    scanf("%[^\n]s",&s);
    
    printf("%c",ch);
    printf("\n%s\n",w);
    printf("%s",s);
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
        return 0;
    }