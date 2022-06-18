#include <stdio.h>

struct employee
{
char Firstname[20];
char Lastname[20];
//int age;
double Payrate;
};

int main()
{
int i,n;
printf("Enter the number of employees:\n");
scanf("%d",&n);

struct employee emp[n];

for(i=0;i<n;i++)
{
printf("Enter employee First name\n");
scanf("%s",emp[i].Firstname);

printf("Enter employee Last name\n");
scanf("%s",emp[i].Lastname);


printf("Enter employee Payate\n");
scanf("%lf",&emp[i].Payrate);
}

printf("Firstname\tLastname\tpayrate\n");
for(i=0;i<n;i++)
{
printf("%-10s\t%-10s\t$%.2lf\n",emp[i].Firstname,emp[i].Lastname,emp[i].Payrate);
}

return 0;
}
