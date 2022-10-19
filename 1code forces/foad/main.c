#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int password=110;
char tries=0;
char c = 0;
struct patient{
    char name[25];
    int Age;
    char date[30];
    char address[15];
    int hos_ID;
};
struct patient pat_data[20000];
struct hospital {
    char hospital_address[15];
    int available;
    int exist;
    int hos_ID;
};
struct hospital hos_data[300];
void menu();
void add_hospital();
void add_patient();
void hospitals_data();
void hospital_patients();
void delete_patient();
int main(){
    int q;
    printf("\n Sign in");
    printf("\n**************");
    printf("\n Enter Password ");
    scanf("%d",&q);
    if(password == q ){
        menu();
    }else{
        tries++;
        if(tries==3){
            exit(1);
        }
        main();
    }
    return 0;
}
void menu(){
    printf("\n\n \t 1)Add hospital.");
    printf("\n \t 2)Add patient.");
    printf("\n \t 3)Hospitals Data.");
    printf("\n \t 4)Hospital Patients.");
    printf("\n \t 5)Delete patient .");
    printf("\n \t 6)Sign out.");
    printf("\n\t Enter Number from 1 to 6:");
    switch(getch()){
        case '1':
            add_hospital();
            break;
        case '2':
            add_patient();
            break;
        case '3':
            hospitals_data();
            break;
        case '4':
            hospital_patients();
            break;
        case '5':
            delete_patient();
            break;
        case '6':
            main();
    }
}
void add_hospital(){
    static int i=0;
    fflush(stdin);
    printf("\n\n\tEnter Hospital name :");
    gets(hos_data[i].hospital_address);
    fflush(stdin);
    printf("\n\tEnter the Absorptive capacity :");
    scanf("%d",&hos_data[i].available);
    printf("\n\tEnter the Exist patient :");
    scanf("%d",&hos_data[i].exist);
    printf("\n\tEnter Hospital ID :");
    scanf("%d",&hos_data[i].hos_ID);
    i++;
    menu();
}
void add_patient(){
    int i;
    static int h=0;
    char pname[25];
    fflush(stdin);
    printf("\n\n\tEnter Patient Name :");
    gets(pat_data[h].name);
    fflush(stdin);
    printf("\n\tEnter Hospital Name: ");
    gets(pname);
    for(i=0;i<300;i++){
        if(strcmp(pname,hos_data[i].hospital_address)==0){
            if(hos_data[i].available!=0){
                pat_data[h].hos_ID=hos_data[i].hos_ID;
                hos_data[i].available--;
                hos_data[i].exist++;
            }
       }
    }
    printf("\n\tEnter patient age :");
    scanf("%d",&pat_data[h].Age);
    fflush(stdin);
    printf("\n\tEnter patient address :");
    gets(pat_data[h].address);
    printf("\n\tEnter date of infection :");
    gets(pat_data[h].date);
    h++;
    menu();
}
void hospitals_data(){
    int i;
    printf("\n\t  Hospital  \tAvailable      Exist\tHospital ID");
    printf("\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    for(i=0;i<300;i++){
        if(hos_data[i].hos_ID != 0){
            if(hos_data[i].available!=0){
                printf("\n\t      %-12s %-5d        %-7d\t    %-8d",hos_data[i].hospital_address,hos_data[i].available,hos_data[i].exist,hos_data[i].hos_ID);
            }
        }
    }
    printf("\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    menu();
}
void hospital_patients(){
    int id,i;
    printf("\n\n\tEnter Hospital ID:");
    scanf("%d",&id);
    printf("\n\n\t    Name \t\tAge       Address  \t\tData of Infection");
    printf("\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    for(i=0;i<20000;i++){
        if(pat_data[i].Age!=0){
            if(pat_data[i].hos_ID==id){
                printf("\n\t    %-10s          %-3d      \t%-10s        \t%-30s",pat_data[i].name,pat_data[i].Age,pat_data[i].address,pat_data[i].date);
            }
        }
    }
    printf("\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    menu();
}
void delete_patient(){
    char name[25];
    int i,j;
    fflush(stdin);
    printf("\n\t Name :");
    gets(name);
    for(i=0;i<20000;i++){
        if(strcmp(pat_data[i].name,name)==0){
            strcpy(pat_data[i].name,"");
            strcpy(pat_data[i].address,"");
            strcpy(pat_data[i].date,"");
            pat_data[i].Age=0;
            pat_data[i].hos_ID=0;
            for(j=0;j<300;j++){
                if(pat_data[i].hos_ID == hos_data[i].hos_ID){
                    hos_data[i].available++;
                    hos_data[i].exist--;
                }
            }
            printf("\n\tData deleted");
            menu();
        }
    }
    printf("\n\tWrong Name.");
    delete_patient();
}
