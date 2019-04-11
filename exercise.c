#include <stdio.h>
#include <stdbool.h>

bool checkIfElegibleForVoting(int age){
		if (age>18){
				return true;
		}

		return false;
}

int main(){
		int age;
		printf("Enter your age: ");

		scanf("%d",&age);

		bool eligible = checkIfElegibleForVoting(age);
		if (eligible){
				printf("You can vote");
		} else {
				printf("You cannot vote");
		}
}
