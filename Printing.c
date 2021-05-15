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

void printOrder()
{
    int i;  
    printf("+---+-----------------+---------+------+----------------+-------------------+-----------------+-------------+---------+\n");
    printf("|№  | Назва_продукції |Кількість| Вага |Прізвище клієнта| Дата_замовлення   | Дата_видачі     | Ціна        | Вартість|\n");
    printf("+---+-----------------+---------+------+----------------+-------------------|-----------------|-------------|---------|\n");

    for (i = 0; i < numberOrder; i ++)
    
    printf("|%2d.| %-14s  |%-9d|%-5d |%15s | %-15s   | %-11s     | %5d       | %8d|\n", i + 1, 
	sweets[i].sweets,
	sweets[i].quantityCake,
	sweets[i].weight, 
	sweets[i].fullNameClient,
	sweets[i].orderDate,
	sweets[i].dateOfFinalProduct,
	sweets[i].price,
	sweets[i].amount);
	printf("+---+-----------------+---------+------+----------------+-------------------|-----------------|-------------|---------|\n");
} 
void printClient()
{
    int i;
    printf("+----+--------------+-------------+--------------+-------------+\n");
    printf("|№   |   Прізвище   |     Ім'я    |    Адреса    |   Телефон   |\n");
    printf("+----+--------------+-------------+--------------+-------------+\n");

    for (i = 0; i < numberCli; i ++)
    printf("|%2d. |   %-8s   |    %-4s   |    %-6s |   %8d  |\n", i + 1, client[i].surname,client[i].name,client[i].adress, client[i].telephone);
    printf("+----+--------------+-------------+--------------+-------------+\n");
} 

void printRecipe()
{
	int i;
	printf("+----+-----------------+---------------+----------+\n");
	printf(" N   |Назва продукції  |  Начинка      |  Ціна    |\n");
	printf("+----+-----------------+---------------+----------+\n");
  for (i = 0; i < numberRec; i ++)
    printf("%2i.   %-6s             %-6d             %-2d      \n", i + 1, recipe[i].nameCake, recipe[i].staffing, recipe[i].price);
	printf("+----+-----------------+---------------+----------+\n");
}

