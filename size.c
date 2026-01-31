#include <stdio.h>
int main()
{
    int size_of_int=sizeof(int);
    int size_of_float=sizeof(float);
    int size_of_char=sizeof(char);
    int size_of_double=sizeof(double);
    
    printf("the size of int data type:%d\n",size_of_int);
    printf("the size of float data type:%d\n",size_of_float);
    printf("the size of char data type:%d\n",size_of_char);
    printf("the size of double data type:%d\n",size_of_double);
    return 0;
}
#include <stdio.h>
int main()
{
    const char str[]
    ="w\ve\vl\vc\vo\vm\ve\vt\vo\vc\vh\vi\vt\vk\va\vr\va\vu\vn\vi\vv\ve\vr\vs\vi\vt\vy";
    printf("%s",str);
    return 0;
}