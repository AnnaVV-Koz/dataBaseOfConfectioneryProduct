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

void loadOrder()
{
  FILE *F;
  int i,n;
  ord *sweets;
  ord temp;
  F = fopen("order.txt", "r");
  if ((F = fopen("order.txt", "r")) == NULL){
  	fprintf(stderr, "Неможливо відкрити для читання файл 'order.txt'\n");
    return;
   }
    while(1){
    n=fscanf(F, "%s%d%d%s%s%s%d%d", temp.sweets, &temp.quantityCake, &temp.weight, temp.fullNameClient, 
											  temp.orderDate, temp.dateOfFinalProduct, 
											 &temp.price, &temp.amount);
  	if (n<=0){
  		break;
	}
	printf("%s %d %d %s %s %s %d %d\n", temp.sweets, temp.quantityCake, temp.weight, 
	                                    temp.fullNameClient, temp.orderDate, 
										temp.dateOfFinalProduct,temp.price,temp.amount);
} 
fclose(F);
}

void loadClient()
{
  FILE* F;
  int n, i;
  cli *client;
  cli temp;
 
  	 F= fopen("client.txt", "r");
  if ((F = fopen("client.txt", "r")) == NULL)
  {
  	fprintf(stderr, "Неможливо відкрити для читання файл 'client.txt'\n");
    return;
  }
  while(1)
  {
  	 fscanf(F, "%s%s%s%d", temp.surname, temp.name, temp.adress, &temp.telephone);
  	 if (n<=0){
  		break;
	   }
	  printf("\n%5s %5s %5s %5d\n", temp.surname, temp.name, temp.adress, temp.telephone);
    }
      fclose(F);
 } 

void loadRecipe()
{
  FILE* F;
  int n, i;
  rec *recipe;
  rec temp;
  char test[300];
  F = fopen("recipe.txt", "r");
  if ((F = fopen("recipe.txt", "r")) == NULL)
  {
    fprintf(stderr, "Неможливо відкрити для читання файл  'recipe.txt'\n");
    return;
  }
  
  while(1)
  {
   n=fscanf(F, "%s%s%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", 
    temp.nameCake, temp.staffing,&temp.price,&temp.flour,
	&temp.starch,&temp.sugar,&temp.salt,&temp.butter,&temp.sourCream,
	&temp.cream,&temp.eggs,&temp.chees,&temp.condensedMilk,&temp.milk,
	&temp.chocolate,&temp.nuts,&temp.fruit,&temp.oil,&temp.water,
	&temp.agar,&temp.gelatin,&temp.honey,&temp.cocoa);
  	if (n<=0){
  		break;
	  }
	  printf("%s %s %d %d% d% d% d% d% d% d% d% d% d% d% d% d% d% d% d% d% d% d% \n", 
    temp.nameCake,	temp.staffing,temp.price,temp.flour,temp.starch,temp.sugar,
	temp.salt,temp.butter,temp.sourCream,temp.cream,temp.eggs,temp.chees,
	temp.condensedMilk,temp.milk,temp.chocolate,temp.nuts,temp.fruit,
	temp.oil,temp.water,temp.agar,temp.gelatin,temp.honey,temp.cocoa);
   }
    fclose(F);
} 
  
