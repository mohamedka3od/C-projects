#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char patient_id[10],patient_name[10],patient_address[30];
int main()
{
    char user [10];
    int p,i;
printf("sign in\n");
for(i=0;i<=3;i++){
if (i==3){exit(1);}
        printf("user name: ");
        scanf("%s",&user);
        printf("password : ");
        scanf("%d",&p);
    if(strcmp("fouad",user)==0&&p==2000){
        break;
    }
    else{
        printf("check your user name or your password and try again\n");
    }
}


    return 0;
}
