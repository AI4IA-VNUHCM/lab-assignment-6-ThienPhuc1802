/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	int i,j,e,h;
	char *t="h";
	int Min=10;
	int Max=0;
	j=0;
	e=0;
	
	
	for (i=0;i<strlen(str);i++){

		if (str[i] == ' '|| str[i] == '\0'){
			if (Min>j){
				
				Min = j;
				e=i;
			}
			else if(Max<j){
				Max=j;
				h=i;

			}
			j=0;
		}
		else{
			j++;
		}
	}
   
	printf("Shorgest word: ");
	for(i=e-Min;i<=e-1;i++){
		printf("%c",str[i]);
	}
	

 printf("\n");
	
	printf("Longest word: ");
	for(j=h-Max;j<h-1;++j){
		printf("%c", str[j]);
	}


	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
