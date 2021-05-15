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

void delOrder()
{
  int i;
  printf("¬вед≥ть номер видаленого елемента", &i);
  scanf("%i", &i);
  if (i < 1 || i > numberOrder){
      fprintf(stderr, "≈лемент з номером %i не ≥снуЇ\n", i);
      return;
     }

  for (i --; i < numberOrder - 1; i ++)
      sweets[i] = sweets[i + 1];
      numberOrder --;
      printOrder();
}

void delClient()
{
  int i;
  printf("¬вед≥ть номер видаленого елемента > ");
  scanf("%i", &i);
  if (i < 1 || i > numberCli){
      fprintf(stderr, "≈лемент з номером %i не ≥снуЇ\n", i);
      return;
    }

  for (i --; i < numberCli - 1; i ++)
       client[i] = client[i + 1];
       numberCli --;
       printClient();
}

void delRecipe()
{
  int i;
  printf("¬вед≥ть номер видаленого елемента> ");
  scanf("%i", &i);
  if (i < 1 || i > numberRec){
     fprintf(stderr, "≈лемент з номером %i не ≥снуЇ\n", i);
     return;
    }

  for (i --; i < numberRec - 1; i ++)
       recipe[i] = recipe[i + 1];
       numberRec --;
       printRecipe();
}

