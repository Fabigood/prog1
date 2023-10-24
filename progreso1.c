#include <stdio.h>
int main(){

int num;

printf("Inserte un numero de 2 cifras entero: "); //pedimos el numero al usuario
scanf("%d", &num);
int sumaDigitos(int num){
        int suma =0;                    //agregamsop un while para poder descartar numeros menores de 0
    while (num > 0) {   //con al division de mod saco el numero divido a 10 con eso recorro
        suma += num % 10; // se utiliza el mod diviendo para 10 para descomponer el numero y solo quedarnos con la parte entera
        num /= 10; 
        // podemos sacar el ultimo numero
    }

    return suma;
}


    while (num >= 10) {
        num = sumaDigitos(num);
    }


    

printf("El numero es : %d\n", num);
print("Gracias por usar el progrm :) ");
return 0;
}
