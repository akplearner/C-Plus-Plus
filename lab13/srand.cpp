#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	printf("first number:%d\n",rand()%100);
	srand(time(NULL));
	printf("Random nuber:%d\n",rand()%100);
	srand(1);
	printf("Again the first number: %d\n",rand()%100);

	return 0;
}
