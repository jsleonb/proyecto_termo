 
//#include "stdafx.h"
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <stdio.h>
 
 
int main()
{
IplImage* imagen = cvLoadImage("aria.jpg",1); // inicializo imagen
IplImage* ampl = cvCreateImage(cvSize(1060,618),IPL_DEPTH_8U,3);

cvNamedWindow("Ejemplo2", CV_WINDOW_AUTOSIZE);

cvNamedWindow("AMP", CV_WINDOW_AUTOSIZE);

cvResize(imagen, ampl, CV_INTER_CUBIC);

cvShowImage("Ejemplo", imagen);

cvShowImage("AMP", ampl);


cvReleaseImage(&imagen);

cvWaitKey(0);

cvDestroyWindow("Ejemplo");

cvDestroyWindow("AMP");

/* 
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

*/

//cvShowImage("Imagen Nueva", imagen);
//cvWaitKey(0);
//cvReleaseImage(&imagen);
 
return 0;
}
