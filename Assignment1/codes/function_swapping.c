#include<stdio.h>
/*
The main function passes two strings each to fun1 and fun2 and prints the outputs.

fun1 takes in the pointers to the two strings, and swaps them. But since the values get copied to the parameters, the actual strings don't get swapped.

fun2 takes in the address of the pointers of the two strings. Since fun2 dereferences it one level before swapping, the strings get swapped.
*/

void fun1(char *s1, char *s2){
	char *tmp;
	tmp = s1;
	s1 = s2;
	s2 = tmp;
}

void fun2(char **s1, char **s2){
	char *tmp;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int main(){
	char *str1 = ”Hi”, *str2 = ”Bye”;
	fun1(str1, str2);
	printf(”%s %s ”, str1, str2);
	fun2(&str1, &str2);
	printf(”%s %s”, str1, str2);
	return 0;
}