/*
DDA (Digital Differential Analyzer) Algorithm
step1: take two coordinates (x1,y1) & (x2,y2)
step2: calculate
    dx=x2-x1
    dy=y2-y1
step3: calculate steps
    if dx>dy then, steps=dx
    otherwise steps=dy;
step4: calculate increment in x & y axis
    xinc=dx/steps;
    yinc=dy/steps;
step5: add xinc and yinc with x1 and y1 until (x2,y2)
*/

#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main(){
    int gd=DETECT, gm;
    float x1, y1, x2, y2;

    cout<<"Enter 1st coordinates: ";
    cin>>x1>>y1;
    cout<<"Enter 2nd coordinates: ";
    cin>>x2>>y2;

    initgraph(&gd, &gm, "");

    float dx = x2-x1;
    float dy = y2-y1;

    // calculate steps
    float steps;
    (dx>dy) ? steps = dx : steps = dy;

    // calculate increment in x & y axis
    float xinc = dx/steps;
    float yinc = dy/steps;

    int i = 1;
    while(i<=steps){
        putpixel(x1,y1,7);
        x1 += xinc;
        y1 += yinc;
        i++;
    }
    getch();
    closegraph();
    return 0;
}

