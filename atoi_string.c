#include<stdio.h>
#include<stdlib.h>

int main(int argc, void* argv[]){
	printf(" String : %s\n",(char *)argv[1]);		//argv[1]'s Character
	printf(" Integer : %d\n",atoi((char *)argv[1]));	//argv[1]'s Integer
	
	return 0;
}
