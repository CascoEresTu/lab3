#include <iostream>
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <cstring>
#include <string>
using namespace std;

void print(char** pMatriz, int pSize);

void ejercicio1();

bool esBisiesto(int);

void division(int ** matriz, int size, int num);

void ejercicio2();

void rotar(int*, bool verify);

void rotacionSimple(int* cifras, int size);

void ejercicio3();

int main() {

 while(s==0){


   int op = 0;

   string title ="Laboratorio # 2 \n";

   string options = "1)Ejercicio 1 \n2)Ejercicio 2\n3)Ejercicio 3\n";
   cout<<options;
   cout<<"Seleccione una opcion.\n";
   cin >> op;

   if (op ==1) {
     ejercicio1();
   }
   if (op ==2) {
     std::cout << "spoof" << std::endl;
   }
   if (op ==3) {
     ejercicio3();
   }

   cout<<"Desea Continuar? 0|1 \n";
   cin>>s;
}
 return 0;
}


void rotar(int *weekdays , bool verify){

    if (verify == true) {
      int ultimo = weekdays[6 ];
      for (int i = 6 ; i > 0; i--) {
          weekdays[i] = weekdays[i-1];
      }
       weekdays[0] = ultimo;

      int last = weekdays[6];

      for (int j = 6 ; j > 0; j--) {
           weekdays[j] = weekdays[j-1];
      }
        weekdays[0] = ultimo;

    }else if (verify ==false){
      int ultimo = weekdays[6];
      for (int i = 6 ; i > 0; i--) {
          weekdays[i] = weekdays[i-1];
      }
       weekdays[0] = ultimo;
    }

}


bool esBisiesto(int anio){

bool verify = true;

  if (anio % 400 == 0){
    verify = true;
  } else if (anio % 100 == 0) {
    verify = false;
  } else if ( anio % 4 ==0){
    verify = true;
  }else{
    verify = false;
  }
  return verify;
}


void ejercicio3(){

    string numero = "";
    char* num = new char [4];

      std::cout << "Ingrese un numero de  1 a 4 cifras " << std::endl;

      cin>> numero ;

      strcpy(num,numero.c_str());

      int* cifras = new int [numero.length()];


    for (int i = 1; i < numero.length(); i++) {
      cifras[i] = num[i] - '0';

    }

    for (int i = 0; i < numero.length(); i++) {
      cout << cifras[i] <<" " ;
    }

    int contador = numero.length();

    /*while(contador > 0 ){*/
      /*
        for (int i = 0; i < numero.length(); i++) {
          cout << cifras[i] <<" " ;
        }

        cout << endl; */
    //    rotacionSimple(cifras, contador);

        contador--;

    delete [] cifras;
}


void rotacionSimple(int* cifras,int size){

  int tam = size;
  int array [size] ;

  int primero = cifras[0];
  for (size_t i = 0; i < size; i++) {
    if (i+1 < size-1) {
     array[i] = cifras[i+1];
        }
     }

     for (int i = 0; i < size; i++) {
       std::cout << array[i] << std::endl;
     }

}

void ejercicio1(){

  int sundays=0, days=1, daymonth;
  for (int i = 1901; i < 2000; ++i){//for de los años
    for (int j = 1; j <= 12; ++j){//for de los meses
      if(j==4||j==6||j==9||j==11){
        daymonth=30;
      }else if(j == 2){
        if(i%400==0 || (i%4==0 && i%100!=0)){
          daymonth=29;
        }else{
          daymonth=28;
        }
      } else {
        daymonth=31;
      }
      if(days%7==0){
        sundays++;
      }
      days+=daymonth;
    }
  }
  cout<< "Hay " << sundays <<" entre 1900-1999"<< endl;

}


void division(int ** matriz, int size, int num){
  int temp = 0;

    for (int i = size; i >= 0; --i) {
        if (i == size) {
          matriz[2][i] = matriz[0][i];
          temp = matriz[2][i];
          print(matriz, size);
        }

        if (i < size) {
          temp = temp*num;
          matriz[1][i] = temp;
          matriz[2][i] = temp;
          temp = temp + matriz[0][i];
          cout << endl;
          print(matriz, size);
        }
    }

}



void ejercicio2(){
    int grado = 0;
    int dividir = 0 ;
    std::cout << "Ingrese grado de la matriz" << std::endl;
    cin >> grado

    std::cout << "Ingrese numero por cual dividir" << std::endl;
    cin >> dividir;


    int **tabla;

    tabla = new int*[5]; // Se crea un array dinamico (tamaño 10) de punteros a int.
    for (int i = 0; i < 5; ++i) {
      tabla[i] = new int[grado];
    }


    for (int i = 0; i < 5; ++i) {   // cada fila
      for (int j = 0; j < 5; ++j) { // cada columna
        cin >> tabla[i][j];
        b++;
      }
    }

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        cout << tabla[i][j] << endl;
      }
    }


    division(tabla, grado, dividir );

    for (int i = 0; i < 5; i++) {
      delete[] tabla [i];
      tabla [i] = null;
      }
      delete [] tabla;




  int *** matriz = new int **[size];
    for (int i = 0; i < count; i++) {
      /* code */
    }




};



void print(int** pMatriz, int pSize){
  for (int i = 0; i < pSize; i++) {
    for (int j = 0; j < pSize; j++) {
        cout << pMatriz[i][j]<< " " ;
    }
        cout <<endl;
  }
}
