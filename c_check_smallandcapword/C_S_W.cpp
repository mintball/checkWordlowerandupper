#include <stdio.h>

int main()
{
    int i,U,L;
    char c[10000];
    scanf("%s",&c[i]);
    
    
    for(i=0;c[i]!='\0';i++)
    {
        
        if(c[i]>=65 && c[i]<=90)
        {
            U=1;
        }
        else if(c[i]>= 97 && c[i]<= 122)
        {
            L=1;
        }
    }
    
    if(U==1 && L==0)
    {
        printf("All Capital Letter");
    }
    else if(U==0 && L==1)
    {
        printf("All Small Letter");
    }
    else if(U==1 && L==1)
    {
        printf("Mix");
    }
    
    return 0;
    
}