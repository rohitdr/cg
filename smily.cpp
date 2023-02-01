#include<graphics.h>
#include<conio.h>
int main (){
    int gm = DETECT, gd;
    initgraph(&gm,&gd,(char*)"");
    circle(200,200,100);
    circle(150,150,1);
    circle(250,150,1);
    arc(200,200,225,315,50);
    ellipse(150,150,0,360,20,10);
    ellipse(250,150,0,360,20,10);
    getch();
    closegraph();
    return 0;

}