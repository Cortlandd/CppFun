#include <stdio.h>

typedef struct person {
	char *name;
	char *birthdaymonth;
	int age;
} person;

void print_person(person *c) {
	printf("His name is %s, he was born in %s, and he is %i years old", c->name, c->birthdaymonth, c->age);
}

int main() {

	person cort = { "person Walker", "October", 20 };
	print_person(&cort);

	return 0;
}