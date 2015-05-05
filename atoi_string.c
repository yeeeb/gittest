#include<stdio.h>
#include<stdlib.h>

int main(int argc, void* argv[]){
	printf(" String : %s\n",(char *)argv[1]);
	printf(" Integer : %d\n",atoi((char *)argv[1]));
	return 0;
}
