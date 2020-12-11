#include "../common/unp.h"

int main(int argc, char **argv) {
    int clt_fd;
    SA svr_addr;

    if ((clt_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("socket failed, errno=%d\n", errno);
        return -1;
    }

    memset(&svr_addr, 0x0, sizeof(svr_addr));
    svr_addr.sa_family = AF_INET;
    svr_addr.sa_port = htons(13);
    

    return 0;
}