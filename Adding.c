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
    fprintf(stderr, "�� ������� ������ �� ���� �������\n");
    return;
    } 
    printf("������ ����� �������������� ������ > ");
    scanf("%s", (sweets[numberOrder].sweets));
    printf("������ ������� ������������� ������ > ");
    scanf("%d", &sweets[numberOrder].quantityCake);
      if(sweets[numberOrder].quantityCake==1){
     		printf("������ ���� � �� > ");
            scanf("%d",&sweets[numberOrder].weight);	
		}    
    getchar();
    printf("������ �������_��'� �볺��� >   ");
    gets(sweets[numberOrder].fullNameClient);
    printf("������ ���� ����������> ");
    scanf("%s", sweets[numberOrder].orderDate);
    printf("������ ���� ������ ������ ��������� >   ");
    scanf("%s", sweets[numberOrder].dateOfFinalProduct);
    printf("������ ���� �� ������� ���������>   ");
    scanf("%d",&sweets[numberOrder].price); 
  	if(sweets[numberOrder].quantityCake==1){
    	printf("ֳ�� ������ ���������� ������ > %d \n", sweets[numberOrder].weight*sweets[numberOrder].price, amount);
    	sweets[numberOrder].amount=sweets[numberOrder].weight*sweets[numberOrder].price;//numberOrder
	}else{
	   	printf("ֳ�� ������ ���������� ������ > %d \n", sweets[numberOrder].quantityCake*sweets[numberOrder].price,amount);
	   	sweets[numberOrder].amount=sweets[numberOrder].quantityCake*sweets[numberOrder].price;
    }
    
        numberOrder++;
} 

void addClient()
{
  if (numberCli == number){
      fprintf(stderr, "�� ������� ������ �� ���� �������\n");
      return;
     }
      printf("������ ������� > ");
      scanf("%s",client[numberCli].surname);
      printf("������ ��'� > ");
      scanf("%s",client[numberCli].name);
      getchar();
      printf("������ ������ > ");
      gets(client[numberCli].adress);
      printf("������ ������� > ");
      scanf("%d",&client[numberCli].telephone);
  
      numberCli ++;
} 

void addRecipe()
{
  if (numberRec == number){
      fprintf(stderr, "��������� ������ �� ���� �������\n");
      return;
     }
  printf("������ ����� ��������� > ");
  scanf("%s", recipe[numberRec].nameCake);
  printf("������ ���� > ");
  scanf("%d", &recipe[numberRec].price);
  printf("������ ������� > ");
  scanf("%s", recipe[numberRec].staffing);
  printf("������ ������� ���� � ������ > ");
  scanf("%d", &recipe[numberRec].flour);
  printf("������ ������� �������� � ������ > ");
  scanf("%d", &recipe[numberRec].starch);
  printf("������ ������� ����� � ������ > ");
  scanf("%d", &recipe[numberRec].sugar);
  printf("������ ������� ��� � ������ > ");
  scanf("%d", &recipe[numberRec].salt);
  printf("������ ������� ����� � ������ > ");
  scanf("%d", &recipe[numberRec].butter);
  printf("������ ������� ������� � ������ > ");
  scanf("%d", &recipe[numberRec].sourCream);
  printf("������ ������� ������ � ������ > ");
  scanf("%d", &recipe[numberRec].cream);
  printf("������ ������� ���� � ������ > ");
  scanf("%d", &recipe[numberRec].eggs);
  printf("������ ������� ���� � ������ > ");
  scanf("%d", &recipe[numberRec].chees);
  printf("������ ������� ��������� ������ � ������ > ");
  scanf("%d", &recipe[numberRec].condensedMilk);
  printf("������ ������� ������ � ������ > ");
  scanf("%d", &recipe[numberRec].milk);
  printf("������ ������� �������� � ������ > ");
  scanf("%d", &recipe[numberRec].chocolate);
  printf("������ ������� ������ � ������ > ");
  scanf("%d", &recipe[numberRec].nuts);
  printf("������ ������� ������ � ������ > ");
  scanf("%d", &recipe[numberRec].fruit);
  printf("������ ������� �볿 � ������ > ");
  scanf("%d", &recipe[numberRec].oil);
  printf("������ ������� ���� � ������ > ");
  scanf("%d", &recipe[numberRec].water);
  printf("������ ������� ����� � ������ > ");
  scanf("%d", &recipe[numberRec].agar);
  printf("������ ������� �������� � ������ > ");
  scanf("%d", &recipe[numberRec].gelatin);
  printf("������ ������� ���� � ������ > ");
  scanf("%d", &recipe[numberRec].honey);
  printf("������ ������� ����� � ������ > ");
  scanf("%d", &recipe[numberRec].cocoa);
  
  numberRec ++;
} 

