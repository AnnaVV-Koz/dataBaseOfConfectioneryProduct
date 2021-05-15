#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

#define fileOrder "order.txt"
#define fileClient "client.txt"
#define fileRecipe "recipe.txt"

#define number 100

typedef struct order
{
    char sweets[30]; 
	int quantityCake; 
	int weight;
	char fullNameClient[30];
	char orderDate[30];
	char dateOfFinalProduct[30];
	int price;
	int amount;
}ord;
ord sweets[100];

typedef struct client
{
    char surname[50]; 
	char name[50];
	char adress[30]; 
	int telephone;
}cli;
cli client[100]; 

typedef struct receptura 
{
    char nameCake[50];
    char staffing[50];
    int price;
    int flour;// мука
    int starch;//крохмаль
    int sugar;//цукор
    int salt;//с≥ль
    int butter;//масло
    int sourCream;//сметана
    int cream;//вершки
    int eggs;//€йц€
    int chees;//сир
    int condensedMilk;//згущене молоко
    int milk;//молоко
    int chocolate; //шоколад
    int nuts;//гор≥хи
    int fruit;//фрукти
    int oil;
    int water;//вода
    int agar;//агар
    int gelatin;
    int honey;//мед
    int cocoa;
        
}rec;
rec recipe[100];

void addClient();
void addOrder();
void addRecipe();
