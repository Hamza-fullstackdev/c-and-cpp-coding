#include<stdio.h>
#include<conio.h>


struct cars{
	char *car_name;
	int speed;
	int model;
	char nic_name;
	char *owner;
};

void func(char name[],int mod,char owner[]){
	printf("%s\n%d\n%s",name,mod,owner);
}

int main(){
	
	struct cars honda;
	honda.car_name="Honda ilyas";
	honda.model=2002;
	honda.owner="Hamza";
	func(honda.car_name,honda.model,honda.owner);
}
