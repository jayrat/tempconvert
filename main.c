/*
 * Temperature Converter
 * Functionality: Given a Temperature in degrees Fahrenheit convert to degrees Celsius
 * or given a Temperature in degrees Celsius convert to degrees Fahrenheit
 *
 * Author: Jeremy Hawkins
 * Version: 0.1
 * November 2020
 */

 #include <stdio.h>
 #include <ctype.h>

 int main()
 {
     float celsius, fahrenheit, kelvin, degrees; // celsius temp, fahrenheit temp, kelvin temp, degrees input
     char op = '\0'; // User Operation Character Input -- initialized to null

     void prompt()
     {
         printf("Enter a temperature in degrees celsius or fahrenheit to have it converted into the other and kelvin.\n");
         printf("Input _c_ to enter degrees celsius\n");
         printf("Input _f_ to enter degrees fahrenheit\n");
         printf("Input _x_ to exit program\n");
     }

     prompt(); // Start with prompting user with instructions
     while (op != 'x')
     {
        scanf(" %c", &op); // read user's input

        switch(op)
        {
        case 'f' :
            printf("Enter Degrees Fahrenheit: ");
            scanf("%f", &degrees);
            celsius = (degrees - 32) * 5/9;
            kelvin = celsius + 273.15;
            printf("%.2f Fahrenheit = %.2f Celsius or %.2f Kelvin\n", degrees, celsius, kelvin);
            break;
        case 'c' :
            printf("\nEnter Degrees Celsius: ");
            scanf("%f", &degrees);
            fahrenheit = (degrees * 9/5) + 32;
            kelvin = degrees + 273.15;
            printf("%.2f Celsius = %.2f Fahrenheit or %.2f Kelvin\n", degrees, fahrenheit, kelvin);
            break;
        case 'x' :
            printf("Exiting Program");
            break;
        case 'h' :
            prompt();
            break;
        default :
            printf("Invalid INPUT '%c'\n", op);
            prompt();
        }
     }
     return 0;
 }
