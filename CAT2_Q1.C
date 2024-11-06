//c structures program
/*
author:moses
reg no:CT101/G/22682/24
date:6/11/2024
*/
#include<stdio.h>
#include<string.h>
struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
}employee1, employee2;

int main(){
	//struct employee employee1, employee2;
	strcpy(employee1.name, "John Doe");
	employee1.id = 12345;
	strcpy(employee1.department, "Human Resources");
	employee1.salary = 55000.50;
	strcpy(employee1.email, "john.doe@company.com");
	
	printf("name: %s \n", employee1.name);
	printf("id: %d \n", employee1.id);
    printf("department: %s \n", employee1.department);
    printf("salary: %f \n", employee1.salary);
    printf("email: %s \n", employee1.email);
	return 0;
}