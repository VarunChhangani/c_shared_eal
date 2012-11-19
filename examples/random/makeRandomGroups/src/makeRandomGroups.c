/*
 ============================================================================
 Name        : makeRandomGroups.c
 Author      : Flindt
 Version     :
 Copyright   : Do what ever you like with this code :)
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Random groups ..."); /* prints Random numbers ... */

	// Get input from user
	int noStudents = 7;
	int groupSize = 2;

	// Create random list
	int randomList[20];
	int loopCount = 0;
	int loopCountInner = 0;
	int nextIndex = 0;
	int thisRandomNumber;

	while (loopCount < noStudents) {
		thisRandomNumber = ((unsigned) rand() % noStudents) +1;	// Modulus % will limit the random number to our range
																	// +1 so we can count from 1 in the class

		randomList[loopCount]=thisRandomNumber;
		loopCount++;
	}

	// Print output

	for (loopCount = 0; loopCount < noStudents;
			loopCount = loopCount + groupSize) {
		for (loopCountInner = 0;
				(loopCountInner < groupSize)
						&& ((loopCount + loopCountInner) < noStudents);
				loopCountInner++) {
			printf("\t%i", randomList[loopCount + loopCountInner]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
