//include se usa para incluir una libreria a tu programa
//iostream es una libreria que incluye todos los conocimientos de operaciones matematicas basicas, entradas y salidas de datos, etc
#include <iostream>

//no se como explicarlo
using namespace std;

//int main(){} lo que este dentro de los corchetes será lo que se ejecute al iniciar el programa, es la funcion principal
int main(){
	
	int variable0, x=1, i=10, opc;
	//int declara variables enteras (1, 2, 3, 4, 5, ...)
	float variable1, y=2;
	//float declara variables flotantes, no enteros (1.2, 2.5, 3.8, 4.9, 5,431354125412, ...)
	char variable2, a='a';
	//char declara variables de un caracter(a, b, c, ?, !, ...)
	//podes declarar los valores en la misma variable como se muestra
	
	int g[5];
	//con los corchetes se declara la cantidad de datos que se pueden guardar en una variable
	//para acceder a una parte de esta variable es suficiente con poner g[ParteDeLaVariable]
	/*ejemplo:
	g[0]=2
	g[1]=1
	g[2]=5
	g[3]=4
	g[4]=3
	g[5]=123456
	
	g[2] + g[4] = 8
	*/
	
	//cout es una salida de datos, podes imprimir variables, textos, operaciones matematicas, etc. en la consola
    //<<endl crea un salto de linea, un "enter" en una hoja del word.
	cout << "Hola mundo" << endl;
	
	//cin es para guardar una entrada de datos, numeros, caracteres, palabras, etc
	cin>>variable;
	
	//se pueden hacer operaciones matematicas de la siguiente forma
	variable0 = (variable1 + variable2 - variable1) * 26 / 2;
	
	//if define las acciones a ejecutar si se cumple cierta condición
	if(/*condicion*/ variable0 + variable1 == variable2 ){
		cout<<"si la suma de variable0 y variable1 es el valor de variable2 pasa esto";
	}else{
		cout<<"sino, pasa esto...";
	}
	
	//podes hacer un if que guie a otro if que guie a otro hasta un else o hasta un if final
	if(/*condicion*/){
		//instrucciones
	}else if(/*condiciones*/){
	}else{
		//mas intrucciones
	}
	
	//podes hacer un solo if donde si no se cumple no pasa nada y si se cumple pasa a otras instrucciones
	if(/*condicion*/){
		//instrucciones
	}
	
	switch(opc){ //segun el valor de la variable el programa seguira uno de los siguientes bloques de instrucciones:
		case 1: cout << "Usted ha seleccionado la opción 1";
    	break;//case (valor) indica el inicio de la opcion seleccionada
			//break indica el final de la opcion seleccionada
    	case 2: cout << "Usted ha seleccionado la opción 2";
    	break;
    	case 3: cout << "Usted ha seleccionado la opción 3";
    	break;
    	//Bloque de instrucciones por defecto;
    	default: cout << "Usted ha ingresado una opción incorrecta";
    //la instrucción break es necesaria, para no ejecutar todos los casos.
    //default, es el bloque que se ejecuta en caso de que no se de ningún caso
	}
	
	//bucles: el ciclo o bucle for empieza por un valor y luego lo va comparando hasta que sea el indicado
	for(int f = valor inicial; f <= valor final; f = f + paso){
        	....
        	....
    	Bloque de Instrucciones....
        	....
        	....
	}
	
	//por ejemplo:
	for(int d=1; d<=10; d++){	//con "++" el valor de la variable aumenta en 1
		cout<<"esta oracion es repetida 10";
		//porque for va a comparar d hasta que d sea igual a 10
	}
	
	//while funciona mientras la condicion no se cumpla
	while(condición de finalización){
    	    ....
    	    ....
    	Bloque de Instrucciones....
    	    ....
    	    ....
	}
	
	while(variable0==100){
		variable0++;
		cout<<"se ejecutará hasta que variable0 sea igual a 100";
	}
	
	//return 0; es para avisar al programa que esta funcion no devuelve ningun valor
    return 0;
}
