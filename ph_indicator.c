#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()

{

int gd= DETECT,gm;
float ph;
clrscr();

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");


rectangle(300,30,560,80);

line(350,30,350,80);
line(400,30,400,80);
line(450,30,450,80);
line(500,30,500,80);

  setfillstyle(SOLID_FILL,RED);
    floodfill(305,32,WHITE);
  setfillstyle(SOLID_FILL,12);
    floodfill(355,32,WHITE);
  setfillstyle(SOLID_FILL,02);
    floodfill(405,32,WHITE);
  setfillstyle(SOLID_FILL,01);
    floodfill(455,32,WHITE);
  setfillstyle(SOLID_FILL,CYAN);
    floodfill(505,32,WHITE);


  outtextxy(310,55,"<3");
  outtextxy(360,55,"3-6");
  outtextxy(410,55,"7");
  outtextxy(460,55,"8-11");
  outtextxy(510,55,"12-14");
  outtextxy(360,20,"$$ pH range $$");
  outtextxy(300,90,"Acidic nature decreases-->>");

printf("WELCOME TO UNIVERSAL pH FINDER\n\n");
printf("Find the nature of pH value!\n");
printf("\n\nENTER a pH value;) \n");
scanf("\n%f",&ph);
printf("\n\n\n\n");
rectangle(10,200,270,260);

line(60,200,60,260);
line(110,200,110,260);
line(160,200,160,260);
line(210,200,210,260);



  outtextxy(20,230,"<3");
  outtextxy(70,230,"3-6");
  outtextxy(120,230,"7");
  outtextxy(170,230,"8-11");
  outtextxy(220,230,"11-14");


 if(ph < 3)
   {
    printf("The substance is Strong acidic in nature.");
    setfillstyle(SOLID_FILL,RED);
     floodfill(12,230,WHITE);
   }

 else if(ph>=3 && ph<=6)
   {
    printf("The substance is Weak acidic in nature.");
    setfillstyle(SOLID_FILL,12);
     floodfill(62,230,WHITE);
   }

 else if(ph==7)
   {
    printf("THe substance is Neutral in nature.");
    setfillstyle(SOLID_FILL,02);
     floodfill(112,230,WHITE);
   }

 else if(ph>=8 && ph<=11)
   {
    printf("The substance is Weak basic in nature.");
    setfillstyle(SOLID_FILL,01);
     floodfill(165,230,WHITE);
   }

 else if(ph>=12 && ph<=14)
   {
    printf("THe substance is Strong basic in nature.");
    setfillstyle(SOLID_FILL,CYAN);
     floodfill(212,230,WHITE);
   }

 else
   {
    printf("Enter appropriate value(1-14)");
   }

 getch();
 return 0;
}
