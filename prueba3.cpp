 
//#include "stdafx.h"
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <stdio.h>
 
 
int main()
{
IplImage* imagen = cvLoadImage("lena.jpg",1); // inicializo imagen
 
int dato;
imagen=cvLoadImage("lena.jpg",1); // cargamos la imagen
for (int i=10;i<250;i++){      // Recorremos entre i=50 a i=250
    for (int j=150;j<400;j++){
        for (int k=0;k<3;k++){
            ((uchar *)(imagen->imageData+i*imagen->widthStep))[j*imagen->nChannels + k]=((uchar *)(imagen->imageData+i*imagen->widthStep))[j*imagen->nChannels + k]+100;
         //   dato=((uchar *)(imagen->imageData+i*imagen->widthStep))[j*imagen->nChannels];
        //  printf('%d',dato);         
    }
  }
}
 
cvNamedWindow("Imagen Nueva", 1);
 
/// muestra las imagenes
cvShowImage("Imagen Nueva", imagen);
cvWaitKey(0);
cvReleaseImage(&imagen);
 
return 0;
}
