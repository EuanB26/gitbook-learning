#include <stdio.h>
#include <stdlib.h>

void win() {
	system("/bin/sh");
}

int main() {
	char buf[64];
	puts("What are you going to say?");
	gets(buf);
	puts("Thank you, have a nice day!");
	return 0;
}
