#include <stdio.h>

int main(){
    
    int Hola = 3,h;
    
    int *PuntH;

    PuntH = &Hola;

    printf("1)- El contido del puntero 'PuntH' es %d\n", *PuntH);
    printf("2)- La direccion de memoria almacenada en el puntero 'PuntH' es %d\n", PuntH);
    printf("3)- La direccion de memoria de la variable 'Hola' es %d\n", &Hola);
    printf("4)- La direccion de memoria del puntero 'PuntH' es %d\n", &PuntH);
    printf("5)- El tamanio de memoria utilizado por la variable 'Hola' es %d",sizeof(Hola));
    //scanf("%d",&h);//Solo uso el scanf para para que no se cierre la ventana de la consola

return 0;    
}