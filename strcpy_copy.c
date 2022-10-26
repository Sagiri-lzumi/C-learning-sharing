#include "string.h"
#include "stdio.h"

int main()
{
    unsigned char test[] = "RENC";/*定义出原来的字符串*/
    unsigned char putsout[4];/*定义出来将其防止进去的字符串*/

    strcpy(putsout,test);/*strcpy(新字符串，源字符串)*/

    printf(putsout);/*用puts输出,当然printf也可以*/


    return 0;
}