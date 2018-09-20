#include<stdio.h>
struct info {     char number ; char name ; float time ;              } ;
int main() { char op[3];
    printf("Are you a customer(yes/no)\n");
    scanf("%s",&op);
    if(op[0]=='n'){
            char psswd;
            printf("Enter your password\n");
            scanf("%s",&psswd);
            if(psswd=="ucsc@123") {
                    databases();

            }


    }
    else {  char type[4];
            printf("Are you a car,bike or a van\n");
            scanf("%s",&type[0]);

            if(type[0]=='c'){
                char car[20];
                int i;

                if(car[i]=='F') {
                    //there are parking space
                    //f means free
                    //if parked 'P'
                    struct info customer;
                    printf("Enter your vehicle number,your name and number of hours you want to park your vehicle: \n");
                    scanf("%s%s%d", &customer.number, &customer.name, &customer.time);
                    car[i]='P';
                    printf("Your should pay %f\n",customer.time*50);
                    printf("Thank you for parking\n");


                }
                else printf("Sorry!! We don't have any space for your vehicle :-(");
            }



    }
}
databases(){
    char num;
    printf("Enter the number of the vehicle: \n");
    scanf("%s",&num);
}
customer(){

}

