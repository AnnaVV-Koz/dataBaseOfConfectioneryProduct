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

    printf("0 : �����\n"
           "1 : ������\n"
           "2 : ��������\n"
           "3 : ���������\n"
           "4 : �������\n"
           "5 : ��������\n"
           "6 : ������������\n"
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

    printf("0 : �����\n"
           "1 : �볺��\n"
           "2 : �����\n"
           "3 : ���������\n"
           ">");
   do{     
    c = getch();
  }while ((c < '0' || c > '3') && c!=27);
  printf("%c\n", c); 
  return c;
} 
