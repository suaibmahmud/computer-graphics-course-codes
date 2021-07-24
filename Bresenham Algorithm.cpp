/*
Bresenham Algorithm
step1: take two coordinates (x1,y1) & (x2,y2)
step2: calculate
    dx=x2-x1
    dy=y2-y1
step3: calculate decision parameter
    d=2dy-dx
step4:
    if d<0
      d+=2dy
      x1+=1
      y1 will be unchanged
    if d>=0
      d+=2dy-2dx
      x1+=1
      y1+=1
step5: repeat step4 until (x2,y2)
*/

#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main(){
    int gm, gd = DETECT;
    int x1, y1, x2, y2;

    cout<<"Enter 1st coordinates: ";
    cin>>x1>>y1;
    cout<<"Enter 2nd coordinates: ";
    cin>>x2>>y2;
    initgraph(&gd, &gm, ""); // open BGI window

    int dx = x2-x1;
    int dy = y2-y1;
    int d = 2*dy-dx; // decision parameter

    while(x1<x2){
        if(d<0){
            putpixel(x1,y1,7);
            d += 2*dy;
        }
        else if(d>=0){
            putpixel(x1,y1,7);
            d += 2*dy-2*dx;
            y1 += 1;
        }
        x1 += 1;
    }

    getch();
    closegraph();
    return 0;
}

