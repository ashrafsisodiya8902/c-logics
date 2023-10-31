#include <stdio.h>

int main()
{
    int a,b;
    
    printf("enter the value: ");
    scanf("%d %d",&a,&b);
    
    if(a%b==0){
        printf("a divisible b");
    }
    else{
        printf("a are not divisible");
    }
    return 0;
}
