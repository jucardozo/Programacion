#include <stdio.h>
//FALTA CONTROLAR QUE SEAN TODOS NUMEROS Y PERMITER QUE INTRODUZCAN DOS CIFRAS DE NUMEROS
int main (void)
{
	printf("introducir un numero entre 1y 25\n");
	int largo=(getchar()-48);			//el numero que me pasan es el numero de lineas hasta el medio
	int ancho=(largo*2)-1;		//ancho maximo del cuadro imaginario que completa un rombo
	int cantesp=(largo-1),esp=0;				//contador de espacios
	int cantx=1,x=0;						//contador de Xs
	int vueltas=0,habilitador=1;		//habilitador es flags que me permiten acceder al if del bloque for
	int linea=0,otrolado=1;			//flag que me permite completar la otra mitad del rombo
	for(linea=0; linea<=(largo-1);linea++)
	{
		for (esp=0; esp<cantesp; esp++)
		{	
			printf(" ");
			vueltas++;
			if((vueltas==cantesp)&&(habilitador))	//imprimio la cant de espacios necesarios
			{
				for(x=0;x<cantx;x++)
					{
						printf("x");
					}		
				esp=0;					//reinicio el for para que me complete el otro lado
				habilitador=0;				//bajo el flag  habilitador, para que cuando complete el otro lado , no ponga Xs
			}
		}
		habilitador=1;
		vueltas=0;
		if((linea==(largo-1))&&otrolado)	//si estoy en el medio del rombo tengo que imprimir toda el rango de Xs
		{							
			for(x=0;x<ancho;x++)
			{
				printf("x");			
			}			
			otrolado=0;				//bajo el flag ,otrolado, para cambiar el formato de la actualizacion de mi programa
			linea=0;					//reinicio el for 
		}
		if(otrolado==1)	//hago una actualizacion manual del for, para despues poder cambiar el estilo de la actualizacion
		{				//completo la parte superior del rombo
			cantx+=2;		
			cantesp-=1;
		}
		else				//este else me permite cambiar la actualizacion del for, para poder completar la parte inferior del rombo
		{
			cantx-=2;
			cantesp+=1;	
		}
		printf("\n");		//bajo linea
	}
	return 0;
}




