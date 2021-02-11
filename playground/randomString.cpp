// run in gcc with: gcc randomString.cpp -lstdc++
// then run: a.exe
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int i , n;
	char * buffer;
	
	printf("How long do you want the string? ");
	scanf("%d", &i);
	
	buffer = (char*) malloc (i+1);
	if(buffer == NULL) exit (1);
	
	for(n=0; n<1; n++)
		buffer[n]=rand()%26+'a';
	buffer[i]='\0';
	
	printf("Random string: %s\n", buffer);
	free (buffer);

	return 0;
}
