/*位段*/
#include "stdio.h"

struct num
{
    unsigned int age : 3;

}age;

int main()
{
    age.age = 4;
    printf( "Sizeof( Age ) : %d\n", sizeof(age) );
    printf( "Age.age : %d\n", age.age );
 
    age.age = 7;
    printf( "Age.age : %d\n", age.age );
 
    age.age = 8; // 二进制表示为 1000 有四位，超出
    printf( "Age.age : %d\n", age.age );

    return 0;
}