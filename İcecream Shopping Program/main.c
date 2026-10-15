#include <stdio.h>

int main(){

//Icecream Shopping Program first try

char flavor[30] = "";   //we leve it empty so it doesnt give an error of void in case we leave it empty later       
float price = 0.0f;    //we add f so other developers also knows this is supposed to be a floating point number
int quantity = 0;
char currency = '$';
float total = 0.0f;

printf("What flavor would you like to buy?  ");
fgets(flavor, sizeof(flavor), stdin);

printf("What is the price of a single scoop?  ");    //Dont forget the & when youre using scanf!
scanf("%f", &price);

printf("How many scoops of ice cream would you like?  ");
scanf("%d", &quantity);

total = price * quantity;

printf("\nIts going to be %c%.2f, sir/madam.", currency, total);


}