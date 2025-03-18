#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
 int ch,r,p,s,e,cnt=0;
 char o[256],l[256],h[100][256];
 while(1){
  printf("1) Order\n");
  printf("2) History\n");
  printf("3) Quit\n");
  printf("Choice: ");
  scanf("%d",&ch);
  switch(ch){
   case 1:
    o[0]='\0';
    printf("Restaurant:\n");
    printf("1) Pizza\n");
    printf("2) Burger\n");
    printf("3) Sushi\n");
    printf("Enter choice: ");
    scanf("%d",&r);
    if(r==1){
     printf("Pizza Options:\n");
     printf("1) Default\n");
     printf("2) Custom\n");
     printf("Enter choice: ");
     scanf("%d",&p);
     if(p==1)
      sprintf(o,"Pizza: Default");
     else if(p==2){
      printf("Size (1-S,2-M,3-L): ");
      scanf("%d",&s);
      if(s==1)
       sprintf(o,"Pizza: Small");
      else if(s==2)
       sprintf(o,"Pizza: Medium");
      else if(s==3)
       sprintf(o,"Pizza: Large");
      else
       sprintf(o,"Pizza: Unknown");
      printf("Cheese? (1-Yes,2-No): ");
      scanf("%d",&e);
      if(e==1)
       strcat(o," w/Cheese");
     }
     else
      sprintf(o,"Pizza: Unknown");
    }
    else if(r==2){
     printf("Burger Options:\n");
     printf("1) Burger\n");
     printf("2) Burger+Fries\n");
     printf("Enter choice: ");
     scanf("%d",&p);
     if(p==1)
      sprintf(o,"Burger: Burger");
     else if(p==2)
      sprintf(o,"Burger: Burger+Fries");
     else
      sprintf(o,"Burger: Unknown");
    }
    else if(r==3){
     printf("Sushi Options:\n");
     printf("1) Set\n");
     printf("2) Deluxe\n");
     printf("Enter choice: ");
     scanf("%d",&p);
     if(p==1)
      sprintf(o,"Sushi: Set");
     else if(p==2)
      sprintf(o,"Sushi: Deluxe");
     else
      sprintf(o,"Sushi: Unknown");
    }
    else{
     printf("Invalid choice!\n");
     break;
    }
    printf("Delivery Location: ");
    scanf(" %[^\n]",l);
    strcat(o," to ");
    strcat(o,l);
    sprintf(h[cnt++],"%s",o);
    printf("Order: %s\n",o);
    break;
   case 2:
    printf("Order History:\n");
    for(e=0;e<cnt;e++)
     printf("%s\n",h[e]);
    break;
   case 3:
    exit(0);
   default:
    printf("Invalid choice!\n");
  }
 }
 return 0;
}
