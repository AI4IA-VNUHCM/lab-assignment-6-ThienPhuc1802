/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int i = 0, mark=0;
	while(str[i++] != '\0')
	{
		mark++;
	}
	for(int i = 0; i <= (mark / 2) - 1; i++){
		if(!(str[i] + 1 == str[mark - 1 - i] || str[i] + 2 == str[mark - 1 - i]))
		{
			puts("Invalid!");
			return;
		}
	}
	puts("Valid!");
}


	

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
