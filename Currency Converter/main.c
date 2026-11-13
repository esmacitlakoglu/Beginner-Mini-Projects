#include <stdio.h>
#include <math.h>

int main(){

//first we need to choose between two options. dolar to tl or tl to dolar.
//after choosing we are going to get another input about how many currency they want to convert  to one another
//i also need to give an error in case we dont enter 1 or 2

    int option = 0;
    float dolar = 0.0f;
    float tl = 0.0f;


      printf("Welcome to the Currency Converter.\n");
      printf("Would you like to convert Dollar to Turkish Liras or Turkish Liras to Dollar? Enter the option you want: ");
      scanf("%d", &option); 
 
    if(option == 1){
       //dolardan tlye    
       printf("Enter the amount of dollars you want to convert: ");
       scanf("%f", &dolar);
       tl = dolar * 50.37;
       printf("%.2f dollars equals to %.2f Turkish Liras.", dolar, tl);

    }
    else if(option == 2){
    //tlden dolara
       printf("Enter the amount of Turkis Liras you want to convert: ");
       scanf("%f", &tl);
       dolar = tl / 50.37;
       printf("%.2f Turkish Liras equals to %.2f dollars.", tl, dolar);

    }
    else{
     //error kısmı
       printf("Error! You did not enter a registered option.");

    }

    return 0;
}