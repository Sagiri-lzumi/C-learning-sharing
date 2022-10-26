#include "stdio.h"

typedef struct books
{
    int quantity;
    char writer[20];
    char title[20];
    char author[20];
    char subject[20];

}bookss;
int main()
{
    bookss book;

    book.quantity = 5;
    strcpy( book.title, "C introduce");
    strcpy( book.author, "Runoob"); 
    strcpy( book.subject, "language of coding");

    printf("%d\n",book.quantity);
    printf("%s\n",book.title);
    printf("%s\n",book.author);
    printf("%s\n",book.subject);

    return 0;
}