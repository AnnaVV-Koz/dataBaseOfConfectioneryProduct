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

void addOrder()
{
  int amount;
  if (numberOrder == number){
    fprintf(stderr, "Ќе можливо додати ще один елемент\n");
    return;
    } 
    printf("¬вед≥ть назву кондитерського виробу > ");
    scanf("%s", (sweets[numberOrder].sweets));
    printf("¬вед≥ть к≥льк≥сть кондитерських вироб≥в > ");
    scanf("%d", &sweets[numberOrder].quantityCake);
      if(sweets[numberOrder].quantityCake==1){
     		printf("¬вед≥ть вагу в кг > ");
            scanf("%d",&sweets[numberOrder].weight);	
		}    
    getchar();
    printf("¬вед≥ть ѕр≥звище_≥м'€ кл≥Їнта >   ");
    gets(sweets[numberOrder].fullNameClient);
    printf("¬вед≥ть дату замовленн€> ");
    scanf("%s", sweets[numberOrder].orderDate);
    printf("¬вед≥ть дату видач≥ готовоњ продукц≥њ >   ");
    scanf("%s", sweets[numberOrder].dateOfFinalProduct);
    printf("¬вед≥ть ц≥ну за одиницю продукц≥њ>   ");
    scanf("%d",&sweets[numberOrder].price); 
  	if(sweets[numberOrder].quantityCake==1){
    	printf("÷≥на вашого замовленн€ складаЇ > %d \n", sweets[numberOrder].weight*sweets[numberOrder].price, amount);
    	sweets[numberOrder].amount=sweets[numberOrder].weight*sweets[numberOrder].price;//numberOrder
	}else{
	   	printf("÷≥на вашого замовленн€ складаЇ > %d \n", sweets[numberOrder].quantityCake*sweets[numberOrder].price,amount);
	   	sweets[numberOrder].amount=sweets[numberOrder].quantityCake*sweets[numberOrder].price;
    }
    
        numberOrder++;
} 

void addClient()
{
  if (numberCli == number){
      fprintf(stderr, "Ќе можливо додати ще один елемент\n");
      return;
     }
      printf("¬вед≥ть пр≥звище > ");
      scanf("%s",client[numberCli].surname);
      printf("¬вед≥ть ≥м'€ > ");
      scanf("%s",client[numberCli].name);
      getchar();
      printf("¬вед≥ть адресу > ");
      gets(client[numberCli].adress);
      printf("¬вед≥ть телефон > ");
      scanf("%d",&client[numberCli].telephone);
  
      numberCli ++;
} 

void addRecipe()
{
  if (numberRec == number){
      fprintf(stderr, "Ќеможливо додати ще один елемент\n");
      return;
     }
  printf("¬вед≥ть назву продукц≥њ > ");
  scanf("%s", recipe[numberRec].nameCake);
  printf("¬вед≥ть ц≥ну > ");
  scanf("%d", &recipe[numberRec].price);
  printf("¬вед≥ть начинку > ");
  scanf("%s", recipe[numberRec].staffing);
  printf("¬вед≥ть к≥льк≥сть муки в грамах > ");
  scanf("%d", &recipe[numberRec].flour);
  printf("¬вед≥ть к≥льк≥сть крохмалю в грамах > ");
  scanf("%d", &recipe[numberRec].starch);
  printf("¬вед≥ть к≥льк≥сть цукру в грамах > ");
  scanf("%d", &recipe[numberRec].sugar);
  printf("¬вед≥ть к≥льк≥сть сол≥ в грамах > ");
  scanf("%d", &recipe[numberRec].salt);
  printf("¬вед≥ть к≥льк≥сть масла в грамах > ");
  scanf("%d", &recipe[numberRec].butter);
  printf("¬вед≥ть к≥льк≥сть сметани в грамах > ");
  scanf("%d", &recipe[numberRec].sourCream);
  printf("¬вед≥ть к≥льк≥сть вершк≥в в грамах > ");
  scanf("%d", &recipe[numberRec].cream);
  printf("¬вед≥ть к≥льк≥сть €Їць в грамах > ");
  scanf("%d", &recipe[numberRec].eggs);
  printf("¬вед≥ть к≥льк≥сть сиру в грамах > ");
  scanf("%d", &recipe[numberRec].chees);
  printf("¬вед≥ть к≥льк≥сть згущеного молока в грамах > ");
  scanf("%d", &recipe[numberRec].condensedMilk);
  printf("¬вед≥ть к≥льк≥сть молока в грамах > ");
  scanf("%d", &recipe[numberRec].milk);
  printf("¬вед≥ть к≥льк≥сть шоколаду в грамах > ");
  scanf("%d", &recipe[numberRec].chocolate);
  printf("¬вед≥ть к≥льк≥сть гор≥х≥в в грамах > ");
  scanf("%d", &recipe[numberRec].nuts);
  printf("¬вед≥ть к≥льк≥сть фрукт≥в в грамах > ");
  scanf("%d", &recipe[numberRec].fruit);
  printf("¬вед≥ть к≥льк≥сть ол≥њ в грамах > ");
  scanf("%d", &recipe[numberRec].oil);
  printf("¬вед≥ть к≥льк≥сть води в грамах > ");
  scanf("%d", &recipe[numberRec].water);
  printf("¬вед≥ть к≥льк≥сть агару в грамах > ");
  scanf("%d", &recipe[numberRec].agar);
  printf("¬вед≥ть к≥льк≥сть желатину в грамах > ");
  scanf("%d", &recipe[numberRec].gelatin);
  printf("¬вед≥ть к≥льк≥сть меду в грамах > ");
  scanf("%d", &recipe[numberRec].honey);
  printf("¬вед≥ть к≥льк≥сть какао в грамах > ");
  scanf("%d", &recipe[numberRec].cocoa);
  
  numberRec ++;
} 

