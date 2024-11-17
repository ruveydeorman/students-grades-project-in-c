#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char name[50];
	int number;
	float grades[3];
}student;
 
float calculateavrg(student *std) {
	   int i;
	   float sum = 0,avrg;
	   for (i = 0; i < 3; i++) {
		   sum += std->grades[i];
}
	   return avrg = sum / 3;	 
}
void createstruct(student *std ){
	float a;
	printf("name:");
	scanf_s("%s",&std->name,(unsigned)_countof(std->name));
	printf("number:");
	scanf_s("%d", &std->number);
	printf("grades:");
	scanf_s("%2f%2f%2f", &std->grades[0], &std->grades[1], &std->grades[2]);
	a = calculateavrg(std);
	printf("avarage:%f\n\n",a);
	return;
}
int main() {
	student student1, student2;
	printf("calculate of student gardes\n\n");
	
	createstruct(&student2);

}