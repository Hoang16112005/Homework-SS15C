#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[80];
	int length, index, amount;
	printf("Enter str: \n");
	gets(a);
	length = strlen(a);
	printf("Enter position: ");
	scanf("%d", &index);
	printf("Enter amount of char: ");
	scanf("%d", &amount);
	for(int i = index; i <= length; i++){
		a[i]= a[i + amount];
	}
	length = length - amount;
	puts(a);
}
