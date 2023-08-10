

/*5. Dado el vector inflacion [0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9]
Cada item del vector representa la inflacion de un mes de tal manera que el primer
item del vector que es 0.8 representa la inflacion de Enero, y el ultimo item del vector
que es 0.9 representa la inflacion de diciembre. Se pide:
- Informar la inflacion anual
- Informar la inflacion mas baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 0.1
- Informar la inflacion mas alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 0.9*/

#include <stdio.h>

int main() {
    float inflacion[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float indiceAcum[12], indiceAcumTotal = 1;
    float infAnual = 0;
    for (int i = 0; i < 12; i++) {
        indiceAcum[i] =  (inflacion[i] / 100) + 1;
        indiceAcumTotal *= indiceAcum[i];

        switch(i) {
            case 1: 
            printf("Mes 2 = 0.1\n");
            break;
            case 11:
            printf("Mes 12 = 0.9\n");
            break;

        }
    }

    infAnual = (indiceAcumTotal - 1) * 100;
    printf("La inflacion anual  es %f", infAnual);
    
    
    return 0;


}
