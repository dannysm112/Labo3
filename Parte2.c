#include <stdio.h>

int encontrarMaximo(int arreglo[], int longitud){
<<<<<<< HEAD
	int max = arreglo[0];
	for(int i=1;i<longitud;i++){
		if(arreglo[i]> max){
			max = arreglo[i];
		}
	}include <stdio.h>

int encontrarMaximo(int arreglo[], int longitud){
=======
>>>>>>> Parte1
        int max = arreglo[0];
        for(int i=1;i<longitud;i++){
                if(arreglo[i]> max){
                        max = arreglo[i];
                }
        }
        return max;
}

int encontrarMinimo(int arreglo[], int longitud){
        int min = arreglo[0];
        for(int i=1;i<longitud;i++){
                if(arreglo[i]<min){
                        min = arreglo[i];
                }
        }
        return min;
}

<<<<<<< HEAD
	return max;
}

int encontrarMinimo(int arreglo[], int longitud){
	int min = arreglo[0];
	for(int i=1;i<longitud;i++){
		if(arreglo[i]<min){
			min = arreglo[i];
		}
	}
	return min;
}

void encontrarMaxMin(int *arreglo, int *min, int *max, int longitud){
	*min = *arreglo;
	*max = *arreglo;
	for(int i=1;i<longitud;i++){
		if(*(arreglo+i) > *max){
			*max = *(arreglo+i);
		}
	}
	
=======
void encontrarMaxMin(int *arreglo, int *min, int *max, int longitud){
        *min = *arreglo;
        *max = *arreglo;
        for(int i=1;i<longitud;i++){
                if(*(arreglo+i) > *max){
                        *max = *(arreglo+i);
                }
        }

>>>>>>> Parte1
        for(int i=1;i<longitud;i++){
                if(*(arreglo+i) < *min){
                        *min = *(arreglo+i);
                }
        }

}

int main(){

<<<<<<< HEAD
	int arreglo[] = {21,24,65,3,56,12,35,15};
	int longitud = sizeof(arreglo)/sizeof(arreglo[0]);
	int maximo = encontrarMaximo(arreglo, longitud);
	printf("El máximo con la función encontrarMáximo es: %d\n", maximo);

	int minimo = encontrarMinimo(arreglo, longitud);
        printf("El mínimo con la función encontrarMínimo es: %d\n", minimo);

	int max;
	int min;
	encontrarMaxMin(arreglo, &min, &max, longitud);
	
	printf("El máximo y mínimo con la función encontrarMaxMin son: %d y %d\n", max, min); 

	return 0;
}
=======
        int arreglo[] = {21,24,65,3,56,12,35,15};
        int longitud = sizeof(arreglo)/sizeof(arreglo[0]);
        int maximo = encontrarMaximo(arreglo, longitud);
        printf("El máximo con la función encontrarMáximo es: %d\n", maximo);

        int minimo = encontrarMinimo(arreglo, longitud);
        printf("El mínimo con la función encontrarMínimo es: %d\n", minimo);

        int max;
        int min;
        encontrarMaxMin(arreglo, &min, &max, longitud);

        printf("El máximo y mínimo con la función encontrarMaxMin son: %d y %d\n", max, min);

        return 0;
}          
>>>>>>> Parte1
