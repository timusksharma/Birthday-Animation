#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
#include<stdlib.h>

//-------------------------------------------------------------------
//instalizing Graphics
void load()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
rectangle(0,0,getmaxx(),getmaxy());
}
//-------------------------------------------------------------------
//loading
void loading(int &n,int n1[4],int &j,int &p,int k)
{
int  x=300,y=250,a=0,b=300;
char str[50];
setcolor(n1[j]);
if(b-n<0)
{n=-n;
j++;
if(j==4)
j=0;
}
 
//Loading Animation
arc(x,y,a-n,b-n,110);
arc(x,y,a-n,b-n,111);
arc(x,y,a-n,b-n,112);
arc(x,y,a-n,b-n,113);
arc(x,y,a-n,b-n,114);
//Percentage
setcolor(3);
settextstyle(4,0,7);
sprintf(str,"%d",p);
outtextxy(280,210,str);
//Powered By
//settextstyle(4,0,2);
//outtextxy(450,325,"Powered By Ucreanto");
p--;
}


//Buildings----------------------------------------------------------
void buildings()
{int points[]={25,450,35,450,40,440,100,440,105,450,115,450};
int points2[]={40,440,40,400,35,395,35,390,40,385,40,375,100,375,100,385,105,390,105,395,100,400,100,440};
int points3[]={45,425,95,425};
int points4[]={40,395,45,390,95,390,100,395};
int points5[]={40,375,50,360,50,325,56,315,54,310,54,292,58,290,59,285,55,285,53,283,54,280,88,242,92,242,94,243,104,321,85,330,89,243,80,235,75,235,60,260,55,277};
int points6[]={60,260,55,260,53,253,66,240,68,235,68,230,66,225,65,220,65,195,67,190,67,185,66,180,64,175,56,175,54,180,54,185,55,190,59,195,56,220,54,225,51,230,50,235,50,245,56,251};
int points7[]={60,170,48,155,55,155,58,140,63,155,70,146,70,155,78,150,68,170};
int points8[]={94,243,100,260,100,275,101,280,100,287};
int points9[]={100,265,110,258,125,265,100,289};
int points10[]={55,326,85,293,60,350,88,334,90,328};
int points11[]={89,238,92,230,94,225,96,216,87,212,75,220,75,228,89,238};
int points12[]={73,220,73,217,88,207,97,213};
int point17[]={73,214,87,204,98,210};
int points14[]={74,209,72,202,76,207};
int point15[]={85,202,87,196,89,202};
int point16[]={96,204,100,200,99,206};

int points13[]={100,350,125,350,125,430};
int points15[]={125,450,610,450,610,445,115,445,115,440,625,440,625,435,100,435};
int points16[]={125,350,145,350,145,355,155,355,155,360,150,360,150,375,145,375,145,400,140,400,140,435};

int points17[]={175,360,175,395,190,395,190,410,180,410,180,435};
int points18[]={179,395,184,395,185,280,179,395};
int points19[]={185,280,210,280,220,285,220,345,235,345,235,355,225,355,225,400,220,400,220,345};
int points20[]={215,400,215,350,210,350,210,285,185,395};
int points21[]={195,410,195,400,220,400,220,415,220,415,220,400,240,400,240,420,250,420,250,435};
int points22[]={250,420,250,410,260,410,260,405,270,405,270,385,265,385,265,360,260,360,260,355,255,355,235,355};
int points23[]={260,370,230,385,230,393,260,378,260,385,230,400,230,393,260,378,260,370};
int points24[]={235,350,255,350,255,355};
int points25[]={200,255,205,255,205,275};
int points26[]={260,420,260,410,275,410,275,405,285,405,285,410,300,410,300,420,310,420,310,425};
int points27[]={255,425,270,425,270,420,280,420,280,425,300,425};
int points28[]={295,410,295,405,300,405,300,395,310,395,310,390,325,390};
int points29[]={325,435,325,375,330,375,330,370,335,370,335,365,345,365,345,370,350,370,350,375,355,375,355,435};
int points30[]={340,365,340,340,360,340,360,435};
int points31[]={340,340,360,335,360,340};
int points32[]={355,335,355,315,375,315,375,345};
int points33[]={355,315,360,310,380,310,375,315};
int points34[]={370,435,370,345,385,345,385,405};
int points35[]={385,345,390,350,390,400};
int points36[]={375,435,375,415,380,415,380,410,385,410,385,405,390,405,390,400,400,400,400,405,405,405,405,410,410,410,410,415,415,415,415,435};
int points37[]={389,435,402,425,411,435};
int points38[]={390,430,390,420,420,420,420,430,445,430,445,435,450,435,450,430,455,430,455,420,475,420};
int points39[]={400,400,400,335,440,335,440,360};
int points40[]={405,400,405,365,425,365,425,375,430,375,430,430};
int points41[]={440,430,440,425,435,425,435,375,440,375,440,370,455,370,455,365,470,365,470,375,475,375,475,425};
int points42[]={430,375,430,360,450,360,450,370};
int points43[]={460,363,460,335,470,335};
int points44[]={465,363,465,340,525,340,525,364};
int points45[]={500,340,500,345,505,345,505,350,515,350,515,360,520,360,520,435};
int points46[]={480,425,480,355,485,355,485,350,490,350,490,345,495,345,495,350,500,350,500,355,505,355,505,360};
int points47[]={525,365,530,365,530,375,560,375,560,390,545,400,545,435};
int points48[]={530,360,530,330,540,330,540,365,545,365,545,370,555,370};
int points49[]={540,330,540,320,575,320,575,360};
int points50[]={560,390,570,390,570,375,575,375,575,365,580,365,580,375,585,375,585,390,600,390};
int points51[]={600,410,600,325,575,325};
int points52[]={580,325,588,300,600,325};
int points53[]={625,350,605,350,605,385,600,385,600,435};
int points54[]={235,350,235,355,225,355,225,400};

rectangle(0,0,getmaxx(),getmaxy());


setcolor(7);
//Liberty Stand
// Lower portion
//1
drawpoly(6,points);
//2
setfillstyle(0,7);
fillpoly(12,points2);
//lower portion 2(Inner part)

setlinestyle(0,1,3);
//Inner part 1
drawpoly(2,points3);

//Inner part 2
setfillstyle(4,8);
bar(50,400,60,420);
bar(65,400,75,420);
bar(80,400,90,420);

//Inner part 3
drawpoly(4,points4);

setcolor(3);

//Liberty
setlinestyle(0,1,1);
//saarri
drawpoly(21,points5);
line(101,323,99,375);

//Hand
drawpoly(24,points6);

//Mashaal
//Fire
setcolor(14);
setlinestyle(1,1,3);
setfillstyle(4,12);
fillpoly(9,points7);


setlinestyle(0,1,1);
setcolor(3);
//stand
setfillstyle(11,7);
bar(50,170,75,175);


//Book
drawpoly(5,points8);
drawpoly(4,points9);

//Interior Lines
drawpoly(5,points10);
line(55,307,85,250);
line(94,333,90,375);
line(87,342,80,375);
drawpoly(8,points11);
drawpoly(4,points12);
drawpoly(3,point17);
drawpoly(3,points14);
drawpoly(3,point15);
drawpoly(3,point16);
line(69,235,73,235);



//Building1
setcolor(14);
drawpoly(3,points13);

//Road
setcolor(8);
drawpoly(8,points15);

//Building2
setcolor(13);
drawpoly(11,points16);

//Building2 Upper part
rectangle(130,345,145,350);
rectangle(135,340,140,345);

//Building 3
setcolor(10);
rectangle(160,345,165,350);
rectangle(160,350,170,355);
rectangle(160,355,175,360);
drawpoly(6,points17);

//Building 4 (highest)
setcolor(12);
drawpoly(4,points18);

drawpoly(10,points19);
drawpoly(5,points20);

//Top part
rectangle(190,275,210,280);
drawpoly(3,points25);
line(195,275,195,255);
line(200,275,200,215);

//Mini Building 1
setcolor(15);
drawpoly(10,points21);

//Building 5
setcolor(9);
drawpoly(12,points22);
//Window
drawpoly(9,points23);
//line
drawpoly(3,points24);

//Mini Building2
 setcolor(14);
drawpoly(10,points26);

//Mini Building3
drawpoly(6,points27);

//Mini Building4
setcolor(10);
drawpoly(7,points28);
rectangle(313,375,320,390);

//Building 6
setcolor(5);
drawpoly(12,points29);
line(335,380,335,425);

//Building 7
setcolor(11);
drawpoly(4,points30);
drawpoly(3,points31);

//Building 8
setcolor(11);
drawpoly(4,points32);
drawpoly(4,points33);
line(380,310,380,345);

//Building 9
setcolor(11);
drawpoly(4,points34);
drawpoly(3,points35);

//Mini Building 5
setcolor(15);
drawpoly(16,points36);

//Mini Building 6
setcolor(13);
drawpoly(3,points37);
drawpoly(11,points38);
rectangle(460,425,475,435);
line(460,430,475,430);
line(465,425,465,435);
line(470,425,470,435);

//Building 10
setcolor(14);
drawpoly(4,points39);

//Building 11
setcolor(10);
drawpoly(6,points40);
//Windows
line(413,375,430,375);
line(413,380,430,380);
line(413,385,430,385);
line(413,390,430,390);
line(413,395,430,395);

//Building 12
setcolor(6);
drawpoly(12,points41);

//Building 13
drawpoly(4,points42);
line(430,365,450,365);

//Building 14
setcolor(9);
drawpoly(3,points43);
drawpoly(4,points44);
drawpoly(8,points45);

//Windows
rectangle(501,365,506,370);
rectangle(501,375,506,380);
rectangle(501,385,506,390);
rectangle(501,395,506,400);
rectangle(501,405,506,410);
rectangle(501,415,506,420);
rectangle(511,365,516,370);
rectangle(511,375,516,380);
rectangle(511,385,516,390);
rectangle(511,395,516,400);
rectangle(511,405,516,410);
rectangle(511,415,516,420);

//Building 15
drawpoly(12,points46);

//windows
line(485,360,495,360);
line(485,365,495,365);
line(485,370,495,370);
line(485,375,495,375);
line(485,380,495,380);
line(485,385,495,385);
line(485,390,495,390);
line(485,395,495,395);
line(485,400,495,400);
line(485,405,495,405);
line(485,410,495,410);
line(485,415,495,415);

//Building 16
setcolor(10);
drawpoly(7,points47);

//Windows
line(525,380,525,385);
line(525,390,525,395);
line(525,400,525,405);
line(525,410,525,415);
line(525,420,525,425);
line(530,380,530,385);
line(530,390,530,395);
line(530,400,530,405);
line(530,410,530,415);
line(530,420,530,425);
line(535,380,535,385);
line(535,390,535,395);
line(535,400,535,405);
line(535,410,535,415);
line(535,420,535,425);
line(540,380,540,385);
line(540,390,540,395);
line(540,400,540,405);
line(540,410,540,415);
line(540,420,540,425);

//Building 17
setcolor(6);
drawpoly(7,points48);
line(537,340,537,345);
line(537,350,537,355);
line(537,360,537,365);

//Building 18
drawpoly(4,points49);
//lines
line(545,320,545,360);
line(550,320,550,365);
line(555,320,555,365);
line(560,320,560,365);
line(565,320,565,365);
line(570,320,570,365);

//Building 19
setcolor(9);
drawpoly(10,points50);
//lines
line(578,380,578,385);
line(578,390,578,395);
//rectangle
rectangle(560,410,600,435);
//lines
line(565,415,595,415);
line(565,420,595,420);
line(565,425,595,425);
line(565,430,595,430);

//Building 20
drawpoly(3,points51);
drawpoly(3,points52);
//lines
line(582,330,600,330);
line(575,350,600,350);
line(595,330,595,340);
line(585,340,585,350);
line(595,350,595,360);
line(590,365,590,375);

//Building 21
setcolor(12);
drawpoly(5,points53);
//Windows
rectangle(610,360,615,375);
rectangle(620,360,625,375);
rectangle(610,385,615,400);
rectangle(620,385,625,400);

//Buildings(WINDOWS)
//Building1
setcolor(14);
line(105,360,120,360);
line(105,365,120,365);
line(105,370,120,370);
line(105,375,120,375);
line(105,380,120,380);
line(105,385,120,385);
line(105,390,120,390);
line(105,395,120,395);
line(105,400,120,400);

//Building 2
setcolor(13);
rectangle(130,360,145,365);
rectangle(130,370,145,375);
rectangle(130,380,145,385);

//Building 3
setcolor(11);
rectangle(159,365,164,370);
rectangle(159,375,164,380);
rectangle(159,385,164,390);
rectangle(169,365,174,370);
rectangle(169,375,174,380);
rectangle(169,385,174,390);

//Building 4
line(180,400,180,405);
line(185,400,185,405);

//Mini Building 5
setcolor(15);
line(185,415,190,415);
line(185,420,190,420);
line(185,425,190,425);
line(195,420,195,430);
line(200,410,200,420);
line(205,410,205,420);
line(210,400,210,410);
line(210,420,215,420);
line(210,425,215,425);
line(210,430,215,430);
line(225,405,225,410);
line(225,415,225,420);
line(225,425,225,430);
line(235,405,235,410);
line(235,415,235,420);
line(235,425,235,430);

//Near Highest Building Part
setcolor(9);
drawpoly(4,points54);

//Mini Building 11
setcolor(14);
line(265,415,270,415);
line(275,415,280,415);
line(285,415,290,415);
line(295,415,300,415);
line(280,410,285,410);
line(285,420,290,420);
line(295,420,300,420);

//Building 7
setcolor(13);
rectangle(345,380,350,385);
rectangle(345,390,350,395);
rectangle(345,400,350,405);
rectangle(345,410,350,415);

//Building 8
setcolor(3);
rectangle(345,350,355,355);
rectangle(345,360,355,365);

//Building 9
rectangle(364,320,368,330);
rectangle(364,335,368,340);
rectangle(364,345,368,355);
rectangle(364,360,368,375);

//Building 10
rectangle(375,355,380,365);
rectangle(375,370,380,375);
rectangle(375,370,380,375);
rectangle(375,390,380,400);

//Mini Building 11
setcolor(15);
line(380,425,385,425);
line(380,420,385,420);
line(385,415,390,415);
line(390,410,395,410);
line(395,405,400,405);
line(400,410,405,410);
line(405,415,410,415);

//Building 12
setcolor(6);
rectangle(440,380,470,390);
rectangle(440,395,470,400);
rectangle(440,405,470,415);

//Building 13
setcolor(14);
rectangle(410,340,435,345);
rectangle(410,350,435,355);


}
//-------------------------------------------------------------------

//Crackers Bla$t
void crackers(int x,int y,int &i,int c)
{
setcolor(c);
setlinestyle(0,0,1);
circle(x,y,i);
circle(x,y,i+1);
}
// Birthday Wish
void bw(int c,int &y)
{

//Bday Wish
int u1[]={550,200-y,563,175-y,575,200-y,550,200-y};
int l1[]={540,315-y,550,300-y,575,300-y,585,315-y,540,315-y};
int u2[]={225,200-y,238,175-y,250,200-y,225,200-y};
int l2[]={215,315-y,225,300-y,250,300-y,260,315-y,215,315-y};
setfillstyle(11,7);
bar(250,200-y,550,300-y);

setfillstyle(1,3);
//Rockets
bar(225,200-y,250,300-y);
bar(550,200-y,575,300-y);

setcolor(4);
setfillstyle(1,4);
fillpoly(4,u1);
fillpoly(5,l1);
fillpoly(4,u2);
fillpoly(5,l2);

// Rocket Combustion
setcolor(14);
setlinestyle(1,1,3);
//Rocket 1
line(215,315-y,215,340-y);
line(220,315-y,220,340-y);
line(225,315-y,225,340-y);
line(230,315-y,230,340-y);
line(235,315-y,235,340-y);
line(240,315-y,240,340-y);
line(245,315-y,245,340-y);
line(250,315-y,250,340-y);
line(255,315-y,255,340-y);
line(260,315-y,260,340-y);

//Rocket 2
line(540,315-y,540,340-y);
line(545,315-y,545,340-y);
line(550,315-y,550,340-y);
line(555,315-y,555,340-y);
line(560,315-y,560,340-y);
line(565,315-y,565,340-y);
line(570,315-y,570,340-y);
line(575,315-y,575,340-y);
line(580,315-y,580,340-y);
line(585,315-y,585,340-y);




//Text
settextstyle(4,0,5);
setcolor(c);
outtextxy(265,200-y,"Happy Birthday");
outtextxy(350,250-y,"******");

if(u1[3]-y>=50)
y=y+10;

}

//-----------------------------------------------------------------

//Rockets
void cm(int x1,int x2,int y1,int y2,int &i,int &j,int c)
{ setcolor(c);
setlinestyle(1,0,3);
line(x1-i,y1-j,x2-i,y2-j);

}




void main()
{
//loading var
int p=10;
int z1[4]={12,11,2,14};
int zi=0,zj=0,zk=0;

char ch;
randomize();
int cy=-250;

int color1[6]={2,3,4,6,7,14};
int color2[8]={1,6,9,10,11,12,13,14};
int color[6]={1,9,10,11,12,13};
int c;
int cr1=random(6);
int cr2=random(6);
int cr3=random(6);
int cr4=random(6);
int cb1=random(8);
int cb2=random(8);
int cb3=random(8);
int cb4=random(8);

c=random(6);



int i1=0;
int i2=0;
int i3=0;
int i4=0;
int j1=0;
int j2=0;
int j3=0;
int j4=0;
int n1=1;
int n2=3;
int n3=3;
int n4=3;
int s1=1000;
int s2=1000;
int s3=1000;
int s4=1000;
int d1=1000;
int d2=1000;
int d3=1000;
int d4=1000;
int k1=0;
int k2=0;
int k3=0;
int k4=0;
int count1=0;
int count2=0;
int count3=0;
int count4=0;
int pass1=0;
int pass2=0;
int pass3=0;
int pass4=0;
//way of crackers

//1
int a1[4]={275,325,150,200};
int a2[4]={300,350,150,200};
int b1[4]={250,275,275,175};
int b2[4]={275,300,300,200};

//2
int a3[4]={250,275,350,275};
int a4[4]={250,275,350,250};
int b3[4]={300,325,275,300};
int b4[4]={325,350,300,325};

//3
int a5[4]={250,450,475,575};
int a6[4]={225,450,475,600};
int b5[4]={250,300,300,275};
int b6[4]={275,325,325,300};

//4
int a7[4]={325,550,500,600};
int a8[4]={300,550,475,600};
int b7[4]={275,275,275,275};
int b8[4]={300,300,300,300};

//Crackers position

//1
int x1[4]={75,150,150,200};
int y1[4]={50,100,150,50};

//2
int x2[4]={250,275,350,350};
int y2[4]={100,200,25,250};

//3
int x3[4]={450,450,475,500};
int y3[4]={50,250,150,200};

//4
int x4[4]={550,550,575,600};
int y4[4]={50,150,200,150};
load();
while(1)
{
loading(zi,z1,zj,p,zk);
delay(1000);
zi=zi+40;
zk++;
clearviewport();
while(kbhit())
{ch=getch();
}
if(ch=='x')
exit(0);
if(zk==11)
break;
}

while(1)
{
buildings();
bw(color[c],cy);
c=random(6);
rectangle(0,0,getmaxx(),getmaxy());

if(j1==0)
n1=random(4);

if(j2==0)
n2=random(4);

if(j3==0)
n3=random(4);

if(j4==0)
n4=random(4);


//crakers way
cm(a1[n1],a2[n1],b1[n1],b2[n1],i1,j1,color1[cr1]);
cm(a3[n2],a4[n2],b3[n2],b4[n2],i2,j2,color1[cr2]);
cm(a5[n3],a6[n3],b5[n3],b6[n3],i3,j3,color1[cr3]);
cm(a7[n4],a8[n4],b7[n4],b8[n4],i4,j4,color1[cr4]);

//Crackers
crackers(s1,d1,k1,color2[cb1]);
crackers(s2,d2,k2,color2[cb2]);
crackers(s3,d3,k3,color2[cb3]);
crackers(s4,d4,k4,color2[cb4]);

if(a5[n3]>=x3[n3])
pass3=1;
else
pass3=0;

if(a7[n4]>=x4[n4])
pass4=1;
else
pass4=0;

if(a3[n2]>=x2[n2])
pass2=1;
else
pass2=0;

//1
if(a1[n1]-i1>x1[n1] || b1[n1]-j1>y1[n1])
{i1=i1+15;
 j1=j1+15;
 if(a1[n1]==a2[n1])
 i1=0;
 k1=0;
}
else if(a1[n1]-i1<=x1[n1] && b1[n1]-j1<=y1[n1] && count1==0)
{
s1=a1[n1]-i1;
d1=b1[n1]-j1;
j1=1000;
count1=1;

}



//2
if(a3[n2]-i2>x2[n2] || b3[n2]-j2>y2[n2] && pass2==1)
{i2=i2+20;
 j2=j2+20;
 if(a3[n2]==a4[n2])
 i2=0;
 k2=0;
}
else if(a3[n2]-i2<x2[n2] && b3[n2]-j2>y2[n2])
{i2=i2-20;
 j2=j2+20;
 if(a3[n2]==a4[n2])
 i2=0;
 k2=0;
}

else if(a3[n2]-i2<=x2[n2] && b3[n2]-j2<=y2[n2] && count2==0)
{
s2=a3[n2]-i2;
d2=b3[n2]-j2;
j2=1000;
count2=1;

}


//3
if(a5[n3]-i3>x3[n3] || b5[n3]-j3>y3[n3] && pass3==1)
{i3=i3+15;
 j3=j3+15;
 if(a5[n3]==a6[n3])
 i3=0;
 k3=0;
}
else if(a5[n3]-i3<x3[n3] && b5[n3]-j3>y3[n3])
{i3=i3-15;
 j3=j3+15;
 if(a5[n3]==a6[n3])
 i3=0;
 k3=0;
}

else if(a5[n3]-i3<=x3[n3] && b5[n3]-j3<=y3[n3] && count3==0)
{
s3=a5[n3]-i3;
d3=b5[n3]-j3;
j3=1000;
count3=1;
}


//4

if(a7[n4]-i4>x4[n4] ||  b7[n4]-j4>y4[n4] && pass4==1)
{i4=i4+10;
 j4=j4+10;
 if(a7[n4]==a8[n4])
 i4=0;
 k4=0;
}
else if(a7[n4]-i4<x4[n4] && b7[n4]-j4>y4[n4])
{i4=i4-10;
j4=j4+10;
if(a7[n4]==a8[n4])
i4=0;
k4=0;
}
else if(a7[n4]-i4<=x4[n4] && b7[n4]-j4<=y4[n4] && count4==0)
{
s4=a7[n4]-i4;
d4=b7[n4]-j4;
j4=1000;
count4=1;

}



if(k1==15)
{k1=0;
j1=0;
s1=1000;
d1=1000;
count1=0;
cr1=random(6);
cb1=random(8);


}
else
k1=k1+3;


if(k2==15)
{k2=0;
j2=0;
count2=0;
s2=1000;
d2=1000;
cr2=random(6);
cb2=random(8);

}
else
k2=k2+3;


if(k3==15)
{k3=0;
j3=0;
count3=0;
s3=1000;
d3=1000;
cr3=random(6);
cb3=random(8);

}
else
k3=k3+3;

if(k4==15)
{k4=0;
j4=0;
count4=0;
s4=1000;
d4=1000;
cr4=random(6);
cb4=random(8);

}
else
k4=k4+3;



delay(100);
clearviewport();



while(kbhit())
{
ch=getch();

if(ch=='x')
exit(0);
}


}


getch();
}
