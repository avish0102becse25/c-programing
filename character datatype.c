#include <stdio.h>
int main()
{
    char a='a';
    char c;
    printf("Value of a:%c\n",a);
    a++;
    printf("Value of a after increment is:%c\n",a);
    c=99;
    printf("Value of c:%c",c);
    return 0;
    
}



#include <stdio.h>
int main()
{

    char a='a';
    int i;
    for(i=0;i<=25;i++){
        printf("Value:%c\n",a);
        a++;
        
    }
    // for printing all letters by for loop