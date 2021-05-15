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
    printf("|�  | �����_��������� |ʳ������| ���� |������� �볺���| ����_����������   | ����_������     | ֳ��        | �������|\n");
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
    printf("|�   |   �������   |     ��'�    |    ������    |   �������   |\n");
    printf("+----+--------------+-------------+--------------+-------------+\n");

    for (i = 0; i < numberCli; i ++)
    printf("|%2d. |   %-8s   |    %-4s   |    %-6s |   %8d  |\n", i + 1, client[i].surname,client[i].name,client[i].adress, client[i].telephone);
    printf("+----+--------------+-------------+--------------+-------------+\n");
} 

void printRecipe()
{
	int i;
	printf("+----+-----------------+---------------+----------+\n");
	printf(" N   |����� ���������  |  �������      |  ֳ��    |\n");
	printf("+----+-----------------+---------------+----------+\n");
  for (i = 0; i < numberRec; i ++)
    printf("%2i.   %-6s             %-6d             %-2d      \n", i + 1, recipe[i].nameCake, recipe[i].staffing, recipe[i].price);
	printf("+----+-----------------+---------------+----------+\n");
}

