#include "iGraphics.h"
#include <string.h>
#include<shellapi.h>
int ball_x=450, ball_y=62;
int dx, dy;
int barX=350,barY=10,barX2=0,barY2=600;
bool isGameOn;
int by,menu_y,count,about_x,chance_count;
char scor[20];
char *music="song.mp3";
bool brick11 ,brick12 ,brick13 ,brick14 ,brick15 ,brick16 ,brick17 ,brick18,brick19;
bool brick21 ,brick22 ,brick23 ,brick24 ,brick25 ,brick26 ,brick27 ,brick28,brick29;
bool brick31 ,brick32 ,brick33 ,brick34 ,brick35 ,brick36 ,brick37 ,brick38,brick39 ;
bool brick41 ,brick42 ,brick43 ,brick44 ,brick45 ,brick46 ,brick47 ,brick48,brick49 ;
bool brick51 ,brick52 ,brick53 ,brick54 ,brick55 ,brick56 ,brick57 ,brick58,brick59;
bool brick61 ,brick62 ,brick63 ,brick64 ,brick65 ,brick66 ,brick67 ,brick68,brick69 ;
bool menu,about,chance,chance_warn;

/*
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
    iClear();
    iShowBMP(0,0, "background1.bmp");
    iFilledCircle(ball_x,ball_y,10);
    iShowBMP(barX,barY+22, "bar.bmp");
    if(brick11)
        iShowBMP(0,670, "1.bmp");
    if(brick12)
        iShowBMP(100,670, "1.bmp");
    if(brick13)
        iShowBMP(200,670, "1.bmp");
    if(brick14)
        iShowBMP(300,670, "1.bmp");
    if(brick15)
        iShowBMP(400,670, "1.bmp");
    if(brick16)
        iShowBMP(500,670, "1.bmp");
    if(brick17)
        iShowBMP(600,670, "1.bmp");
    if(brick18)
        iShowBMP(700,670, "1.bmp");
    if(brick19)
        iShowBMP(800,670, "1.bmp");
    if(brick21)
        iShowBMP(0,640, "1.bmp");
    if(brick22)
        iShowBMP(100,640, "1.bmp");
    if(brick23)
        iShowBMP(200,640, "1.bmp");
    if(brick24)
        iShowBMP(300,640, "1.bmp");
    if(brick25)
        iShowBMP(400,640, "1.bmp");
    if(brick26)
        iShowBMP(500,640, "1.bmp");
    if(brick27)
        iShowBMP(600,640, "1.bmp");
    if(brick28)
        iShowBMP(700,640, "1.bmp");
    if(brick29)
        iShowBMP(800,640, "1.bmp");
    if(brick31)
        iShowBMP(0,610, "2.bmp");
    if(brick32)
        iShowBMP(100,610, "2.bmp");
    if(brick33)
        iShowBMP(200,610, "2.bmp");
    if(brick34)
        iShowBMP(300,610, "2.bmp");
    if(brick35)
        iShowBMP(400,610, "2.bmp");
    if(brick36)
        iShowBMP(500,610, "2.bmp");
    if(brick37)
        iShowBMP(600,610, "2.bmp");
    if(brick38)
        iShowBMP(700,610, "2.bmp");
    if(brick39)
        iShowBMP(800,610, "2.bmp");
    if(brick41)
        iShowBMP(0,580, "2.bmp");
    if(brick42)
        iShowBMP(100,580, "2.bmp");
    if(brick43)
        iShowBMP(200,580, "2.bmp");
    if(brick44)
        iShowBMP(300,580, "2.bmp");
    if(brick45)
        iShowBMP(400,580, "2.bmp");
    if(brick46)
        iShowBMP(500,580, "2.bmp");
    if(brick47)
        iShowBMP(600,580, "2.bmp");
    if(brick48)
        iShowBMP(700,580, "2.bmp");
    if(brick49)
        iShowBMP(800,580, "2.bmp");
    if(brick51)
        iShowBMP(0,550, "1.bmp");
    if(brick52)
        iShowBMP(100,550, "1.bmp");
    if(brick53)
        iShowBMP(200,550, "1.bmp");
    if(brick54)
        iShowBMP(300,550, "1.bmp");
    if(brick55)
        iShowBMP(400,550, "1.bmp");
    if(brick56)
        iShowBMP(500,550, "1.bmp");
    if(brick57)
        iShowBMP(600,550, "1.bmp");
    if(brick58)
        iShowBMP(700,550, "1.bmp");
    if(brick59)
        iShowBMP(800,550, "1.bmp");
    if(brick61)
        iShowBMP(0,520, "1.bmp");
    if(brick62)
        iShowBMP(100,520, "1.bmp");
    if(brick63)
        iShowBMP(200,520, "1.bmp");
    if(brick64)
        iShowBMP(300,520, "1.bmp");
    if(brick65)
        iShowBMP(400,520, "1.bmp");
    if(brick66)
        iShowBMP(500,520, "1.bmp");
    if(brick67)
        iShowBMP(600,520, "1.bmp");
    if(brick68)
        iShowBMP(700,520, "1.bmp");
    if(brick69)
        iShowBMP(800,520, "1.bmp");

    if(chance)
        if(ball_y<45)
        {
            chance_warn=true;
            chance=false;
            chance_count++;
            barX=350;
            barY=10;
            ball_x=450;
            ball_y=62;
            iPauseTimer(0);
        }


    if(chance_count==0 && chance_warn==true)
    {
        iShowBMP(150,250, "chance1.bmp");
        iShowBMP(410,3, "chance.bmp");
    }

    if(chance_count==1 && chance_warn==true)
    {
        iShowBMP(150,250, "chance2.bmp");
    }

    if(chance_count==2 && chance_warn==true)
    {
        iShowBMP(150,250, "chance3.bmp");
    }

    if(chance_count==0)
        iShowBMP(305,3, "chance.bmp");
    if(chance_count==1 || chance_count==0)
        iShowBMP(200,3, "chance.bmp");

    if(chance_count==3)
        isGameOn = false;

    if(isGameOn==false)
    {
        iShowBMP(0,0 ,"gameover.bmp");
		iSetColor(255,255,255 );
        iText(800,660, scor);

    }

    iSetColor(252,1 ,45 );
    iText(820,10, scor);

    if(menu==false)
        if(menu_y<700)
            menu_y=menu_y+100;
    iShowBMP(0,menu_y, "menu.bmp");

	if(about)
	{
		about_x=about_x-100;
		if(about_x<0)
			about_x=0;
	}
	if(about==false)
	{
		if(about_x<900)about_x=about_x+100;
	}
	iShowBMP(about_x,0, "about.bmp");

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
    //place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        if( (my>520)&&(my<650)&&(mx>770)&&(mx<900))
        {
            menu=false;
        }

        
        if(menu)
        {
            if( (my>180)&&(my<310)&&(mx>770)&&(mx<900))
                exit(0);
        }
        if(menu)
        {

            if((my>350)&&(my<450)&&(mx>770)&&(mx<900))
                about=true;
            if((my>660)&&(my<700)&&(mx>0)&&(mx<70))
                about=false;
        }

        if(menu_y>695)
        {
            iResumeTimer(0);
            chance=true;
            chance_warn=false;
        }

        //place your codes here
    }
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
    }
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
    if(key == 'q')
    {
        iPauseTimer(0);
        //do something with 'q'
    }
    if(key == 'r')
    {
        iResumeTimer(0);
    }
    //place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

    if(key == GLUT_KEY_END)
    {
        exit(0);
    }
    else if(key == GLUT_KEY_LEFT)
    {
        if(isGameOn)
        {
            barX-=100;
            if(barX<0)
                barX = 0;
        }
    }
    else if(key == GLUT_KEY_RIGHT)
    {
        if(isGameOn)
        {
            barX += 100;
            if(barX>700)
                barX = 700;
        }
    }
    //place your codes for other keys here
}
void ballChange()
{
    if(isGameOn)
    {
        ball_x += dx;
        ball_y += dy;

        if(ball_x>881 || ball_x<19)
            dx = -dx;
        if(ball_y > 680 )
            dy = -dy;

        if(brick11)
            if((ball_y>670)&&(ball_x>=0)&&(ball_x<=0+100))
            {
                dy=-dy;
                brick11=false;
                count=count+50;
            }
        if(brick12)
            if((ball_y>670)&&(ball_x>=100)&&(ball_x<=100+100))
            {
                dy=-dy;
                brick12=false;
                count=count+50;
            }
        if(brick13)
            if((ball_y>670)&&(ball_x>=200)&&(ball_x<=200+100))
            {
                dy=-dy;

                brick13=false;
                count=count+50;
            }
        if(brick14)
            if((ball_y>670)&&(ball_x>=300)&&(ball_x<=300+100))
            {
                dy=-dy;
                brick14=false;
                count=count+50;
            }
        if(brick15)
            if((ball_y>670)&&(ball_x>=400)&&(ball_x<=400+100))
            {
                dy=-dy;
                brick15=false;
                count=count+50;
            }
        if(brick16)
            if((ball_y>670)&&(ball_x>=500)&&(ball_x<=500+100))
            {
                dy=-dy;
                brick16=false;
                count=count+50;
            }
        if(brick17)
            if((ball_y>670)&&(ball_x>=600)&&(ball_x<=600+100))
            {
                dy=-dy;
                brick17=false;
                count=count+50;
            }
        if(brick18)
            if((ball_y>670)&&(ball_x>=700)&&(ball_x<=700+100))
            {
                dy=-dy;
                brick18=false;
                count=count+50;
            }
        if(brick19)
            if((ball_y>670)&&(ball_x>=800)&&(ball_x<=800+100))
            {
                dy=-dy;
                brick19=false;
                count=count+50;
            }
        if(brick21)
            if((ball_y>640)&&(ball_x>=0)&&(ball_x<=0+100))
            {
                dy=-dy;
                brick21=false;
                count=count+50;
            }
        if(brick22)
            if((ball_y>640)&&(ball_x>=100)&&(ball_x<=100+100))
            {
                dy=-dy;
                brick22=false;
                count=count+50;
            }
        if(brick23)
            if((ball_y>640)&&(ball_x>=200)&&(ball_x<=200+100))
            {
                dy=-dy;
                brick23=false;
                count=count+50;
            }
        if(brick24)
            if((ball_y>640)&&(ball_x>=300)&&(ball_x<=300+100))
            {
                dy=-dy;
                brick24=false;
                count=count+50;
            }
        if(brick25)
            if((ball_y>640)&&(ball_x>=400)&&(ball_x<400+100))
            {
                dy=-dy;
                brick25=false;
                count=count+50;
            }
        if(brick26)
            if((ball_y>640)&&(ball_x>=500)&&(ball_x<=500+100))
            {
                dy=-dy;
                brick26=false;
                count=count+50;
            }
        if(brick27)
            if((ball_y>640)&&(ball_x>=600)&&(ball_x<=600+100))
            {
                dy=-dy;
                brick27=false;
                count=count+50;
            }
        if(brick28)
            if((ball_y>640)&&(ball_x>=700)&&(ball_x<=700+100))
            {
                dy=-dy;
                brick28=false;
                count=count+50;
            }
        if(brick29)
            if((ball_y>640)&&(ball_x>=800)&&(ball_x<=800+100))
            {
                dy=-dy;
                brick29=false;
                count=count+50;
            }
        if(brick31)
            if((ball_y>610)&&(ball_x>=0)&&(ball_x<=0+100))
            {
                dy=-dy;
                brick31=false;
                count=count+100;
            }
        if(brick32)
            if((ball_y>610)&&(ball_x>=100)&&(ball_x<=100+100))
            {
                dy=-dy;
                brick32=false;
                count=count+100;
            }
        if(brick33)
            if((ball_y>610)&&(ball_x>=200)&&(ball_x<=200+100))
            {
                dy=-dy;
                brick33=false;
                count=count+100;
            }
        if(brick34)
            if((ball_y>610)&&(ball_x>=300)&&(ball_x<=300+100))
            {
                dy=-dy;
                brick34=false;
                count=count+100;
            }
        if(brick35)
            if((ball_y>610)&&(ball_x>=400)&&(ball_x<=400+100))
            {
                dy=-dy;
                brick35=false;
                count=count+100;
            }
        if(brick36)
            if((ball_y>610)&&(ball_x>=500)&&(ball_x<=500+100))
            {
                dy=-dy;
                brick36=false;
                count=count+100;
            }
        if(brick37)
            if((ball_y>610)&&(ball_x>=600)&&(ball_x<=600+100))
            {
                dy=-dy;
                brick37=false;
                count=count+100;
            }
        if(brick38)
            if((ball_y>610)&&(ball_x>=700)&&(ball_x<=700+100))
            {
                dy=-dy;
                brick38=false;
                count=count+100;
            }
        if(brick39)
            if((ball_y>610)&&(ball_x>=800)&&(ball_x<=800+100))
            {
                dy=-dy;
                brick39=false;
                count=count+100;
            }
        if(brick41)
            if((ball_y>580)&&(ball_x>=0)&&(ball_x<=0+100))
            {
                dy=-dy;
                brick41=false;
                count=count+100;
            }
        if(brick42)
            if((ball_y>580)&&(ball_x>=100)&&(ball_x<=100+100))
            {
                dy=-dy;
                brick42=false;
                count=count+100;
            }
        if(brick43)
            if((ball_y>580)&&(ball_x>=200)&&(ball_x<=200+100))
            {
                dy=-dy;
                brick43=false;
                count=count+100;
            }
        if(brick44)
            if((ball_y>580)&&(ball_x>=300)&&(ball_x<=300+100))
            {
                dy=-dy;
                brick44=false;
                count=count+100;
            }
        if(brick45)
            if((ball_y>580)&&(ball_x>=400)&&(ball_x<=400+100))
            {
                dy=-dy;
                brick45=false;
                count=count+100;
            }
        if(brick46)
            if((ball_y>580)&&(ball_x>=500)&&(ball_x<=500+100))
            {
                dy=-dy;
                brick46=false;
                count=count+100;
            }
        if(brick47)
            if((ball_y>580)&&(ball_x>=600)&&(ball_x<=600+100))
            {
                dy=-dy;
                brick47=false;
                count=count+100;
            }
        if(brick48)
            if((ball_y>580)&&(ball_x>=700)&&(ball_x<=700+100))
            {
                dy=-dy;
                brick48=false;
                count=count+100;
            }
        if(brick49)
            if((ball_y>580)&&(ball_x>=800)&&(ball_x<=800+100))
            {
                dy=-dy;
                brick49=false;
                count=count+100;
            }
        if(brick51)
            if((ball_y>550)&&(ball_x>=0)&&(ball_x<=0+100))
            {
                dy=-dy;
                brick51=false;
                count=count+50;
            }
        if(brick52)
            if((ball_y>550)&&(ball_x>=100)&&(ball_x<=100+100))
            {
                dy=-dy;
                brick52=false;
                count=count+50;
            }
        if(brick53)
            if((ball_y>550)&&(ball_x>=200)&&(ball_x<=200+100))
            {
                dy=-dy;
                brick53=false;
                count=count+50;
            }
        if(brick54)
            if((ball_y>550)&&(ball_x>=300)&&(ball_x<=300+100))
            {
                dy=-dy;
                brick54=false;
                count=count+50;
            }
        if(brick55)
            if((ball_y>550)&&(ball_x>=400)&&(ball_x<=400+100))
            {
                dy=-dy;
                brick55=false;
                count=count+50;
            }
        if(brick56)
            if((ball_y>550)&&(ball_x>=500)&&(ball_x<=500+100))
            {
                dy=-dy;
                brick56=false;
                count=count+50;
            }
        if(brick57)
            if((ball_y>550)&&(ball_x>=600)&&(ball_x<=600+100))
            {
                dy=-dy;
                brick57=false;
                count=count+50;
            }
        if(brick58)if
            ((ball_y>550)&&(ball_x>=700)&&(ball_x<=700+100))
            {
                dy=-dy;
                brick58=false;
                count=count+50;
            }
        if(brick59)
            if((ball_y>550)&&(ball_x>=800)&&(ball_x<=800+100))
            {
                dy=-dy;
                brick59=false;
                count=count+50;
            }
        if(brick61)
            if((ball_y>520)&&(ball_x>=0)&&(ball_x<=0+100))
            {
                dy=-dy;
                brick61=false;
                count=count+50;
            }
        if(brick62)
            if((ball_y>520)&&(ball_x>=100)&&(ball_x<=100+100))
            {
                dy=-dy;
                brick62=false;
                count=count+50;
            }
        if(brick63)
            if((ball_y>520)&&(ball_x>=200)&&(ball_x<=200+100))
            {
                dy=-dy;
                brick63=false;
                count=count+50;
            }
        if(brick64)
            if((ball_y>520)&&(ball_x>=300)&&(ball_x<=300+100))
            {
                dy=-dy;
                brick64=false;
                count=count+50;
            }
        if(brick65)
            if((ball_y>520)&&(ball_x>=400)&&(ball_x<=400+100))
            {
                dy=-dy;
                brick65=false;
                count=count+50;
            }
        if(brick66)
            if((ball_y>520)&&(ball_x>=500)&&(ball_x<=500+100))
            {
                dy=-dy;
                brick66=false;
                count=count+50;
            }
        if(brick67)
            if((ball_y>520)&&(ball_x>=600)&&(ball_x<=600+100))
            {
                dy=-dy;
                brick67=false;
                count=count+50;
            }
        if(brick68)
            if((ball_y>520)&&(ball_x>=700)&&(ball_x<=700+100))
            {
                dy=-dy;
                brick68=false;
                count=count+50;
            }
        if(brick69)
            if((ball_y>520)&&(ball_x>=800)&&(ball_x<=800+100))
            {
                dy=-dy;
                brick69=false;
                count=count+50;
            }

        if((ball_y <70) && (ball_x >= barX) && (ball_x <= barX+200))
        {
            dy=-dy;
        }
	if(	brick11==false && brick12==false && brick13==false && brick14==false && brick15==false && brick16==false && brick17==false && brick18==false && brick19==false
		&& brick21==false && brick22==false && brick23==false && brick24==false && brick25==false && brick26==false && brick27==false && brick28==false && brick29==false
		&& brick31==false && brick32==false && brick33==false && brick34==false && brick35==false && brick36==false && brick37==false && brick38==false && brick39==false
		&& brick41==false && brick42==false && brick43==false && brick44==false && brick45==false && brick46==false && brick47==false && brick48==false && brick49==false
		&& brick51==false && brick52==false && brick53==false && brick54==false && brick55==false && brick56==false && brick57==false && brick58==false && brick59==false
		&& brick61==false && brick62==false && brick63==false && brick64==false && brick65==false && brick66==false && brick67==false && brick68==false && brick69==false)
	{
		isGameOn=false;
	}

        _itoa_s(count,scor,10);
    }
}

int main()
{
    iSetTimer(1, ballChange);
    iPauseTimer(0);
    dx = 20;
    dy = 21;
    by=700;
    menu_y=0;
    count=0;
    about_x=900;
    chance_count=0;
    chance_warn=0;
	chance_warn=true;
    menu=true;
    chance=true;
    isGameOn = true;
    brick11=true;
    brick12=true;
    brick13=true;
    brick14=true;
    brick15=true;
    brick16=true;
    brick17=true;
    brick18=true;
    brick19=true;
    brick21=true;
    brick22=true;
    brick23=true;
    brick24=true;
    brick25=true;
    brick26=true;
    brick27=true;
    brick28=true;
    brick29=true;
    brick31=true;
    brick32=true;
    brick33=true;
    brick34=true;
    brick35=true;
    brick36=true;
    brick37=true;
    brick38=true;
    brick39=true;
    brick41=true;
    brick42=true;
    brick43=true;
    brick44=true;
    brick45=true;
    brick46=true;
    brick47=true;
    brick48=true;
    brick49=true;
    brick51=true;
    brick52=true;
    brick53=true;
    brick54=true;
    brick55=true;
    brick56=true;
    brick57=true;
    brick58=true;
    brick59=true;
    brick61=true;
    brick62=true;
    brick63=true;
    brick64=true;
    brick65=true;
    brick66=true;
    brick67=true;
    brick68=true;
    brick69=true;
	ShellExecute(NULL,"open",music,0,0,0);
    iInitialize(900, 700, "DX-BALL");
    return 0;
}
