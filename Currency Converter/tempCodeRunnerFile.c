include <stdio.h>
#include <math.h>

int main(){

//first we need to choose between two options. dolar to tl or tl to dolar.
//after choosing we are going to get another input about how many currency they want to convert  to one another
//i also need to give an error in case we dont enter 1 or 2

    int option = 0;
    float dollars = 0.0f;
    float turkish_liras = 0.0f;
    float results = 0.0;


      printf("Welcome to the Currency Converter.\n");
      printf("Would you like to convert Dollar to Turkish Liras or Turkish Liras to Dollar? Enter the option you want: ");
      scanf("%d", &option); 
 
    if(option == 1){
       printf("Enter the amount of Dollars you want to convert to Turkish Liras: ");
       scanf("%f", &dollars);
       result = dollars * 50,37
       printf("%f Dollar equals to %f Turkish Lira.", &dollars &results);



    }




    return 0;
}