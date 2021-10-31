#include<stdio.h>
struct employee
{
    int age,salary,phoneno;
    char name[25];
}emp[100];
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as name ,  age , phoneno , salary\n");
    for(i=1;i<=n;i++)
    {
    	printf("enter details of employee %d",i);
        scanf("%s %d %d %d",&emp[i].name,&emp[i]. age,&emp[i].phoneno,&emp[i].salary);
    }
    printf("\nNAME\tAGE\tPHONENO\tSALARY\n");
    for(i=1;i<=n;i++)
    {
        printf("%s\t%d\t%d\t%d\n",emp[i].name,emp[i].age,emp[i].phoneno,emp[i].salary);
    }
}
