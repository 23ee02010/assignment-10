#include<stdio.h>


struct time {

     int min; 
     int hour;
     int sec;

};
int main(){
    struct time t1;
    struct time t2;

    printf("Enter the first time period : hours , min , sec");
    scanf("%d",&t1.hour);
    scanf("%d",&t1.min);
    scanf("%d",&t1.sec);

    printf("Enter the second time period : hours , min , sec");
    scanf("%d",&t2.hour);
    scanf("%d",&t2.min);
    scanf("%d",&t2.sec);
    
    int timediff;
    int hour;
    int min ;
    int sec;
    
    timediff = t1.hour*60*60 + t1.min*60 + t1.sec -t2.hour*60*60 -t2.min*60 -t2.sec ;
    hour = timediff % 3600;
    
    min = (timediff-3600*hour) % 60 ;
    sec = (timediff-3600*hour -60*min);
    printf("The time difference in t1 and t2 is hour %d , min %d , Sec %d", hour , min ,sec );

    return 0;





}