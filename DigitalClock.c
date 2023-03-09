/*
 * PracticaReloj.c
 *
 * Created: 19/06/2018 12:35:24 p. m.
 * Author: L00638437
 */

#include <io.h>
#include <delay.h>

unsigned char i=0;
signed H=0,M=0,S=0;

void main(void)
{
    TCCR1A=0;
    TCCR1B=0x0A;    //Timer 1 en CTC con CK/8
    OCR1AH=31249/256;
    OCR1AL=31249%256;
    while (1)      // El ciclo completo tarda 0.25seg
    {
       //Imprimir hora en el LCD 
       
       while(TIFR1.OCF1A==0);   //Espera a 0.25seg
       TIFR1.OCF1A=1;           //Borra Bandera
       i++;   
      
       if (i==4)
       {
            i=0;
            S++;
            if (S==60)
            {
                S=0;
                M++;
                if (M==60)
                {   
                    M=0;
                    //Generar sonido durante 200ms
                    H++;
                    if (H==24)
                        H=0;
                }     
                
            }
       }
       //Revisar switches 
       
       
    }
}
