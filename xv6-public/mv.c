#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[]) {
	if (argc != 3) {
		printf(2, "Error! Incorrect number of args\n");
		exit();
	}
	if (link(argv[1], argv[2]) == -1) {
		printf(2, "Error! Cannot create hard link\n");
		exit();
	}
	if (unlink(argv[1]) == -1) {
		printf(2, "Error! Cannot remove link!\n");
		exit();
	}
	exit();
}
