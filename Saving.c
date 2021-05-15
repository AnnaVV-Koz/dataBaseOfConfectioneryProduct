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

void saveOrder()
{
  FILE *F;
  int i;

  if ((F = fopen("order.txt", "a")) == NULL){
       fprintf(stderr, "Неможливо відкрити файл для запису'order.txt'\n");
       return;
    }
   for (i = 0; i < numberOrder; i ++)
    fprintf(F, "%s  %d  %d  %s  %s  %s  %d %d\n", sweets[i].sweets,
	sweets[i].quantityCake,
	sweets[i].weight, 
	sweets[i].fullNameClient,
	sweets[i].orderDate,
	sweets[i].dateOfFinalProduct,
	sweets[i].price,
	sweets[i].amount);
	
   fclose(F);
}

void saveClient()
{
  FILE *F;
  int i;

  if ((F = fopen("client.txt", "a")) == NULL){
       fprintf(stderr, "Неможливо відкрити файл для запису 'client.txt'\n");
       return;
  }
  for (i = 0; i < numberCli; i ++)
  fprintf(F, "%s %s %s %d\n", client[i].surname,client[i].name,client[i].adress, client[i].telephone);
  fclose(F);
}

void saveRecipe()
{
  FILE *F;
  int i;

  if ((F = fopen("recipe.txt", "a")) == NULL){
    fprintf(stderr, "Неможливо відкрити файл для запису'recipe.txt'\n");
    return;
   }
   for (i = 0; i < numberRec; i ++)
    fprintf(F, "\n%s  %s  %d  %d  %d  %d  %d  %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",recipe[0].nameCake,
    recipe[0].staffing,recipe[0].price,recipe[0].flour,recipe[0].starch,recipe[0].sugar,
	recipe[0].salt,recipe[0].butter,recipe[0].sourCream,recipe[0].cream,recipe[0].eggs,
	recipe[0].chees,recipe[0].condensedMilk,recipe[0].milk,recipe[0].chocolate,
	recipe[0].nuts,recipe[0].fruit,recipe[0].oil,recipe[0].water,
	recipe[0].agar,recipe[0].gelatin,recipe[0].honey,recipe[0].cocoa);
	
    fclose(F);
}

