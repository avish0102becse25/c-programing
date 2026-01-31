// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     bool a=true;
//     bool b=false;
//     printf("True:%d\n",a);
//     printf("False:%d\n",b);
//     return 0;
// }
// 


// #include <stdio.h>
// #define bool int
// #define false 0
// #define true 1
// int main()
// {
//     bool a=true;
//     bool b=false;
//     printf("True:%d\n",a);
//     printf("False:%d\n",b);
//     return 0;
// }


#include <stdio.h>
typedef enum{false,true}bool;
int main()
{
    bool a=true;
    bool b=false;
    printf("True:%d\n",a);
    printf("False:%d\n",b);
    return 0;
}