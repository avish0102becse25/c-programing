// #include <stdio.h>
// void function()
// { int x=10;
// printf("%d",x);
// }
// int main() {function();}


// #include <stdio.h>
// int x=20;
// void function1(){printf("Function1:%d\n",x);}
// void function2(){printf("Function2:%d\n",x);}
// int main()
// {
//     function1();
//     function2();
//     return 0;
// }


// #include <stdio.h>
// void function()
// {
//     int x=20;
//     static int y=30;
//     x=x+10;
//     y=y+10;
//     printf("\tLocal:%d\n",x,y);
// }
// int main()
// {
//     printf("First Call\n");
//     function();
//     printf("Second Call\n");
//     function();
//     printf("Third Call\n");
//     function();
    
    
// }


#include <stdio.h>
void function()
{
    int x=10;
    auto int y;
    printf("Auto Variable:%d",y);
}
int main()
{
    function();
    return 0;
}
    
    
// if we not assign any value then garbage value is given

// #include <stdio.h>
// {
//     int not_constant;
//     const int constant=20;
//     not_constant=40;
//     // constant=22;
//     printf("%d",not_constant);
//     printf("%d",constant);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int not_constant;
//     const int constant=20;
//     const float a=12.33;
//     const char b='A';
//     // const string s="avish";
//     not_constant=40;
//     // constant=22;
//     printf("%d",not_constant);
//     printf("%d",constant);
//     printf("%d",a);
//     printf("%d",b);
//     // printf("%d",s);
//     return 0;
// }





