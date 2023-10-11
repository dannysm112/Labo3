#include <stdio.h>

int busquedaLineal(int arreglo[], int numero, int longitud){

    for(int i=0;i<longitud;i++){
        if(numero == arreglo[i]){
            return i+1;
        }
    }

    return -1;
}


int busquedaBinaria(int arreglo[], int numero, int longitud){
    int inicio = 0;
    int final = longitud-1;
    int mitad;

    while(inicio <= final){
        mitad = (inicio + final) / 2;

        if(arreglo[mitad] == numero){
            return mitad+1;
        }
	else if(numero < arreglo[mitad]){
            final = mitad-1;
        }
	else{
            inicio = mitad+1;
        }

    }
    return -1;

}

int busquedaRecursiva(int arreglo[], int numero, int longitud){
    int inicio = 0;
    int final = longitud-1;
    int mitad;

    while(inicio <= final){
        mitad = (inicio + final) / 2;

        if(arreglo[mitad] == numero){
            return mitad+1;
        }
	else if(numero < arreglo[mitad]){
            final = mitad-1;
        }
	else{
            inicio = mitad+1;
        }
    }
    return -1;

}

int main(){

    int numero;
    scanf("%d",&numero);
    int arreglo[] = {2,4,6,23,56,79};
    int longitud = sizeof(arreglo)/sizeof(arreglo[0]);

    int posicion;

    posicion = busquedaLineal(arreglo,numero,longitud);

    if(posicion != -1){
        printf("Con búsqueda lineal el número está en la posición: %d \n",posicion);
    }else{
        printf("Con búsqueda lineal el número no está en el arreglo\n");
    }

    posicion = busquedaBinaria(arreglo,numero,longitud);

    if(posicion != -1){
        printf("Con búsqueda binaria el número está en la posición: %d \n",posicion);
    }else{
        printf("Con búsqueda binaria el número no está en el arreglo\n");
    }

    posicion = busquedaRecursiva(arreglo,numero,longitud);

    if(posicion != -1){
        printf("Con búsqueda recursiva el número está en la posición: %d \n",posicion);
    }else{
        printf("Con búsqueda recursiva el número no está en el arreglo\n");
    }

    return 0;
}

