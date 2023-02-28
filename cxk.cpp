//程序名:篮球
//作者: xf-L
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	 int ml;
	 cin>>ml;
	 if(ml==114514)
	 {
	 p.show();
	 p.oo(50);   //头
     p.rt(120);
	 p.up();
	 p.fd(50);
	 p.down();
	 p.fd(100);    //身体、手、篮球
	 p.rt(30);
	 p.fd(100);
	 p.rt(140);
	 p.fd(90);
	 p.lt(110);
	 p.fd(100);
	 p.rt(90);
     p.fd(140);
	 p.rt(95);
	 p.fd(100);
	 p.rt(180);
	 p.fd(80);
	 p.rt(40);
	 p.fd(130);
	 p.up();
	 p.fd(50);
     p.down();
	 p.o(50);
	 p.up();       
	 p.lt(180);
	 p.lt(20);
	 p.fd(50);
	 p.rt(15);
	 p.down();
	 p.fd(120);
	 p.lt(35);
	 p.fd(110);
	 p.rt(40);
	 p.fd(65);           //-----------------------
	 p.rt(140);
	 p.up();
	 p.fd(186);          //腿
	 p.rt(90);
	 p.fd(12);
	 p.down();
	 p.lt(92);
	 p.fd(50);
	 p.angle(160);
	 p.fd(50);
	 p.angle(180);
	 p.fd(40);
	 p.angle(150);
	 p.fd(5);
	 p.angle(180);
	 p.fd(50);
	 p.angle(176);
	 p.fd(120);
	 p.angle(180);
	 p.fd(50);
	 p.angle(90);
	 p.up();
	 p.fd(45);
	 p.hide();
	 p.angle(180);
	 p.down();
	 int bian = 70;
	 for(int a = 0;a < bian;a++)
	 {	
         p.fd(1);
	     p.rt(180.00/bian);
	 }
	 p.up();
	 p.angle(90);
	 p.fd(45);
	 p.down();
	 p.angle(-10);
	 p.fd(70);
	 p.lt(86);
	 p.fd(33);
	 p.angle(80);
	 p.fd(33);
	 p.angle(-5);
	 p.fd(120);
	 p.rt(10);
	 p.fd(50);
	 p.angle(0);
	 p.fd(80);
	 p.angle(180);
	 p.fd(10);
	 p.lt(20);
	 p.fd(160);
	 p.rt(70);
	 p.fd(30);
	 p.lt(40);
	 p.fd(60);
	 p.angle(140);
	 p.fd(45);
	 p.angle(90);
	 p.fd(35);
	 p.angle(-45);
	 p.fd(35);
	 p.angle(0);
	 p.fd(10);
	 p.angle(-90);
	 p.fd(37);
	 p.angle(90);
	 p.fd(37);
	 p.angle(55);
	 p.fd(45);
	 p.angle(-2);
	 p.fd(260);
	 p.up();
	 p.angle(51);
	 p.fd(100);
	 p.down();
	 p.angle(25);    //------------------
     p.fd(35);       //手掌
	 p.lt(15);
	 p.fd(40);
	 p.angle(-90);
	 p.fd(45);
	 p.angle(186);
	 p.fd(15);        //-----------------
	 p.angle(100);    //美化细节
	 p.fd(43);
	 p.up();
	 p.show();
	 p.angle(-47);
	 p.fd(210);
	 p.angle(-125);
	 p.fd(25);
	 p.angle(-90);
	 p.fd(-5);
	 p.down();
	 p.o(40);
	 p.angle(-90);
	 p.fd(45);
	 p.o(40);
	 p.angle(90);
	 p.fd(15);
	 p.angle(180);
	 p.c(0);
	 p.size(10);
	 p.hide();
	 p.up();
	 p.fd(67);
	 p.down();
	 p.fd(175);
	 p.up();
	 p.angle(90);
	 p.fd(60);
	 p.lt(90);
	 p.down();
	 p.fd(187);      //----------------------
	 cout<<"ikun";
	 }
	 else
	 {
		 p.angle(45);
		 p.up();
		 p.bk(250);
		 p.down();
		 p.fd(500);
		 p.angle(180);
		 p.up();
		 p.fd(355);
		 p.down();
		 p.angle(-45);
		 p.fd(500);
	     cout<<"密码错误"; 
	 }
	 return 0;
}