#include <stdio.h>
/*char n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
char n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22,n23,n24,n25;
char n26,n27,n28,n29,n30,n31,n32,n33,n34,n35,n36,n37,n38,n39,n40,n41,n42,n43,n44,n45,n46,n47,n48,n49,n50,n51,n52,n53,n54,n55,n56;
char n57,n58,n59,n60,n61,n62,n63,n64,n65,n66,n67,n68,n69,n70,n71,n72,n73,n74,n75,n76,n77,n78,n79,n80,*ttmp;*/
//int n[81];
char nn[81][3]={
    "0","1","2","3","4","5","6","7","8","9","10",
    "11","12","13","14","15","16","17","18",
    "19","20","21","22","23","24","25",
    "26","27","28","29","30","31","32","33",
    "34","35","36","37","38","39","40","41","42",
    "43","44","45","46","47","48","49","50","51","52","53","54","55","56","57","58","59","60","61","62","63","64","65","66","67","68","69","70","71","72",
    "73","74","75","76","77","78","79","80"
};
int co9[81],co5[25],co3[9],uu,*yu;
char na1[4],na2[4],*cd,pp[9]={"012345678"};
void parn(){
            printf("  %s |  %s |  %s |  %s |  %s \n",nn[0],nn[1],nn[2],nn[3],nn[4]);
            printf("------------------------\n");
            printf("  %s |  %s |  %s |  %s |  %s \n",nn[5],nn[6],nn[7],nn[8],nn[9]);
            printf("------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s \n",nn[10],nn[11],nn[12],nn[13],nn[14]);
            printf("------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s \n",nn[15],nn[16],nn[17],nn[18],nn[19]);
            printf("------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s \n",nn[20],nn[21],nn[22],nn[23],nn[24]);
}
void dog(){
            printf("  %c |  %c |  %c \n",pp[0],pp[1],pp[2]);
            printf("-----------\n");
            printf("  %c |  %c |  %c \n",pp[3],pp[4],pp[5]);
            printf("-----------\n");
            printf("  %c |  %c |  %c \n",pp[6],pp[7],pp[8]);
}
void tun(){
            printf("  %s |  %s |  %s |  %s |  %s |  %s |  %s |  %s |  %s \n",nn[0],nn[1],nn[2],nn[3],nn[4],nn[5],nn[6],nn[7],nn[8]);
            printf("-------------------------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s \n",nn[9],nn[10],nn[11],nn[12],nn[13],nn[14],nn[15],nn[16],nn[17]);
            printf("-------------------------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s \n",nn[18],nn[19],nn[20],nn[21],nn[22],nn[23],nn[24],nn[25],nn[26]);
            printf("-------------------------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s \n",nn[27],nn[28],nn[29],nn[30],nn[31],nn[32],nn[33],nn[34],nn[35]);
            printf("-------------------------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s \n",nn[36],nn[37],nn[38],nn[39],nn[40],nn[41],nn[42],nn[43],nn[44]);
            printf("-------------------------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s \n",nn[45],nn[46],nn[47],nn[48],nn[49],nn[50],nn[51],nn[52],nn[53]);
            printf("-------------------------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s \n",nn[54],nn[55],nn[56],nn[57],nn[58],nn[59],nn[60],nn[61],nn[62]);
            printf("--------------------------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s \n",nn[63],nn[64],nn[65],nn[66],nn[67],nn[68],nn[69],nn[70],nn[71]);
            printf("--------------------------------------------\n");
            printf(" %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s | %2s \n",nn[72],nn[73],nn[74],nn[75],nn[76],nn[77],nn[78],nn[79],nn[80]);
}
void nx(){
    int chos,up;
    up=0;
    while(up == 0){
        printf("\n%s's turn(X): ",na1);
        scanf("%d",&chos);
        switch(uu){
            case 1:
                if(chos==co3[chos]){
                    cd=&pp[chos];
                    *cd='X';
                    cd=&co3[chos];
                    *cd=98;
                    up=1;
                }
                if(chos<8)
                    printf("Error");
                else{
                    printf("Error");

                }break;
            case 2:
                if(chos==co5[chos]){
                    cd=&nn[chos];
                    *cd='X';
                    cd=&co5[chos];
                    *cd=98;
                    up=1;
                }
                if(chos<24)
                    printf("Error");
                else{
                    printf("Error");

                }break;
            case 3:
                if(chos==co9[chos]){
                    cd=&nn[chos];
                    *cd='X';
                    cd=&co9[chos];
                    *cd=98;
                    up=1;
                }
                if(chos<80)
                    printf("Error");
                else{
                    printf("Error");

                }break;
        }
    }
}
void no(){
    int chos,up;
    up=0;
    while(up == 0){
        printf("\n%s's turn(O): ",na2);
        scanf("%d",&chos);
        switch(uu){
            case 1:
                if(chos==co3[chos]){
                    cd=&pp[chos];
                    *cd='O';
                    cd=&co3[chos];
                    *cd=99;
                    up=1;
                }
                if(chos<8)
                    printf("Error");
                else{
                    printf("Error");

                }break;
            case 2:
                if(chos==co5[chos]){
                    cd=&nn[chos];
                    *cd='O';
                    cd=&co5[chos];
                    *cd=99;
                    up=1;
                }
                if(chos<24)
                    printf("Error");
                else{
                    printf("Error");

                }break;
            case 3:
                if(chos==co9[chos]){
                    cd=&nn[chos];
                    *cd='O';
                    cd=&co9[chos];
                    *cd=99;
                    up=1;
                }
                if(chos<80)
                    printf("Error");
                else{
                    printf("Error");

                }break;
        }
    }
}
void select(){
    int a;
    yu=&uu;
    printf("Please choose level (3/5/9): ");
    switch (getch()){
        case '3':*yu=1;break;
        case '5':*yu=2;break;
        case '9':*yu=3;break;
        default:printf("Please phim kae 3,5,9");getch();system("cls");break;
    }
}
void stap(){
    cd=&na1;
    printf("Enter name player 1(X): ");
    scanf("%s",&*cd);
    cd=&na2;
    printf("Enter name player 2(O): ");
    scanf("%s",&*cd);
}
int main (){
    int c1,god;
    while(uu==0)
        select();
    system("cls");
    for(c1=0;c1<=8;c1++){
        cd=&co3[c1];
        *cd=c1;
    }
    for(c1=0;c1<=24;c1++){
        cd=&co5[c1];
        *cd=c1;
    }
    for(c1=0;c1<=80;c1++){
        cd=&co9[c1];
        *cd=c1;
    }
    stap();
    if(uu==1){
        for(;;){
            if(pp[0]==pp[1] && pp[1]==pp[2] ||
                pp[3]==pp[4] && pp[4]==pp[5] ||
                           pp[6]==pp[7] && pp[7]==pp[8] ||
                           pp[0]==pp[3] && pp[3]==pp[6] ||
                           pp[1]==pp[4] && pp[4]==pp[7] ||
                           pp[2]==pp[5] && pp[5]==pp[8] ||
                           pp[0]==pp[4] && pp[4]==pp[8] ||
                           pp[2]==pp[4] && pp[4]==pp[6] ){
                            printf("%s Win",na2);
                            break;
                        }
            system("cls");
            dog();
            nx();
            system("cls");
            dog();
            if(pp[0]==pp[1] && pp[1]==pp[2] ||
                pp[3]==pp[4] && pp[4]==pp[5] ||
                           pp[6]==pp[7] && pp[7]==pp[8] ||
                           pp[0]==pp[3] && pp[3]==pp[6] ||
                           pp[1]==pp[4] && pp[4]==pp[7] ||
                           pp[2]==pp[5] && pp[5]==pp[8] ||
                           pp[0]==pp[4] && pp[4]==pp[8] ||
                           pp[2]==pp[4] && pp[4]==pp[6] ){
                            printf("%s Win",na1);
                            break;
                        }
            no();

        }
    }
    else if (uu==2){
        for(;;){
            if(strcmp(nn[0],nn[1]) == 0 && strcmp(nn[1],nn[2]) == 0 && strcmp(nn[2],nn[3]) == 0 && strcmp(nn[3],nn[4]) == 0 ||
                               strcmp(nn[5],nn[6]) == 0 && strcmp(nn[6],nn[7]) == 0 && strcmp(nn[7],nn[8]) == 0 && strcmp(nn[8],nn[9]) == 0 ||
                               strcmp(nn[10],nn[11]) == 0 && strcmp(nn[11],nn[12]) == 0 && strcmp(nn[12],nn[13]) == 0 && strcmp(nn[13],nn[14]) == 0 ||
                               strcmp(nn[15],nn[16]) == 0 && strcmp(nn[16],nn[17]) == 0 && strcmp(nn[17],nn[18]) == 0 && strcmp(nn[18],nn[19]) == 0 ||
                               strcmp(nn[20],nn[21]) == 0 && strcmp(nn[21],nn[22]) == 0 && strcmp(nn[22],nn[23]) == 0 && strcmp(nn[23],nn[24]) == 0 ||
                               strcmp(nn[0],nn[5]) == 0 && strcmp(nn[5],nn[10]) == 0 && strcmp(nn[10],nn[15]) == 0 && strcmp(nn[15],nn[20]) == 0 ||
                               strcmp(nn[1],nn[6]) == 0 && strcmp(nn[6],nn[11]) == 0 && strcmp(nn[11],nn[16]) == 0 && strcmp(nn[16],nn[21]) == 0 ||
                               strcmp(nn[2],nn[7]) == 0 && strcmp(nn[7],nn[12]) == 0 && strcmp(nn[12],nn[17]) == 0 && strcmp(nn[17],nn[22]) == 0 ||
                               strcmp(nn[3],nn[8]) == 0 && strcmp(nn[8],nn[13]) == 0 && strcmp(nn[13],nn[18]) == 0 && strcmp(nn[18],nn[23]) == 0 ||
                               strcmp(nn[4],nn[9]) == 0 && strcmp(nn[9],nn[14]) == 0 && strcmp(nn[14],nn[19]) == 0 && strcmp(nn[19],nn[24]) == 0 ||
                               strcmp(nn[0],nn[6]) == 0 && strcmp(nn[6],nn[12]) == 0 && strcmp(nn[12],nn[18]) == 0 && strcmp(nn[18],nn[24]) == 0 ||
                               strcmp(nn[4],nn[8]) == 0 && strcmp(nn[8],nn[12]) == 0 && strcmp(nn[12],nn[16]) == 0 && strcmp(nn[16],nn[20]) == 0 ){
                                printf("%s Win",na2);
                                break;
                            }
            system("cls");
            parn();
            nx();
            system("cls");
            parn();
            if(strcmp(nn[0],nn[1]) == 0 && strcmp(nn[1],nn[2]) == 0 && strcmp(nn[2],nn[3]) == 0 && strcmp(nn[3],nn[4]) == 0 ||
                               strcmp(nn[5],nn[6]) == 0 && strcmp(nn[6],nn[7]) == 0 && strcmp(nn[7],nn[8]) == 0 && strcmp(nn[8],nn[9]) == 0 ||
                               strcmp(nn[10],nn[11]) == 0 && strcmp(nn[11],nn[12]) == 0 && strcmp(nn[12],nn[13]) == 0 && strcmp(nn[13],nn[14]) == 0 ||
                               strcmp(nn[15],nn[16]) == 0 && strcmp(nn[16],nn[17]) == 0 && strcmp(nn[17],nn[18]) == 0 && strcmp(nn[18],nn[19]) == 0 ||
                               strcmp(nn[20],nn[21]) == 0 && strcmp(nn[21],nn[22]) == 0 && strcmp(nn[22],nn[23]) == 0 && strcmp(nn[23],nn[24]) == 0 ||
                               strcmp(nn[0],nn[5]) == 0 && strcmp(nn[5],nn[10]) == 0 && strcmp(nn[10],nn[15]) == 0 && strcmp(nn[15],nn[20]) == 0 ||
                               strcmp(nn[1],nn[6]) == 0 && strcmp(nn[6],nn[11]) == 0 && strcmp(nn[11],nn[16]) == 0 && strcmp(nn[16],nn[21]) == 0 ||
                               strcmp(nn[2],nn[7]) == 0 && strcmp(nn[7],nn[12]) == 0 && strcmp(nn[12],nn[17]) == 0 && strcmp(nn[17],nn[22]) == 0 ||
                               strcmp(nn[3],nn[8]) == 0 && strcmp(nn[8],nn[13]) == 0 && strcmp(nn[13],nn[18]) == 0 && strcmp(nn[18],nn[23]) == 0 ||
                               strcmp(nn[4],nn[9]) == 0 && strcmp(nn[9],nn[14]) == 0 && strcmp(nn[14],nn[19]) == 0 && strcmp(nn[19],nn[24]) == 0 ||
                               strcmp(nn[0],nn[6]) == 0 && strcmp(nn[6],nn[12]) == 0 && strcmp(nn[12],nn[18]) == 0 && strcmp(nn[18],nn[24]) == 0 ||
                               strcmp(nn[4],nn[8]) == 0 && strcmp(nn[8],nn[12]) == 0 && strcmp(nn[12],nn[16]) == 0 && strcmp(nn[16],nn[20]) == 0 ){
                                printf("%s Win",na1);
                                break;
                            }
             no();
        }
 }       else {
             for(;;){
             if(strcmp(nn[0],nn[1]) == 0 && strcmp(nn[1],nn[2]) == 0 && strcmp(nn[2],nn[3]) == 0 && strcmp(nn[3],nn[4]) == 0 && strcmp(nn[4],nn[5]) == 0 && strcmp(nn[5],nn[6]) == 0 && strcmp(nn[6],nn[7]) == 0 && strcmp(nn[7],nn[8]) == 0 ||
                               strcmp(nn[9],nn[10]) == 0 && strcmp(nn[10],nn[11]) == 0 && strcmp(nn[11],nn[12]) == 0 && strcmp(nn[12],nn[13]) == 0 && strcmp(nn[13],nn[14]) == 0 && strcmp(nn[14],nn[15]) == 0 && strcmp(nn[15],nn[16]) == 0 && strcmp(nn[16],nn[17]) == 0 ||
                               strcmp(nn[18],nn[19]) == 0 && strcmp(nn[19],nn[20]) == 0 && strcmp(nn[20],nn[21]) == 0 && strcmp(nn[21],nn[22]) == 0 && strcmp(nn[22],nn[23]) == 0 && strcmp(nn[23],nn[24]) == 0 && strcmp(nn[24],nn[25]) == 0 && strcmp(nn[25],nn[26]) == 0 ||
                               strcmp(nn[27],nn[28]) == 0 && strcmp(nn[28],nn[29]) == 0 && strcmp(nn[29],nn[30]) == 0 && strcmp(nn[30],nn[31]) == 0 && strcmp(nn[31],nn[32]) == 0 && strcmp(nn[32],nn[33]) == 0 && strcmp(nn[33],nn[34]) == 0 && strcmp(nn[34],nn[35]) == 0 ||
                               strcmp(nn[36],nn[37]) == 0 && strcmp(nn[37],nn[38]) == 0 && strcmp(nn[38],nn[39]) == 0 && strcmp(nn[39],nn[40]) == 0 && strcmp(nn[40],nn[41]) == 0 && strcmp(nn[41],nn[42]) == 0 && strcmp(nn[42],nn[43]) == 0 && strcmp(nn[43],nn[44]) == 0 ||
                               strcmp(nn[45],nn[46]) == 0 && strcmp(nn[46],nn[47]) == 0 && strcmp(nn[47],nn[48]) == 0 && strcmp(nn[48],nn[49]) == 0 && strcmp(nn[49],nn[50]) == 0 && strcmp(nn[50],nn[51]) == 0 && strcmp(nn[51],nn[52]) == 0 && strcmp(nn[52],nn[53]) == 0 ||
                               strcmp(nn[54],nn[55]) == 0 && strcmp(nn[55],nn[56]) == 0 && strcmp(nn[56],nn[57]) == 0 && strcmp(nn[57],nn[58]) == 0 && strcmp(nn[58],nn[59]) == 0 && strcmp(nn[59],nn[60]) == 0 && strcmp(nn[60],nn[61]) == 0 && strcmp(nn[61],nn[62]) == 0 ||
                               strcmp(nn[63],nn[64]) == 0 && strcmp(nn[64],nn[65]) == 0 && strcmp(nn[65],nn[66]) == 0 && strcmp(nn[66],nn[67]) == 0 && strcmp(nn[67],nn[68]) == 0 && strcmp(nn[68],nn[69]) == 0 && strcmp(nn[69],nn[70]) == 0 && strcmp(nn[70],nn[71]) == 0 ||
                               strcmp(nn[72],nn[73]) == 0 && strcmp(nn[73],nn[74]) == 0 && strcmp(nn[74],nn[75]) == 0 && strcmp(nn[75],nn[76]) == 0 && strcmp(nn[76],nn[77]) == 0 && strcmp(nn[77],nn[78]) == 0 && strcmp(nn[78],nn[79]) == 0 && strcmp(nn[79],nn[80]) == 0 ||
                               strcmp(nn[0],nn[9]) == 0 && strcmp(nn[9],nn[18]) == 0 && strcmp(nn[18],nn[27]) == 0 && strcmp(nn[27],nn[36]) == 0 && strcmp(nn[36],nn[45]) == 0 && strcmp(nn[45],nn[54]) == 0 && strcmp(nn[54],nn[63]) == 0 && strcmp(nn[63],nn[72]) == 0 ||
                               strcmp(nn[1],nn[10]) == 0 && strcmp(nn[10],nn[19]) == 0 && strcmp(nn[19],nn[28]) == 0 && strcmp(nn[28],nn[37]) == 0 && strcmp(nn[37],nn[46]) == 0 && strcmp(nn[46],nn[55]) == 0 && strcmp(nn[55],nn[64]) == 0 && strcmp(nn[64],nn[73]) == 0 ||
                               strcmp(nn[2],nn[11]) == 0 && strcmp(nn[11],nn[20]) == 0 && strcmp(nn[20],nn[29]) == 0 && strcmp(nn[29],nn[38]) == 0 && strcmp(nn[38],nn[47]) == 0 && strcmp(nn[47],nn[56]) == 0 && strcmp(nn[56],nn[65]) == 0 && strcmp(nn[65],nn[74]) == 0 ||
                               strcmp(nn[3],nn[12]) == 0 && strcmp(nn[12],nn[21]) == 0 && strcmp(nn[21],nn[30]) == 0 && strcmp(nn[30],nn[39]) == 0 && strcmp(nn[39],nn[48]) == 0 && strcmp(nn[48],nn[57]) == 0 && strcmp(nn[57],nn[66]) == 0 && strcmp(nn[66],nn[75]) == 0 ||
                               strcmp(nn[4],nn[13]) == 0 && strcmp(nn[13],nn[22]) == 0 && strcmp(nn[22],nn[31]) == 0 && strcmp(nn[31],nn[39]) == 0 && strcmp(nn[40],nn[49]) == 0 && strcmp(nn[49],nn[58]) == 0 && strcmp(nn[58],nn[67]) == 0 && strcmp(nn[67],nn[76]) == 0 ||
                               strcmp(nn[5],nn[14]) == 0 && strcmp(nn[14],nn[23]) == 0 && strcmp(nn[23],nn[32]) == 0 && strcmp(nn[32],nn[40]) == 0 && strcmp(nn[41],nn[50]) == 0 && strcmp(nn[50],nn[59]) == 0 && strcmp(nn[59],nn[68]) == 0 && strcmp(nn[68],nn[77]) == 0 ||
                               strcmp(nn[6],nn[15]) == 0 && strcmp(nn[15],nn[24]) == 0 && strcmp(nn[24],nn[33]) == 0 && strcmp(nn[33],nn[49]) == 0 && strcmp(nn[42],nn[51]) == 0 && strcmp(nn[51],nn[60]) == 0 && strcmp(nn[60],nn[69]) == 0 && strcmp(nn[69],nn[78]) == 0 ||
                               strcmp(nn[7],nn[16]) == 0 && strcmp(nn[16],nn[25]) == 0 && strcmp(nn[25],nn[34]) == 0 && strcmp(nn[34],nn[58]) == 0 && strcmp(nn[43],nn[52]) == 0 && strcmp(nn[52],nn[61]) == 0 && strcmp(nn[61],nn[70]) == 0 && strcmp(nn[70],nn[79]) == 0 ||
                               strcmp(nn[8],nn[17]) == 0 && strcmp(nn[17],nn[26]) == 0 && strcmp(nn[26],nn[35]) == 0 && strcmp(nn[35],nn[67]) == 0 && strcmp(nn[44],nn[53]) == 0 && strcmp(nn[53],nn[62]) == 0 && strcmp(nn[62],nn[71]) == 0 && strcmp(nn[71],nn[80]) == 0 ||
                               strcmp(nn[0],nn[10]) == 0 && strcmp(nn[10],nn[20]) == 0 && strcmp(nn[20],nn[30]) == 0 && strcmp(nn[30],nn[40]) == 0 && strcmp(nn[40],nn[50]) == 0 && strcmp(nn[50],nn[60]) == 0 && strcmp(nn[60],nn[70]) == 0 && strcmp(nn[70],nn[80]) == 0 ||
                               strcmp(nn[8],nn[16]) == 0 && strcmp(nn[16],nn[24]) == 0 && strcmp(nn[24],nn[32]) == 0 && strcmp(nn[32],nn[40]) == 0 && strcmp(nn[40],nn[48]) == 0 && strcmp(nn[48],nn[56]) == 0 && strcmp(nn[56],nn[64]) == 0 && strcmp(nn[64],nn[72]) == 0){
                                printf("%s Win",na2);
                                break;
                            }
            system("cls");
            tun();
            nx();
            system("cls");
            tun();
            if(strcmp(nn[0],nn[1]) == 0 && strcmp(nn[1],nn[2]) == 0 && strcmp(nn[2],nn[3]) == 0 && strcmp(nn[3],nn[4]) == 0 && strcmp(nn[4],nn[5]) == 0 && strcmp(nn[5],nn[6]) == 0 && strcmp(nn[6],nn[7]) == 0 && strcmp(nn[7],nn[8]) == 0 ||
                               strcmp(nn[9],nn[10]) == 0 && strcmp(nn[10],nn[11]) == 0 && strcmp(nn[11],nn[12]) == 0 && strcmp(nn[12],nn[13]) == 0 && strcmp(nn[13],nn[14]) == 0 && strcmp(nn[14],nn[15]) == 0 && strcmp(nn[15],nn[16]) == 0 && strcmp(nn[16],nn[17]) == 0 ||
                               strcmp(nn[18],nn[19]) == 0 && strcmp(nn[19],nn[20]) == 0 && strcmp(nn[20],nn[21]) == 0 && strcmp(nn[21],nn[22]) == 0 && strcmp(nn[22],nn[23]) == 0 && strcmp(nn[23],nn[24]) == 0 && strcmp(nn[24],nn[25]) == 0 && strcmp(nn[25],nn[26]) == 0 ||
                               strcmp(nn[27],nn[28]) == 0 && strcmp(nn[28],nn[29]) == 0 && strcmp(nn[29],nn[30]) == 0 && strcmp(nn[30],nn[31]) == 0 && strcmp(nn[31],nn[32]) == 0 && strcmp(nn[32],nn[33]) == 0 && strcmp(nn[33],nn[34]) == 0 && strcmp(nn[34],nn[35]) == 0 ||
                               strcmp(nn[36],nn[37]) == 0 && strcmp(nn[37],nn[38]) == 0 && strcmp(nn[38],nn[39]) == 0 && strcmp(nn[39],nn[40]) == 0 && strcmp(nn[40],nn[41]) == 0 && strcmp(nn[41],nn[42]) == 0 && strcmp(nn[42],nn[43]) == 0 && strcmp(nn[43],nn[44]) == 0 ||
                               strcmp(nn[45],nn[46]) == 0 && strcmp(nn[46],nn[47]) == 0 && strcmp(nn[47],nn[48]) == 0 && strcmp(nn[48],nn[49]) == 0 && strcmp(nn[49],nn[50]) == 0 && strcmp(nn[50],nn[51]) == 0 && strcmp(nn[51],nn[52]) == 0 && strcmp(nn[52],nn[53]) == 0 ||
                               strcmp(nn[54],nn[55]) == 0 && strcmp(nn[55],nn[56]) == 0 && strcmp(nn[56],nn[57]) == 0 && strcmp(nn[57],nn[58]) == 0 && strcmp(nn[58],nn[59]) == 0 && strcmp(nn[59],nn[60]) == 0 && strcmp(nn[60],nn[61]) == 0 && strcmp(nn[61],nn[62]) == 0 ||
                               strcmp(nn[63],nn[64]) == 0 && strcmp(nn[64],nn[65]) == 0 && strcmp(nn[65],nn[66]) == 0 && strcmp(nn[66],nn[67]) == 0 && strcmp(nn[67],nn[68]) == 0 && strcmp(nn[68],nn[69]) == 0 && strcmp(nn[69],nn[70]) == 0 && strcmp(nn[70],nn[71]) == 0 ||
                               strcmp(nn[72],nn[73]) == 0 && strcmp(nn[73],nn[74]) == 0 && strcmp(nn[74],nn[75]) == 0 && strcmp(nn[75],nn[76]) == 0 && strcmp(nn[76],nn[77]) == 0 && strcmp(nn[77],nn[78]) == 0 && strcmp(nn[78],nn[79]) == 0 && strcmp(nn[79],nn[80]) == 0 ||
                               strcmp(nn[0],nn[9]) == 0 && strcmp(nn[9],nn[18]) == 0 && strcmp(nn[18],nn[27]) == 0 && strcmp(nn[27],nn[36]) == 0 && strcmp(nn[36],nn[45]) == 0 && strcmp(nn[45],nn[54]) == 0 && strcmp(nn[54],nn[63]) == 0 && strcmp(nn[63],nn[72]) == 0 ||
                               strcmp(nn[1],nn[10]) == 0 && strcmp(nn[10],nn[19]) == 0 && strcmp(nn[19],nn[28]) == 0 && strcmp(nn[28],nn[37]) == 0 && strcmp(nn[37],nn[46]) == 0 && strcmp(nn[46],nn[55]) == 0 && strcmp(nn[55],nn[64]) == 0 && strcmp(nn[64],nn[73]) == 0 ||
                               strcmp(nn[2],nn[11]) == 0 && strcmp(nn[11],nn[20]) == 0 && strcmp(nn[20],nn[29]) == 0 && strcmp(nn[29],nn[38]) == 0 && strcmp(nn[38],nn[47]) == 0 && strcmp(nn[47],nn[56]) == 0 && strcmp(nn[56],nn[65]) == 0 && strcmp(nn[65],nn[74]) == 0 ||
                               strcmp(nn[3],nn[12]) == 0 && strcmp(nn[12],nn[21]) == 0 && strcmp(nn[21],nn[30]) == 0 && strcmp(nn[30],nn[39]) == 0 && strcmp(nn[39],nn[48]) == 0 && strcmp(nn[48],nn[57]) == 0 && strcmp(nn[57],nn[66]) == 0 && strcmp(nn[66],nn[75]) == 0 ||
                               strcmp(nn[4],nn[13]) == 0 && strcmp(nn[13],nn[22]) == 0 && strcmp(nn[22],nn[31]) == 0 && strcmp(nn[31],nn[39]) == 0 && strcmp(nn[40],nn[49]) == 0 && strcmp(nn[49],nn[58]) == 0 && strcmp(nn[58],nn[67]) == 0 && strcmp(nn[67],nn[76]) == 0 ||
                               strcmp(nn[5],nn[14]) == 0 && strcmp(nn[14],nn[23]) == 0 && strcmp(nn[23],nn[32]) == 0 && strcmp(nn[32],nn[40]) == 0 && strcmp(nn[41],nn[50]) == 0 && strcmp(nn[50],nn[59]) == 0 && strcmp(nn[59],nn[68]) == 0 && strcmp(nn[68],nn[77]) == 0 ||
                               strcmp(nn[6],nn[15]) == 0 && strcmp(nn[15],nn[24]) == 0 && strcmp(nn[24],nn[33]) == 0 && strcmp(nn[33],nn[49]) == 0 && strcmp(nn[42],nn[51]) == 0 && strcmp(nn[51],nn[60]) == 0 && strcmp(nn[60],nn[69]) == 0 && strcmp(nn[69],nn[78]) == 0 ||
                               strcmp(nn[7],nn[16]) == 0 && strcmp(nn[16],nn[25]) == 0 && strcmp(nn[25],nn[34]) == 0 && strcmp(nn[34],nn[58]) == 0 && strcmp(nn[43],nn[52]) == 0 && strcmp(nn[52],nn[61]) == 0 && strcmp(nn[61],nn[70]) == 0 && strcmp(nn[70],nn[79]) == 0 ||
                               strcmp(nn[8],nn[17]) == 0 && strcmp(nn[17],nn[26]) == 0 && strcmp(nn[26],nn[35]) == 0 && strcmp(nn[35],nn[67]) == 0 && strcmp(nn[44],nn[53]) == 0 && strcmp(nn[53],nn[62]) == 0 && strcmp(nn[62],nn[71]) == 0 && strcmp(nn[71],nn[80]) == 0 ||
                               strcmp(nn[0],nn[10]) == 0 && strcmp(nn[10],nn[20]) == 0 && strcmp(nn[20],nn[30]) == 0 && strcmp(nn[30],nn[40]) == 0 && strcmp(nn[40],nn[50]) == 0 && strcmp(nn[50],nn[60]) == 0 && strcmp(nn[60],nn[70]) == 0 && strcmp(nn[70],nn[80]) == 0 ||
                               strcmp(nn[8],nn[16]) == 0 && strcmp(nn[16],nn[24]) == 0 && strcmp(nn[24],nn[32]) == 0 && strcmp(nn[32],nn[40]) == 0 && strcmp(nn[40],nn[48]) == 0 && strcmp(nn[48],nn[56]) == 0 && strcmp(nn[56],nn[64]) == 0 && strcmp(nn[64],nn[72]) == 0){
                                printf("%s Win",na2);
                                break;
                            }
             no();
        }
 }

}
