#include<stdio.h>
#include<string.h>
#include<stdlib>

int main(){
	char arr[9999];
	

	while(gets(arr)!=NULL){	
		char s;	

		for(int i = 0;i<strlen(arr);i++ ){
	
			s=arr[i];
			printf("%c",(s-7));
		}
	}
	return 0;	
}
