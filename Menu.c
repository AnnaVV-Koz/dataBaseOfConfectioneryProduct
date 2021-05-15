#include "Printing.h"
#include "Adding.h"
#include "Deliting.h"
#include "Sorting.h"
#include "Saving.h"
#include "Loading.h"
#include "Menu.h"

extern int numberOrder;
extern int numberCli;
extern int numberRec;

char menu()
{
  char c;

    printf("0 : вихід\n"
           "1 : додати\n"
           "2 : зберегти\n"
           "3 : загрузити\n"
           "4 : вивести\n"
           "5 : видалити\n"
           "6 : упорядкувати\n"
           ">");
  do{
    c = getch();
    } while ((c < '0' || c > '6') && c!=27);
       printf("%c\n", c);
       return c;
} 
 
char menuChoice()
{
  char c;

    printf("0 : вихід\n"
           "1 : клієнт\n"
           "2 : заказ\n"
           "3 : рецептура\n"
           ">");
   do{     
    c = getch();
  }while ((c < '0' || c > '3') && c!=27);
  printf("%c\n", c); 
  return c;
} 
