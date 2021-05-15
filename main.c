#include <stdio.h>
#include <stdlib.h>
int numberOrder;
int numberCli;
int numberRec;

int main() 
{
  char selection;
  char variant; 
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int numberOrder=0;
  int numberCli=0;
  int numberRec=0;
   
    while ((variant = menuChoice()) != '0' && variant != 27){
         switch (variant)
           { 
               case '1':
               	 do{
               	 	selection = menu();
                    switch (selection)
                     {
				   	   case '1': addClient();break;
    			       case '2': saveClient();break;
    			  	   case '3': loadClient();break;
    			  	   case '4': printClient();break;
    			       case '5': delClient();break;
    			  	   case '6': sortClient();break;
    		         } 
    		       }while (selection != '0' && selection != 27);
    		                break;
                
               case '2':
                 do{
               	    selection = menu();
				    switch (selection)
                     {
				       case '1': addOrder();break;
    			  	   case '2': saveOrder();break;
    			  	   case '3': loadOrder();break;
    			  	   case '4': printOrder();break;
    			  	   case '5': delOrder();break;
    			  	   case '6': sortOrder();break;
					 }
    		       } while (selection != '0' && selection != 27);
    		                 break;
	  			
               	case '3':
               	  do{
               	 	selection = menu();
                    switch (selection)
                     {
				   	   case '1': addRecipe();break;
    			  	   case '2': saveRecipe();break;
    			       case '3': loadRecipe();break;
    			       case '4': printRecipe();break;
    			  	   case '5': delRecipe();break;
    			  	   case '6': sortRecipe();break;
    			     }
    		       } while (selection != '0' && selection != 27);	  
		   }
	}
	return 0;
}
