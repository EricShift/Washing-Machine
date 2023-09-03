#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
int Lid;
int Menu;
int Timer;
int i,t,j;
char Load;
char wash;

int main()
{
    printf("________________________________________________________\n");
    printf("|                                                       |\n");
    printf("|                   Washing Machine                     |\n");
    printf("|                       By Eric                         |\n");
    printf("________________________________________________________ \n");
    printf("\n");
    printf("       ___________________________________________       \n");
    printf("\n");
    printf("                    *****MENU*****                       \n");
    printf("             ______________________________              \n");
    printf("           .1*Start Wash .2*Rinse .3*Finish              \n");
    printf("             ______________________________              \n");
    printf("                    *.Warm *.Cold                      \n");
    printf("_________________________________________________________\n");
    Sleep(5000);
    printf("Lid Closed to open lid and put load press (1) and (0) to close\n:");
    scanf("%d",&Lid);
    Sleep(1000);
    while(1){
    if(Lid==1){
        Sleep(2000);
        printf("After Loading your load press (f/F)\n");
        scanf(" %c",&Load);
        if(Load =='f'||'F'){
            printf("...\n");
        Sleep(5000);
            printf("Please press the number of the function you want to operate on the machine(1,2&3)\n");
            scanf(" %d",&Menu);
            printf("\n");
            Sleep(2000);
            printf("Would you like to wash with cold or hot water choose (c/C) for cold and (W/w) warm wash\n");
            scanf(" %c",&wash);
            if(wash =='w'||'W'){
                    Sleep(2000);
                printf("Warm wash...\n");
            }else{
                Sleep(2000);
                printf("Cold Wash...\n");
            }
            if(Menu==1){
                printf("Please enter the timer number for each washing process\n:");
                scanf("%d",&Timer);
                printf("The Machine is starting...\n");
                Sleep(5000);
                printf("\n");
                for(i=1;i<=Timer;i++){
                        Sleep(2000);
                   printf("Timer: %d\n",i);
                }
                printf("\n");
                printf("Washing Complete \a,now moving to Rinsing\n");
                printf("\n");
                Sleep(5000);
                for(i=1;i<=Timer;i++){
                        Sleep(2000);
                   printf("Timer: %d\n",i);
                }
                printf("\n");
                printf("Rinsing Complete \a,now Finishing up\n");
                Sleep(5000);
                printf("\n");
                for(i=1;i<=3;i++){
                        Sleep(2000);
                   printf("Finishing: %d\n",i);
                }
                for(t=0;t<=6;t++){
                    for(j=0;j<=t;j++){

                        printf("*");
                            }
                            printf("\n");
                            }
                    Sleep(5000);
                printf("Washing done :) \a\a\a\n");

            }else if(Menu==2){
            printf("Starting Rinsing Process ...\n");
            Sleep(5000);
            printf("Please enter the timer number for Rinsing process\n:");
            scanf("%d",&Timer);
            for(i=1;i<=Timer;i++){
                Sleep(2000);
                   printf("Timer: %d\n",i);
                }
                printf("\n");
            Sleep(5000);
            printf("Rinsing Complete /a,now Finishing up\n");
            printf("\n");
                for(i=1;i<=3;i++){
                        Sleep(2000);
                   printf("Finishing: %d\n",i);
                }
                for(t=0;t<=6;t++){
                    for(j=0;j<=i;j++){

                        printf("*");
                            }
                            printf("\n");
                            }
                printf("\n");
                printf("Washing done :) \a\a\a\n");
            }
            else if(Menu==3){
                    printf("\n");
            for(i=1;i<=3;i++){
                    Sleep(5000);
                   printf("Finishing: %d\n",i);
                }
                for(t=0;t<=6;t++){
                    for(j=0;j<=t;j++){

                        printf("*");
                            }
                            printf("\n");
                            }
                    printf("\n");
                printf("Washing done :) \a\a\a\n");
            }else{
                Sleep(5000);
            printf("Please chose a valid number:\n");
            }
            break;
        }else{
            Sleep(5000);
            printf("Character enter not Valid!!\n");
        }
    }else if(Lid==0){
        printf("Machine Program will be terminated!!!\n");
        printf("Exiting....\n");
        Sleep(10000);
        break;
    }else{
    printf("Please Enter a Valid Number!!!\n");
    Sleep(5000);
    }
    }

    return 0;
}
