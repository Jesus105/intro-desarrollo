#include <stdio.h>

int main(){
    
    // IF-ELSE
    int user_age = 0;

    puts("Ingrese su edad: ");
    scanf("%d", &user_age);

    if(user_age > 17){
        puts("Ya puedes votar y tomar cerveza. :)");
        puts("Eres mayor de edad.");
    }
    else
        puts("Aun eres menor de edad. ");
   

    // IF - ELSE IF - ELSE

    int user_grade = 0;

    puts("Ingrese su calificacion.");
    scanf("%d", &user_grade);

    
    if(user_grade > 0 && user_grade < 7)
        puts("La calificacion es deficiente");
    
    else if(user_grade == 7 || user_grade == 8)
        puts("La calificacion es regular");

    else if(user_grade == 10 || user_grade == 9)
        puts("La calificacion es buena");

    else 
        puts("El valor ingresado no es valido.");
   
   //Switch case

   char letra;

   puts("Ingrese una vocal: ");
   scanf("%c", &letra);

   switch (letra)
   {
   case 'a':
        puts("Avestruz");
       break;
   
   case 'e':
        puts("Elefante");
       break;
       
   case 'i':
        puts("Iguana");
       break;
       
   case 'o':
        puts("Oso");
       break;
       
   case 'u':
        puts("Unicornio");
       break;

   default:
        puts("El valor ingresado no es valido.");
       break;
   }

   // Operador teranario

    int user_age = 0;

    puts("Ingrese su edad");
    scanf("%d", &user_age);

    printf("El usuario es %s de edad \n", (user_age>17 ? "mayor" : "menor"));

    return 0;
}