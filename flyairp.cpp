#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
 #include<fstream>
using namespace std;
int main(){
	int gd=DETECT,gm,x,y,i;
		ifstream in;
    initgraph(&gd,&gm,(char*)"C:\\Dev-Cpp\\lib");
   
   for(i=0;i<getmaxx();i++)
{
	    in.open("fair1.txt");
   moveto(50+i,381-i);
    while(!in.eof())
    {	
    in>>x>>y;
	lineto(x+i,y-i);
	}//while
	in.close();
	
	 in.open("fair2.txt");
   moveto(115+i,412-i);
    while(!in.eof())
    {	
    in>>x>>y;
	lineto(x+i,y-i);
	}//while
	in.close();
	
		 in.open("fair3.txt");
   moveto(151+i,412-i);
    while(!in.eof())
    {	
    in>>x>>y;
	lineto(x+i,y-i);
	}//while
	in.close();
	
	moveto(152+i,417-i);
	lineto(149+i,418-i);
	lineto(139+i,427-i);
	
	moveto(149+i,419-i);
	lineto(150+i,435-i);
	
	moveto(145+i,423-i);
	lineto(145+i,434-i);
	
  	moveto(142+i,426-i);
	lineto(142+i,430-i);	
	
	moveto(142+i,413-i);
	lineto(106+i,435-i);
	
moveto(113+i,417-i);
lineto(69+i,417-i);
lineto(30+i,407-i);

moveto(17+i,404-i);
lineto(9+i,402-i);
lineto(9+i,395-i);
lineto(23+i,388-i);

moveto(24+i,390-i);
lineto(6+i,329-i);
lineto(9+i,328-i);
lineto(14+i,328-i);
lineto(16+i,330-i);
lineto(50+i,380-i);
lineto(49+i,382-i);
lineto(24+i,390-i);

moveto(18+i,369-i);
lineto(8+i,370-i);
lineto(17+i,390-i);
    
moveto(22+i,399-i);
lineto(40+i,399-i);
lineto(13+i,416-i);
lineto(6+i,414-i);
lineto(22+i,399-i);    
    
moveto(110+i,373-i);
lineto(83+i,315-i);
lineto(78+i,309-i);
lineto(79+i,309-i);
lineto(82+i,308-i);
lineto(87+i,311-i);
lineto(91+i,314-i);
lineto(138+i,369-i);    
    
    
moveto(235+i,371-i);
lineto(230+i,375-i);
lineto(230+i,377-i);
lineto(231+i,378-i);
lineto(232+i,378-i);
lineto(237+i,375-i);


settextstyle(8,0,1);
outtextxy(126+i,374-i,"Ethiopian");
    
    delay(20);
    cleardevice();
    line(5,475,610,475);
    line(10,465,50,465);
    line(70,465,110,465);
    line(130,465,170,465);
    line(190,465,230,465);
    line(250,465,290,465);
    line(310,465,350,465);
    line(370,465,410,465);
    line(430,465,470,465);
    line(490,465,530,465);
    line(550,465,590,465);
}
    getch();}
