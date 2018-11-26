#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/*

Se desea un programa que lea el nombre de un estudiante y la nota que sacó en tres parciales.
El programa debe calcular el promedio. El programa debe escribir el nombre del estudiante, el
promedio, la literal y el mensaje de si aprobó o reprobó.
Recuerde que si el promedio es mayor a 60 el estudiante aprueba la materia de lo contrario
está reprobado.
Promedio = (Parcial1+Parcial2+Parcial3)/3

*/

int main(int argc, char *argv[]) {
          
          
          float nota1,nota2,nota3,promedio;
          char Nombre[100];
          
          printf("Ingrese Nombre de estudiante: \n");
          scanf("%s",&Nombre);
          printf("Ingrese 3 Notas Parciales\n");
          scanf("%f",&nota1);
          scanf("%f",&nota2);
          scanf("%f",&nota3);
          
          promedio = (nota1+nota2+nota3)/3;
          
          if (promedio > 90)
          {
				
				printf("\n Estudiante: %s" ,Nombre);
				printf("\n Literial: A");
				printf("\n Promedio: %f",promedio);
				printf("\n Aprobo");

          	  
          }
          else 
          {
		          	  if (promedio > 80)
		            {
							printf("\n Estudiante: %s" ,Nombre);
							printf("\n Literial: B");
							printf("\n Promedio: %f",promedio);
							printf("\n Aprobo");
		          	  
		            } 
		            else 
		            {
		            	
				            if (promedio > 70)
				            {
				            	
									printf("\n Estudiante: %s" ,Nombre);
									printf("\n Literial: C");
									printf("\n Promedio: %f",promedio);
									printf("\n Aprobo");
				          	  
				            }
							else 
							{
								
									if (promedio > 60)
									{
										
										printf("\n Estudiante: %s" ,Nombre);
										printf("\n Literial: D");
										printf("\n Promedio: %f",promedio);
										printf("\n Aprobo");
						          	  
						            }
									else 
									{
											printf("\n Estudiante: %s" ,Nombre);
											printf("\n Literial: F");
											printf("\n Promedio: %f",promedio);
											printf("\n Reprobo");
									 } 
										
							 } 
		            	
					}
					
	      }

}
