#include <stdio.h>
/*
struct 
{
    unsigned int age : 4;
}Age;

int main()
{
    Age.age = 4;
    printf( "Sizeof(Age) : %d\n", sizeof(Age));
    printf( "Age.age : %d\n", Age.age);
    Age.age = 7;
    printf( "Age.age : %d\n", Age.age);
    Age.age = 8;
    printf("Age.age : %d\n", Age.age);
    return 0;
}

int main(){
    int num;
    FILE *fptr;
    fptr = fopen("C:\\Users\\imonuil.suleimanov\\Downloads\\ima.txt", "w");
    if(fptr == NULL){
        printf("Error!");
        exit(1);
    }
    printf("enter num: ");
    scanf("%d, &num");
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}
*/
#include <stdlib.h>
#include <stdio.h>
int main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("C:\\homework\\student.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}