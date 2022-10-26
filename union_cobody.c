#include "stdio.h"
#include "string.h"

union Data
{
    int i;
    float f;
    char  chars[20];

};
/*请一定要注意，这一句后需要输入一个分号 ，和上一个结构体是一样的*/

int main()
{
    union Data data;
    /*引入union*/
    /*使用成员间访问运算符.*/
    data.i = 10;
    printf("the i in union is:%d\n",data.i);/*请注意！%fd&s一定不要忘记！*/

    data.f =10.1;
    printf("the f in union is:%f\n",data.f);/*因为最后赋给变量的值占用了内存位置*/

    strcpy(data.chars,"test");
    printf("the chars in union is:%s\n",data.chars);
    /*这上面的都是对于集合里面的值进行赋值以及是输出*/

    
    getchar();
    return 0;
}