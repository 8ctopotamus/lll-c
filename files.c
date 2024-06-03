#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

// file descriptors
/* 0 = stdin
 * 1 = sdout
 * 2 = stderr */

struct database_header_t {
	unsigned short version;
	unsigned short employees;
	unsigned int filesize;
};

int main(int argc, char *argv[]) {
	struct database_header_t head = {0};

	if (argc != 2) {
		printf("Usage: %s <filename>\n", argv[0]);
		return 0;
	}
	
	int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
	if (fd == -1) {
		perror("open");
		return -1;
	}

	char *mydata = "hello there file!\n";
	write(fd, mydata, strlen(mydata));

	if (read(fd, &head, sizeof(head)) != sizeof(head)) {
		perror("read");
		close(fd);
		return -1;
	}

	printf("DB Version %u\n", head.version);
	printf("DB Num Employees: %u\n", head.employees);
	printf("DB File Length: %u\n", head.filesize);

	close(fd);
	return 0;
}
