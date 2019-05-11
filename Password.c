#include<stdio.h>
#include<string.h>


int main(){

 const int Maxpass = 15;
 char pass[Maxpass + 1];
 char ch;
 int charposition=0;
 printf("\n Enter your Password. Length 1-%d\n",Maxpass);

 while(1)
 {
     ch = getch();
     if(ch == 13)
     {
         break;
     }
     else if(ch == 8)
     {
         if (charposition > 0)
         {
             charposition --;
             pass[charposition] = '\0';
             printf("\b \b");
         }
         else if(ch == 32 || ch== 9)
         {
             continue;
         }
         else
         {
            if(charposition < Maxpass)
            {
                pass[charposition]= ch;
                charposition++;
                printf("*");
            }
            else
            {
                printf("\nU=Your password Exceed Max PassWord Length>>>15<<<");
                break;
            }

         }
     }
 }
 pass[charposition]='\0';
 printf("\n");
 if(strlen(pass)==0)
 {
     printf("No PassWord Entered.");

 }
 else
 {
     printf("PassWord is : %s", pass);
 }

   return 0;
}
