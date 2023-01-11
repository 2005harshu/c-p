#include<stdio.h>
void main()
{
    int a,b,ch,n;
    printf("\n********Welcome********\n");
    printf("\nWE WERE GOING TO MANIPULATE THE VALUES ACCORDING TO YOUR CHOICE.\n");
    printf("\nEnter the values:\n");
    scanf("%d%d",&a,&b);
    printf("\nPlease tell us what to do.\n");
    printf("\n1.to find all the arithmatic values.\n2.to find all logical values.\n3.to find relation.\n4.applying bitwise operator.\n5.want to end\n");
   
    do{
         printf("Enter your choice:");
         scanf("%d",&ch);
         if(ch==1){
            printf("%d + %d = %d\n",a,b,a+b);
            printf("%d - %d = %d\n",a,b,a-b);
            printf("%d * %d = %d\n",a,b,a*b);
            printf("%d / %d = %d\n",a,b,a/b);
            continue;
         }
         else if(ch==2){
            printf("%d && %d = %d\n",a,b,a&&b);
            printf("%d || %d = %d\n",a,b,a||b);
            continue;
         }
         else if(ch==3){
            (a>b)?printf("%d is greater than %d\n",a,b):printf("%d is greater than %d\n",b,a);
            continue;
         }
         else if(ch==4){
            printf("%d & %d = %d\n",a,b,a&b);
            printf("%d | %d = %d\n",a,b,a|b);
            printf("%d ^ %d = %d\n",a,b,a^b);
            continue;
         }
         else if(ch==5){
            printf("++++++THANK YOU+++++++\n");
            break;
         }
         else{
            printf("xxxxxxxxx INVALID ENTRY xxxxxxxxxx\n");
            continue;
         }
         scanf("%d",&n);
    }
    while(n--);
}