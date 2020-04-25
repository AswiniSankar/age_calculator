//program to calculate age

#include<stdio.h>
int isleapyear(int,int);
int main()
{
  printf("\n************WELCOME TO AGE CALCULATOR***********\n");
 int cd,cm,cy,flag=0,bd,bm,by,nd,nm,ny,month[]={31,28,31,30,31,30,31,31,30,31,30,31};
 printf("enter the current date\n");
 scanf("%d%d%d",&cd,&cm,&cy);
 if(cd<1 || cd>31 ||cm<1 ||cm>12)
  {printf("INVALID DATE!! PLEASE ENTER VALID DATE");
   main();
  }
 printf("enter your birth date\n");
 scanf("%d%d%d",&bd,&bm,&by);
 if(bd<1 || bd>31 ||bm<1 ||bm>12)
  {printf("INVALID DATE!! PLEASE ENTER VALID DATE");
    main();
  }
 printf("current date:%d/%d/%d\nbirth   date:%d/%d/%d\n",cd,cm,cy,bd,bm,by);
 if(bd>cd)
 {cd=cd+month[bm-1];
  cm=cm-1;
 }
 if(isleapyear(cy,cm))
  {//printf("it is leap year\n");
   cd=cd+1;
  }
 //else
 //{ printf("it is not a leap year\n");
 //}
 if(bm>cm)
 {cm=cm+12;
  cy=cy-1;
 }
 
 nd=cd-bd;
 nm=cm-bm;
 ny=cy-by;
 printf("\n       *******YOUR AGE IS*******    \n");
 printf("\n-------------------------------------\n");
 printf("YEARS:%d MONTHS:%d DAYS:%d",ny,nm,nd);
 printf("\n-------------------------------------\n");
 printf("\n");
 return 0;
}


int isleapyear(int year, int mon) 
{
    int flag = 0;
    if (year % 100 == 0) 
    {
            if (year % 400 == 0) 
            {
                    if (mon == 2) 
                    {
                            flag = 1;
                    }
            }
    } 
    else if (year % 4 == 0) 
    {
            if (mon == 2) 
            {
                    flag = 1;
            }
    }
    return (flag);
}
 
