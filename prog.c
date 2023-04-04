#include<stdio.h>
int main(){
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5;
    int point01,point02,point03,point04,point05;
    

    printf(            "------WELCOME TO THE GAME------\n\n\n"  );
    printf("press '5' to start the game\n");
    printf("press '0' to quit the game\n");
    scanf("%d",&i);
    if(i==5){
        printf("            The game has started\n\n"       );
    }
    else if(i==0){
        printf("             The game has ended\n\n"         );
    }
    else{
        printf("INVALID\n");
    }
    if(i==5){
        printf("1: What is the size of the 'int'data type (in bytes) in C ? \n\n");
        printf("1) 8 \n");
        printf("2) 4 \n");
        printf("3) 2 \n");
        printf("4) 1 \n\n");

        printf("Enter your answer here:>");
        scanf("%d",&ans1);

        if(ans1==2){
            printf("CORRECT ANSWER \n\n");
            point1=2;
            printf("congrats!!! You have scored %d point. \n\n",point1);
        }
        else{
            printf("Oops!!! WRONG ANSWER \n\n");
            point01=0;
            printf("You have scored %d point. \n\n",point01);
        }
        printf("2: Which one is the first web browser invented in 1990? \n\n");
        printf("1) Internet explorar \n");
        printf("2) Mozilla \n");
        printf("3) Nexus \n");
        printf("4) Mosaic \n\n");

        printf("Enter your answer here:>");
        scanf("%d",&ans2);

        if(ans2==3){
            printf("CORRECT ANSWER \n\n");
            point2=2;
            printf("Congrats!!! You have scored %d point. \n\n",point2); 
        }
        else{
            printf("Oops!!! WRONG ANSWER\n\n");
            point02=0;
            printf("You have scored %d point. \n\n",point02);
        }

        printf("3: First computer virus is known as? \n\n");
        printf("1) Rabbit \n");
        printf("2) creeper Virus \n");
        printf("3) Elk Cloner \n");
        printf("4) SCA Virus \n\n");

        printf("Enter your answer here:>");
        scanf("%d",&ans3);

        if(ans3==2){
            printf("CORRECT ANSWER\n\n");
            point3=2;
            printf("Congrats!!! You have scored %d point. \n\n",point3);
        }
        else{
            printf("Oops!!! WRONG ANSWER\n\n");
            point03=0;
            printf("You have scored %d point. \n\n",point03);
        }
        printf("4: Firewall in computer used for? \n\n");
        printf("1) Secuirity \n");
        printf("2) Data Transmission \n");
        printf("3) Monitoring \n");
        printf("4) Authentication \n\n");

        printf("Enter your answer here:>");
        scanf("%d",&ans4);

        if(ans4==1){
            printf("CORRECT ANSWER\n\n");
            point4=2;
            printf("Congrats!!! You have scored %d point.\n\n",point4);
        }
        else{
            printf("Oops!!! WRONG ANSWER\n\n");
            point04=0;
            printf("You have scored %d point. \n\n",point04);
        }
        printf("5: Who is the father of C language? \n\n");
        printf("1) Steve Jobs \n");
        printf("2  Rasmus Gosling \n");
        printf("3) James Goslings \n");
        printf("4) Dennis Ritchie  \n\n");

        printf("Enter your answer here:>");
        scanf("%d",&ans5);

        if(ans5==4){
            printf("CORRECT ANSWER\n\n");
            point5=2;
            printf("Congrats!!! You have scored %d point. \n\n",point5);
        }
        else{
            printf("Oops!!! WRONG ANSWER\n\n");
            point05=0;
            printf("You have scored %d point. \n\n",point05);
        }
        printf("               ......THANK YO FOR YOUR VALUABLE TIME......\n\n           ");
        printf("      ^_^   I HOPE YOU ENJOYED THE GAME   ^_^\n\n         ");
        printf("                       Bye...Bye...                               ");
}
return 0;
}