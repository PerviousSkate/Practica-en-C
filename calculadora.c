#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

//declaracion de funciones//
int ingreso_n1();
int ingreso_n2();
int calculo_suma(int,int);
int calculo_resta(int,int);
int calculo_multiplicacion(int,int);
void respuesta(int,int,int);

int main()
{
    //declaracion de variables//
    int n1,n2;
    int suma,resta,multiplicacion;
    
    n1=ingreso_n1();
    n2=ingreso_n2();
    
    //calculo a realizar//
    suma=calculo_suma(n1,n2);
    resta=calculo_resta(n1,n2);
    multiplicacion=calculo_multiplicacion(n1,n2);
    
    respuesta(suma,resta,multiplicacion);
    return 0;
}

//funcion para ingreso de n1//
int ingreso_n1(){
    int n1;
    printf("Por favor ingrese el primer numero\n");
    scanf("%i", &n1);
    return n1;
} 

//funcion para ingreso de n2//
int ingreso_n2(){
    int n2;
    printf("Por favor ingrese el segundo numero\n");
    scanf("%i", &n2);
    return n2;
} 

int calculo_suma(int n1,int n2){
    int suma;
    suma=n1+n2;
    return suma;
}

int calculo_resta(int n1,int n2){
    int resta;
    resta=n1-n2;
    return resta;
}

int calculo_multiplicacion(int n1,int n2){
    int multiplicacion;
    multiplicacion=n1*n2;
    return multiplicacion;
}

void respuesta(int suma,int resta,int multiplicacion){
    printf("Sus resultados seran: suma=%i, resta=%i y multiplicacion=%i", suma,resta,multiplicacion);
}