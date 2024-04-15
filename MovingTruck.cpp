#include <iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<windows.h>

using namespace std;

int i;

class truck
{
	public:
		void body();
	
};

void truck::body()
{
	int i=0;
	for(i=0;i<1000;i++)
	{
	    //sun
	    circle(750,75,35);
	    setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(750,75, WHITE);
		        
		//mountains
		setcolor(LIGHTGREEN);
		line(0,200,100,150);
		line(100,150,200,200);
		line(200,200,330,100);
		line(330,100,500,165);
		line(500,165,640,80);
		line(640,80,750,200);  
		line(750,200,900,60);
		line(900,60,1000,200);
		        
		//person
		setcolor(LIGHTMAGENTA);
        circle(330+i,420,8);
        
    	line(330+i,435,340+i,455);
		line(330+i,435,320+i,455);
		        
		//body of the truck
        setcolor(WHITE);
		rectangle(70+i,420,270+i,520);  
		rectangle(80+i,430,260+i,510);
		setfillstyle(SOLID_FILL, DARKGRAY);
        floodfill(71+i,422, WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        floodfill(81+i,432, WHITE);
		rectangle(270+i,390,370+i,500);
		rectangle(310+i,390,370+i,455);
		rectangle(285+i,455,300+i,460);
		setfillstyle(SOLID_FILL, RED);
        floodfill(286+i,456, WHITE);
        
		// truck Wheels
		setcolor(WHITE);
        circle(210+i,553,30);
        circle(120+i,553,30);
	    circle(312+i,542,40);
	
	    //inner circle
        setcolor(LIGHTRED);
        circle(210+i,553,24);
        circle(120+i,553,24);
        circle(312+i,542,34);
        
	    // Road
	    setcolor(WHITE);
	    line(0,536,getmaxx(),536);
	    line(0,650,getmaxx(),650);
	    line(0,538,getmaxx(),538);
		line(0,652,getmaxx(),652);
		rectangle(0,590,50,596);
	    rectangle(100,590,150,596);
	    rectangle(200,590,250,596);
	    rectangle(300,590,350,596);
	    rectangle(400,590,450,596);
	    rectangle(500,590,550,596);
	    rectangle(600,590,650,596);
	    rectangle(700,590,750,596);
	    rectangle(800,590,850,596);
	    rectangle(900,590,950,596);
	    rectangle(1000,590,1050,596);
	    rectangle(1100,590,1150,596);
	    rectangle(1200,590,1250,596);
	                   
		// windmills
		setcolor(YELLOW);
	    rectangle(400,200,405,536);
	    rectangle(800,200,805,536);
	              
	    setcolor(WHITE);
	    line(403,150,405,200);
        line(405,150,400,200);
	    line(403,205,350,230);
		line(400,200,350,230);
	    line(403,205,450,230);
	    line(450,230,405,200);	
	    line(803,150,805,200);
	    line(805,150,800,200);
	    line(803,205,750,230);
	    line(800,200,750,230);
	    line(803,205,850,230);
	    line(850,230,805,200);
	                     
	    delay(10);
	    cleardevice();
    };
}

int main()
{
	int i;
    int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");
	initwindow(1000,750);
 //setbkcolor(LIGHTGREEN);   
	truck t;
	t.body();
	
	getch();
	return 0;
	closegraph();
	
}
