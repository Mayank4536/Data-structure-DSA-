#include<stdio.h>

int main()
{
    int total;
    int physics,chemistry,Maths;
    printf("Enter Physics Marks\n");
    scanf("%d",&physics);

     printf("Enter chemistry Marks\n");
    scanf("%d",&chemistry);

     printf("Enter Maths Marks\n");
    scanf("%d",&Maths);

    total = (physics+chemistry+Maths)/3;

    if((total<40)||physics<33 || Maths<33||chemistry<33){
        printf("Your total percentage is %d and you are failed\n",total);
    }
    else{
        printf("your total percentage is %d and you are pass\n",total);
    }
    return 0;
}