#include<stdio.h>
#include<conio.h>
int n,i,j;
void main(){
    char t='f';
    XX:
        printf("+ - - - - - - - - - - - Main Menu - - - - - - - - - - - +\n");
        printf("|     1) Pyramid                2) Even Num             |\n");
        printf("|     3) Odd Num                4) Triangle             |\n");
        printf("|     5) Exist                                          |\n");
        printf("+ - - - - - - - - - - - - - - - - - - - - - - - - - - - +\n");
        printf("Enter your Choose (1-5).");
            while(1){t=getch();if(t>=49 && t<=53)break;}
            switch(t){
            case '1':{
                PR:
                    printf("\n\n    Pyramid Direction");
                    printf("\n        1. Top to Bottom;\n        2. Left to Right;\n        3. Bottom to Top;\n        4. Right to Left;");
                    while(1){t=getch();if(t>=49 && t<=52)break;}
                    switch(t){
                        case '1':{
                            pyramid(1,40); break;
                        }
                        case '2':{
                            pyramid(2,78); break;
                        }
                        case '3':{
                            pyramid(3,40); break;
                        }
                        case '4':{
                            pyramid(4,78); break;
                        }
                    }
                    printf("\n      Do you went to Try again (Press y/n)..");
                    while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                    if(t=='y'|| t=='Y'){printf("\n\n");goto PR;}
                    printf("\n\n    Do you went to go Main menu(Press y/n)..");
                    while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                    if(t=='y' || t=='Y'){printf("\n\n\n");goto XX;}
                    break;
            }
            case '2':{
                EN:
                    printf("\n\n          Enter where you went to start [Max 32,765]: ");
                    scanf("%d",&i);
                    printf("          Enter destination Number [Max 32,765]: ");
                    scanf("%d",&n);
                    if(i<0 || n<0){
                        printf("        Invalid Numbers you input! Do you went to try again this(Press y/n)..");
                        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                        if(t=='y' || t=='Y'){goto EN;}
                    }else if(i>32765 || n>32765){
                        printf("        You will input up to 32765! Do you went to try again this(Press y/n)..");
                        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                        if(t=='y' || t=='Y'){goto EN;}
                    }else if(i>n){
                        printf("        Start point > Destination! Do you went to try again this(Press y/n)..");
                        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                        if(t=='y' || t=='Y'){goto EN;}
                    }
                    printf("\n+------------------------------------------------------------------------------+");
                    j=printf("\n|                            %d to %d Even Numbers",i,n);
                    while(j<80){printf("%c",' ');j++;}
                    printf("|\n+------------------------------------------------------------------------------+\n");
                    j=0;
                    while(i<=n){
                        if(j==0){printf("|%2c",' ');j=1;}
                        else if(j==9) {printf("%5c\n",'|');j=0;}

                        if(i%2==0){printf("%8d;",i);j++;}
                        i++;
                    }
                    j=((j-1)*9+3);
                    while(j<79){printf("%c",' ');j++;}
                    printf("|\n+------------------------------------------------------------------------------+\n");
                    printf("\n      Do you went to Try again (Press y/n)..");
                    while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                    if(t=='y'|| t=='Y'){printf("\n");goto EN;}
                    printf("\n\n    Do you went to go Main menu(Press y/n)..");
                    while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                    if(t=='y' || t=='Y'){printf("\n\n\n");goto XX;}
                    break;
            }
            case '3':{
                OD:
                    printf("\n\n          Enter where you went to start [Max 32,765]: ");
                    scanf("%d",&i);
                    printf("          Enter destination Number [Max 32,765]: ");
                    scanf("%d",&n);
                    if(i<0 || n<0){
                        printf("        Invalid Numbers you input! Do you went to try again this(Press y/n)..");
                        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                        if(t=='y' || t=='Y'){goto OD;}
                    }else if(i>32765 || n>32765){
                        printf("        You will input up to 32765! Do you went to try again this(Press y/n)..");
                        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                        if(t=='y' || t=='Y'){goto OD;}
                    }else if(i>n){
                        printf("        Start point > Destination! Do you went to try again this(Press y/n)..");
                        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                        if(t=='y' || t=='Y'){goto OD;}
                    }
                    printf("\n+------------------------------------------------------------------------------+");
                    j=printf("\n|                            %d to %d ODD Numbers",i,n);
                    while(j<80){printf("%c",' ');j++;}
                    printf("|\n+------------------------------------------------------------------------------+\n");
                    j=0;
                    while(i<=n){
                        if(j==0){printf("|%2c",' ');j=1;}
                        else if(j==9) {printf("%5c\n",'|');j=0;}

                        if(i%2==1){printf("%8d;",i);j++;}
                        i++;
                    }
                    j=((j-1)*9+3);
                    while(j<79){printf("%c",' ');j++;}
                    printf("|\n+------------------------------------------------------------------------------+\n");
                    printf("\n      Do you went to Try again (Press y/n)..");
                    while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                    if(t=='y'|| t=='Y'){printf("\n");goto OD;}
                    printf("\n\n    Do you went to go Main menu(Press y/n)..");
                    while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                    if(t=='y' || t=='Y'){printf("\n\n\n");goto XX;}
                    break;
            }
            case '4':{
                TR:
                    printf("\n\n    Triangle Direction");
                    printf("\n        1. LT to BR;\n        2. RT to BL;\n        3. LB to RT;\n        4. RB to LT;\n        5. RB to LT;\n        6. RB to LT;");
                    while(1){t=getch();if(t>=49 && t<=54)break;}
                    switch(t){
                        case '1':{
                            triangle(1,40); break;
                        }
                        case '2':{
                            triangle(2,78); break;
                        }
                        case '3':{
                            triangle(3,40); break;
                        }
                        case '4':{
                            triangle(4,78); break;
                        }
                        case '5':{
                            triangle(5,78); break;
                        }
                        case '6':{
                            triangle(5,78); break;
                        }
                        case '7':{
                            triangle(5,78); break;
                        }
                        case '8':{
                            triangle(5,78); break;
                        }

                    }
                    printf("\n      Do you went to Try again (Press y/n)..");
                    while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                    if(t=='y'|| t=='Y'){printf("\n\n");goto TR;}
                    printf("\n\n    Do you went to go Main menu(Press y/n)..");
                    while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
                    if(t=='y' || t=='Y'){printf("\n\n\n");goto XX;}
                    break;
            }
            case '5':{
                break;
            }
        }



}


int pyramid(int der,int mr){
    char t;
    int r,k=0;
    HE:
    printf("\n          Enter row numbers [Maximum %d] of Pyramid : ",mr);
    scanf("%d",&r);
    if(r<2){
        printf("        Minimum 2 row needed! Do you went to try again this (Press y/n)..");
        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
        if(t=='y' || t=='Y'){printf("\n");goto HE;}
        der=0;
    }else if(r>mr){
        printf("        Row <= %d! Do you went to try again this (Press y/n)..",mr);
        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
        if(t=='y' || t=='Y'){printf("\n");goto HE;}
        der=0;
    }
    if(der==1){
        n=40;
        printf("\n");
        for(i=1;i<=r;i++){
            for(j=0;j<n;j++) printf("%c",' ');
            for(j=1;j<=(2*i-1);j++) printf("*");
            n--;printf("\n");
        }
    }else if(der == 2){
        n=(80+(r-1))/2;
        printf("\n");
        for(i=1;i<=(2*r-1);i++){
            if(i<=(r-1)){
                for(j=0;j<n;j++) printf("%c",' ');
                for(j=1;j<=i;j++) printf("*");
                n--;
            }else{
                for(j=1;j<=n;j++) printf("%c",' ');
                for(j=1;j<=(2*r)-i;j++) printf("*");
                n++;
            }
            printf("\n");
        }
    }else if(der == 3){
        n=40-(r-1);
        printf("\n");
        for(i=r;i>=1;i--){
            for(j=0;j<n;j++) printf("%c",' ');
            for(j=1;j<=(2*i-1);j++) printf("*");
            n++;printf("\n");
        }
    }else if(der == 4){
        n=(80-(r-1))/2;
        printf("\n");
        for(i=(2*r-1);i>=1;i--){
            for(j=0;j<n;j++) printf("%c",' ');
            if(i<=(r-1))
                for(j=1;j<=i;j++) printf("*");
            else
                for(j=1;j<=(2*r)-i;j++) printf("*");
            printf("\n");
        }
    }
}

int triangle(int der,int mr){
    char t;
    int r,k=0;
    HE:
    printf("\n          Enter row numbers [Maximum %d] of Triangle : ",mr);
    scanf("%d",&r);
    if(r<2){
        printf("        Minimum 2 row needed! Do you went to try again this (Press y/n)..");
        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
        if(t=='y' || t=='Y'){printf("\n");goto HE;}
        der=0;
    }else if(r>mr){
        printf("        Row <= %d! Do you went to try again this (Press y/n)..",mr);
        while(1){t=getch();if(t=='n' ||t=='N' ||t=='y' || t=='Y' )break;}
        if(t=='y' || t=='Y'){printf("\n");goto HE;}
        der=0;
    }
    if(der==1){
        n=40-r/2;
        printf("\n");
        for(i=1;i<=r;i++){
            for(j=0;j<n;j++) printf("%c",' ');
            for(j=1;j<=i;j++) printf("*");
            printf("\n");
        }
    }else if(der==2){
        n=40+r/2;
        printf("\n");
        for(i=1;i<=r;i++){
            for(j=0;j<n;j++) printf("%c",' ');
            for(j=1;j<=i;j++) printf("*");
            n--;printf("\n");
        }
    }else if(der == 3){
        n=(80+(r-1))/2;
        printf("\n");
        for(i=1;i<=r;i++){
                for(j=0;j<n;j++) printf("%c",' ');
                for(j=1;j<=i;j++) printf("*");
                n--;
            printf("\n");
        }
    }else if(der == 4){
        n=(80-(r-1))/2;
        printf("\n");
        for(i=1;i<=r;i++){
                for(j=0;j<n;j++) printf("%c",' ');
                for(j=1;j<=i;j++) printf("*");
            printf("\n");
        }
    }else if(der == 5){
        n=40-(r-1);
        printf("\n");
        for(i=r;i>=1;i--){
            for(j=0;j<n;j++) printf("%c",' ');
            for(j=1;j<=(2*i-1);j++) printf("*");
            n++;printf("\n");
        }
    }else if(der == 6){
        n=(80-(r-1))/2;
        printf("\n");
        for(i=(2*r-1);i>=1;i--){
            for(j=0;j<n;j++) printf("%c",' ');
            if(i<=(r-1))
                for(j=1;j<=i;j++) printf("*");
            else
                for(j=1;j<=(2*r)-i;j++) printf("*");
            printf("\n");
        }
    }
}



