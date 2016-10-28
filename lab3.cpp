#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void ejercicio1();

bool esBisiesto(int);





int main() {


  bool caca = false;

  caca = esBisiesto(2012);

  if (caca == true) {
    cout << caca << endl;
  }

  ejercicio1();

  return 0;
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



void ejercicio1(){
  int anio = 1900;
  int dias = 0;
  while(anio <=1999){
    bool verify ;
    verify = esBisiesto(anio);

    if (verify == true) {
      cout <<  "entro aquí: " <<anio<<endl;
      dias+= 366 ;
    }else if (verify == false){
      std::cout << "entro aca: " << anio<<endl;
      dias+= 365 ;
    }
    anio++;
  }
    cout << dias << endl;
}
