
#include<stdio.h>
void main()
{ char b[100];
   int count=0,index,key=0,wish=1,i,j;
   char chose='o';
   
   for(i=0;i<3;i++)
      { for(j=0;j<3;j++)
        {printf("_%d_ ",count+1);
            count++;
        }
        printf("\n");
      }
    
   
   
  count=0;
printf("_________________________________________");
/*printf("\nNOTE every box is equal to the number of \nthe position -1\n");
printf("\n");
for( i=0;i<3;i++)
{for( j=0;j<3;j++)
  { printf("%d  ",count+1) ;
       count++;}
      printf("\n");}
printf("_________________________________________");*/
 
//printf("\nCHOSE alphabetic 'x' or alphabetic 'o' \nfor player 1st\n");
//printf("\nPLAYER 1ST what will you choose :");
//scanf("%c",&chose);

while(chose=='o')
  {
    while( wish==1 )
      {
          index=0;
    for(i=0;i<4;i++)
         { for(j=0;j<3;j++)
             {b[index]='_';
               index++;}
         }
        printf("\n ------------------1st o-----------------");
        printf("\nplayer 1st plz tell the index number where you want to put'o':");
        scanf("%d",&index);
        b[index-1]='o';
        index=0;
        for( i=0;i<3;i++)
            {for(j=0;j<3;j++)
               {printf("%c  ",b[index]);
                    index++;
               }
            printf("\n");
            }

 printf("\n");
 printf("\n -------------------1st x---------------");
 printf("\nplayer 2 its your turn and your symbol is 'x' tell us the index  where do you want to put 'x' :");//1st x
 scanf("%d",&index);
  b[index-1]='x';
  index=0;
     for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
      {printf("%c  ",b[index]);
      index++;}
      printf("\n");
   }
   printf("\n -------------------2nd o----------------");
        printf("\nplayer 1st plz tell the index number where you want to put'o':");
        scanf("%d",&index);
        b[index-1]='o';
        index=0;
        for( i=0;i<3;i++)
            {for(j=0;j<3;j++)
               {printf("%c  ",b[index]);
                    index++;
               }
            printf("\n");
            }

 printf("\n");
  printf("\n");
  printf("\n -------------------2nd x---------------");
 printf("\nplayer 2 its your turn and your symbol is 'x' tell us the index  where do you want to put 'x' :");//2nd x
 scanf("%d",&index);
  b[index-1]='x';
  index=0;
     for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
      {printf("%c  ",b[index]);
      index++;}
      printf("\n");
   }
   printf("\n ------------------3rd o----------------");
        printf("\nplayer 1st plz tell the index number where you want to put'o':");
        scanf("%d",&index);
        b[index-1]='o';
        index=0;
        for( i=0;i<3;i++)
            {for(j=0;j<3;j++)
               {printf("%c  ",b[index]);
                    index++;
               }
            printf("\n");
            }

 printf("\n");
    if( b[0]=='o' && b[1]=='o' && b[2]=='o' ||
       b[0]=='o' && b[4]=='o' && b[8]=='o' ||
       b[0]=='o' && b[3]=='o' && b[6]=='o' ||
       b[1]=='o' && b[4]=='o' && b[7]=='o' ||
       b[2]=='o' && b[4]=='o' && b[6]=='o' ||
       b[2]=='o' && b[5]=='o' && b[8]=='o' ||
       b[3]=='o' && b[4]=='o' && b[5]=='o' ||
       b[6]=='o' && b[7]=='o' && b[8]=='o')
       {    key=1;
            printf("\nplayer one with 'o' has won 😊😊 ");
       
       printf("\nwant to play again ???\nIf yes press 1 or if not press 0:::");
      scanf("%d",&wish);}
      if(key==1)
        {break;}
         
printf("\n");
printf("\n ------------------3rd x-----------------");
 printf("\nplayer 2 its your turn and your symbol is 'x' tell us the index  where do you want to put 'x' :");
 //3rd x 
 scanf("%d",&index);
  b[index-1]='x';
  index=0;
     for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
      {printf("%c  ",b[index]);
      index++;}
      printf("\n");
   }
    printf("\n");
   if( b[0]=='x' && b[1]=='x' && b[2]=='x' ||
       b[0]=='x' && b[4]=='x' && b[8]=='x' ||
       b[0]=='x' && b[3]=='x' && b[6]=='x' ||
       b[1]=='x' && b[4]=='x' && b[7]=='x' ||
       b[2]=='x' && b[4]=='x' && b[6]=='x' ||
       b[2]=='x' && b[5]=='x' && b[8]=='x' ||
       b[3]=='x' && b[4]=='x' && b[5]=='x' ||
       b[6]=='x' && b[7]=='x' && b[8]=='x')
       {    key=1;
            printf("\nplayer two with 'x' has won ðŸŽ‰ðŸŽ‰");
       
       printf("\nwant to play again ???\nIf yes press 1 or if not press 0:::");
      scanf("%d",&wish);}
      if(key==1)
        {break;}
         
         
    printf("\n -----------------4th o-----------------");
        printf("\nplayer 1st plz tell the index number where you want to put'o':");
        scanf("%d",&index);
        b[index-1]='o';
        index=0;
        for( i=0;i<3;i++)
            {for(j=0;j<3;j++)
               {printf("%c  ",b[index]);
                    index++;
               }
            printf("\n");
            }
  if( b[0]=='o' && b[1]=='o' && b[2]=='o' ||
       b[0]=='o' && b[4]=='o' && b[8]=='o' ||
       b[0]=='o' && b[3]=='o' && b[6]=='o' ||
       b[1]=='o' && b[4]=='o' && b[7]=='o' ||
       b[2]=='o' && b[4]=='o' && b[6]=='o' ||
       b[2]=='o' && b[5]=='o' && b[8]=='o' ||
       b[3]=='o' && b[4]=='o' && b[5]=='o' ||
       b[6]=='o' && b[7]=='o' && b[8]=='o')
       {    key=1;
            printf("\nplayer one with 'o' has won ðŸŽ‰ðŸŽ‰");
       
       printf("\nwant to play again ???\nIf yes press 1 or if not press 0:::");
      scanf("%d",&wish);}
      if(key==1)
        {break;}
         

 printf("\n");
      printf("\n");
   printf("\n -----------------4th x------------------");
 printf("\nplayer 2 its your turn and your symbol is 'x' tell us the index  where do you want to put 'x' :");
 //3rd x 
 scanf("%d",&index);
  b[index-1]='x';
  index=0;
     for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
      {printf("%c  ",b[index]);
      index++;}
      printf("\n");
   }
    printf("\n");
     if( b[0]=='x' && b[1]=='x' && b[2]=='x' ||
       b[0]=='x' && b[4]=='x' && b[8]=='x' ||
       b[0]=='x' && b[3]=='x' && b[6]=='x' ||
       b[1]=='x' && b[4]=='x' && b[7]=='x' ||
       b[2]=='x' && b[4]=='x' && b[6]=='x' ||
       b[2]=='x' && b[5]=='x' && b[8]=='x' ||
       b[3]=='x' && b[4]=='x' && b[5]=='x' ||
       b[6]=='x' && b[7]=='x' && b[8]=='x')
       {    key=1;
            printf("\nplayer two with 'x' has won ðŸŽ‰ðŸŽ‰");
       
       printf("\nwant to play again ???\nIf yes press 1 or if not press 0:::");
      scanf("%d",&wish);}
      if(key==1)
        {break;}
         
         
 printf("\n -----------------5th o----------------");
        printf("\nplayer 1st plz tell the index number where you want to put'o':");
        scanf("%d",&index);
        b[index-1]='o';
        index=0;
        for( i=0;i<3;i++)
            {for(j=0;j<3;j++)
               {printf("%c  ",b[index]);
                    index++;
               }
            printf("\n");
            }
  if( b[0]=='o' && b[1]=='o' && b[2]=='o' ||
       b[0]=='o' && b[4]=='o' && b[8]=='o' ||
       b[0]=='o' && b[3]=='o' && b[6]=='o' ||
       b[1]=='o' && b[4]=='o' && b[7]=='o' ||
       b[2]=='o' && b[4]=='o' && b[6]=='o' ||
       b[2]=='o' && b[5]=='o' && b[8]=='o' ||
       b[3]=='o' && b[4]=='o' && b[5]=='o' ||
       b[6]=='o' && b[7]=='o' && b[8]=='o')
         {    key=1;
            printf("\nplayer one with 'o' has won ðŸŽ‰ðŸŽ‰");
       
       printf("\nwant to play again ???\nIf yes press 1 or if not press 0:::");
      scanf("%d",&wish);}
      if(key==1)
        {break;}
        
        else 
        {printf("\nThe match has been draw ");
        printf("\nwant to play again ???\nIf yes press 1 or if not press 0:::");
         scanf("%d",&wish);}
      
    
     
     }
     if(wish==0)
     {
      printf("the game has been over ");
         break;
     }
     }
}