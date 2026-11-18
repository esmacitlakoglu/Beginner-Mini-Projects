#include <stdio.h>

int main(){

    char choice = '\0';
    float celcius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Welcome to the Temperature Converter\n");
    printf("C. Celcius to Fahrenheit\n");
    printf("F. Fahrenheit to Celcius\n");
    scanf("%c", &choice);

    if(choice == 'C'){
        printf("Enter the temperature in celcius.\n");
        scanf("%f", &celcius);
        fahrenheit = (celcius * 9 / 5) + 32;
        printf("%.1f Celcius equals to %.1f fahrenheit.", celcius, fahrenheit);       

    }
     else if(choice == 'F'){
        printf("Enter the temperature in Fahrenheit.\n");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f fahrenheit equals to %.1f celcius.", fahrenheit, celcius);       

    }
    else{
        printf("Invalid choice! Please select between C or F.\n");
    }

    return 0;

}