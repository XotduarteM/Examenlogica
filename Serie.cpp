#include <iostream>

using namespace std;

maximo = float('-inf')  

while True:
    numero = float(input("Ingresa un número diferente de cero (-99 para salir): "))
    if numero == -99:
        break
    
   
if numero < 0:
        print("¡Has ingresado un número negativo!")
    
   
if numero > maximo:
        maximo = numero


       
print(f"El número máximo ingresado es: {maximo}")