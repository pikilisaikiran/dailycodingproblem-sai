#include<stdio.h>
#include<string.h>
#include<stddef.h>
typedef struct weather_t
{
    int citycode;
    char cityname[20];
    double temp;
    double hum;
    double pre;
    unsigned int seq_no;
}weather;
void displayRecord(const weather parr[],int n);
void displayOne(const weather *ptr);
void displayRecord_citycode(const weather parr[],int n,int k);
void  displayRecord_cityname(const weather parr[],int n,char cn[]);
float avgtem(const weather parr[],int n);
char *citywithmintemp(weather parr[],int n);
char *citywithmaxpre(weather parr[],int n);
char *citywithmaxtemp(weather parr[],int n);
int main(){
    weather warr[50]={
          {101,"pune",24,72,523,1},
        {102,"mumbai",25,60,490,2},
        {103,"htd",27,34,398,3},
        {104,"che",1,3,4,4},
        {105,"bang",23,34,453,5},
        [5]={106,"delhi",38,34,398,6}
    };
    printf("\nsize of single: %d\n",sizeof(weather));
    printf("Size of arr: %d\n",sizeof(warr));
    printf("cityname offset: %d\n",offsetof(weather,cityname));
    int length=6;
    int select;
    printf("\n Enter '1' to display all the records\n Enter '2' to display specific record (a) By citycode \n Enter '3' to display specific record (b) by city name \n Enter '4' to display average temperature of all \n Enter '5' to display the city with minimun humidity \n Enter '6'to display city with maximum pressure \n Enter '7' to display city with maximum temperature \n");
    scanf("%d",&select);
    int cc;
    char cn[20];
    switch (select)
    {
    case 1:
        displayRecord(warr,length);
        break;
    case 2:
        printf("\n Enter the city code: ");
        scanf("%d",&cc);
        displayRecord_citycode(warr,length,cc);
        break;
    case 3:
        printf("\n Enter the city name: ");
        scanf("%s",cn);
        displayRecord_cityname(warr,length,cn);
        break;
    case 4:
        printf("\n The average of temperatures of all cities is:%f",avgtem(warr,length));
        break;
    case 5:
        printf("\n The city with minimum temperature is: %s",citywithmintemp(warr,length));
        break;
    case 6:
        printf("\n The city with maximum pressure is: %s",citywithmaxpre(warr,length));
        break;
    case 7:
        printf("\n The city with maximum temperature is: %s",citywithmaxtemp(warr,length));
        break;
    default:
        printf("\n Please enter a valid number\n");
        break;
    }   
return 0;
}
void displayRecord(const weather parr[],int n){
    //printf("Size of arr: %d \n",sizeof(parr));
    const weather *pcur = parr;
    for(int i=0;i<n;i++)
    displayOne(pcur++);
}
void displayOne(const weather *ptr){
    printf("seq no:%d\n", ptr->seq_no);
    printf("cityCode : %d\n", ptr->citycode);
    printf("cityName : %s\n", ptr->cityname);
    printf("Temperature : %lf\n", ptr->temp);
    printf("Humidity : %lf\n", ptr->hum);
    printf("Pressure : %lf\n", ptr->pre);
}
void displayRecord_citycode(const weather parr[],int n,int k){
    const weather *pcur = parr;
    for(int i=0;i<n;i++){
        if(pcur->citycode==k)
        displayOne(pcur);
        pcur++;
    }
}
void  displayRecord_cityname(const weather parr[],int n,char cn[]){
    const weather *pcur =parr;
    for(int i=0;i<n;i++){
        if(strcmp(pcur->cityname,cn)==0){
            displayOne(pcur);
        }
        pcur++;
    }

}
float avgtem(const weather parr[],int n){
    const weather *pcur = parr;
    float avg=0;
    for(int i=0;i<n;i++){
        avg=avg+(pcur->temp);
        pcur++;
    }
    avg=avg/n;
    return avg;
}
char *citywithmintemp(weather parr[],int n){
    weather *pcur = parr;
    float min;
    min=pcur->temp;
    for(int i=0;i<n;i++){
        if((pcur->temp)<=min)
        min=pcur->temp;
        pcur++;
    }
    pcur=parr;
    for(int i=0;i<n;i++){
        if((pcur->temp)==min){
        //displayOne(pcur);
        return (pcur->cityname);
        }
        pcur++;
    }

}
char *citywithmaxpre(weather parr[],int n){
    weather *pcur = parr;
    float max;
    max=pcur->pre;
    for(int i=0;i<n;i++){
        if((pcur->pre)>=max)
        max=pcur->pre;
        pcur++;
    }
    pcur=parr;
    for(int i=0;i<n;i++){
        if((pcur->pre)==max){
            return (pcur->cityname);
        }
        pcur++;
    }
}
char *citywithmaxtemp(weather parr[],int n){
    weather *pcur = parr;
    float max;
    max=pcur->temp;
    for(int i=0;i<n;i++){
        if((pcur->temp)>=max)
        max=pcur->temp;
        pcur++;
    }
    pcur=parr;
    for(int i=0;i<n;i++){
        if((pcur->temp)==max){
            return (pcur->cityname);
        }
        pcur++;
    }
}
