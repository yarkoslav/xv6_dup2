#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

char buf[512];

int main(int argc, char* argv[]) {
	if (argc != 3) {
		printf(2, "Error! Incorrect number of args");
		exit();
	}

	int from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1) {
		printf(2, "Cannot open file!\n");
		exit();
	}

	int to_fd = open(argv[2], O_WRONLY|O_CREATE);
	if (to_fd == -1) {
		printf(2, "Cannot open file!\n");
		exit();
	}
	
	int n;
	while((n=read(from_fd, buf, sizeof(buf))) > 0) {
		if (write(to_fd, buf, n) != n) {
			printf(2, "cp: write error\n");
			exit();
		}
	}
	if (n<0) {
		printf(2, "cp: read error\n");
		exit();
	}
	exit();
}
