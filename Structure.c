#include<stdio.h>

struct student
{
int id;
int registration_number;
float fee;
};

int main ()
{
struct student ragav;
ragav.id=100;
ragav.registration_number=10050;
ragav.fee=555.50;

printf("ragav id=%d \nragav.registration.no=%d \nragav.fee=%f",ragav.id,ragav.registration_number,ragav.fee);

return 0;
}
