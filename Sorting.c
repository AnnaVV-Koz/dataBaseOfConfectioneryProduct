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

void sortClient()
{
  int i, j;
  cli temp;

  for (j = numberCli - 1; j > 0; j --)
    for (i = 0; i < j; i ++)
      if (strcmp(client[i].surname, client[i + 1].surname) > 0){
        temp = client[i];
        client[i] = client[i + 1];
        client[i + 1] = temp;
      }
}

void sortOrder()
{
  int i, j;
  ord temp;

  for (j = numberOrder - 1; j > 0; j --)
    for (i = 0; i < j; i ++)
      if ((sweets[i].orderDate - sweets[i + 1].orderDate) < 0){
        temp = sweets[i];
        sweets[i] = sweets[i + 1];
        sweets[i + 1] = temp;
      }
      printOrder();
}
void sortRecipe()
{
  int i, j;
  rec temp;

  for (j = numberRec - 1; j > 0; j --)
    for (i = 0; i < j; i ++)
      if (recipe[i].price > recipe[i + 1].price ){
        temp = recipe[i];
        recipe[i] = recipe[i + 1];
        recipe[i + 1] = temp;
      }
    printRecipe();
}
