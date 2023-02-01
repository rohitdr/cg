#include<graphics.h>
#include<conio.h>
int main (){
    int gm = DETECT, gd;
    initgraph(&gm,&gd,(char*)"");
  line(100,100,500,100);
    line(100,200,500,200);
     line(100,100,100,200);
       line(500,100,500,200);
       line(100,100,200,0);
         line(300,100,200,0);
              line(500,0,200,0);
                line(500,0,500,100);
    
    getch();
    closegraph();
    return 0;

}