#include <stdio.h>

int mynumber()
{
	return 5;
}


void stupid()
{
	printf("I'm a stupid function....\n\n");
}


int sum(int a, int b)
{
	return a+b;
}

void hello(char name[])
{
	printf("Hello, %s\n\n", name);
}


int main() {
	int ans;
  
	hello("Yash");

	ans=sum(3, 7);
	printf("%d\n\n", ans);

	stupid();

	ans = mynumber(); //ans=5
	printf("%d", ans);

  return 0;
}


//4 types of functions:
/*

	1. takes something and returns nothing.
	return type void

	2. takes something and returns something
	return type varies depends upon what you want to return

	3. takes nothing and returns nothing.

	4. takes nothing but returns something.











*/